# Kompletní průvodce: Architektura procesoru, hardwarové fungování a Asembler

Tento dokument slouží jako detailní referenční příručka pro pochopení nízkoúrovňového fungování procesoru (CPU), toku dat a řízení na sběrnicích, reprezentace dat v paměti a přímého mapování těchto hardwarových konceptů do jazyka **Asembler (Assembly)**.

## 1. Von Neumannova architektura a tok informací

Základem zpracování dat v počítači je **von Neumannův model**. Klíčovou vlastností je, že **data i instrukce programu sdílejí tentýž paměťový prostor (RAM)**.

### Tři typy propojení (Sběrnice):

1. **Datová sběrnice (Data Bus):** Obousměrná dráha, po které proudí reálná data (čísla, znaky) nebo instrukční bajty mezi pamětí RAM a procesorem.

2. **Adresní sběrnice (Address Bus):** Jednosměrná dráha z procesoru do RAM. Procesor po ní posílá číselný index (adresu), se kterým paměťovým místem chce pracovat.

3. **Řídící sběrnice (Control Bus):** Skupina vodičů, kterými **Řadič (Control Unit)** posílá spínací impulsy ostatním obvodům (*"čti z paměti"*, *"zapiš do registru"*, *"sečti v ALU"*).

> **Důležité pravidlo:** Mezi ALU a Řadičem **neprobíhá žádný datový tok**. Řadič nečte data určená k výpočtům. Řadič pouze přijímá instrukce z paměti, posílá ALU řídící signály a zpět dostává stavová hlášení (příznaky z registru `FLAG`).

## 2. Detailní rozbor komponent a registrů procesoru

Registry jsou nejrychlejší paměťová místa umístěná přímo na křemíkovém čipu procesoru.

```
+-------------------------------------------------------------------+
|                            PROCESOR                               |
|  +-------------------+        +--------------------------------+  |
|  |     ALU / FPU     |<======>| S - Střadač (Datové registry)  |  |
|  +-------------------+        +--------------------------------+  |
|    ^      |   |                                |                  |
|    |      |   +================================|== Datová sběrnice|
|  řídící   |                                    v                  |
|  signál  oper. znak                   +-----------------+         |
|    |     instrukce                    | RI - Registr    |         |
|    |      |                           |      instrukcí  |         |
|  +--------------+                     +-----------------+         |
|  |    Řadič     |                              | adresa operandu  |
|  | (mikrokód)   |                     +-----------------+         |
|  +--------------+                     | IND - Index-    |         |
|    |      |                           |       registr   |         |
|    |    řídící                        +-----------------+         |
|    |    signál                                 | modifikace adresy|
|    v      v                           +-----------------+         |
|  +--------------+                     | IP - Čítač      |         |
|  |     FLAG     |<--------------------|      instrukcí  |         |
|  +--------------+                     +-----------------+         |
|                                                |                  |
+------------------------------------------------|------------------+
                                                 v Adresní sběrnice


```

### A. IP – Čítač instrukcí (Instruction Pointer / Program Counter)

* **Význam:** Udržuje paměťovou adresu **další instrukce**, která se má vykonat.

* **Fungování:**

  * V běžném stavu se po načtení instrukce automaticky zvýší ($IP + 1$, resp. o počet bajtů instrukce) pomocí interního inkrementátoru.

  * Nepřistupuje se k němu přímým zápisem dat. Jeho hodnota se mění nepřímo při řízeném skoku (`JMP`, `CALL`, `RET`).

* **Sběrnice:** Výstup z IP je napojen přímo na **adresní sběrnici**.

### B. RI – Registr instrukcí (Instruction Register)

* **Význam:** Dočasný registr, do kterého přiteče instrukce stažená z paměti RAM.

* **Fungování:**

  * Obsahuje bajty strojového kódu načtené instrukce.

  * Instrukce se v RI dělí na dvě části:

    1. **Operační znak (Opcode):** Kód operace (*"co se má dělat"*), který směřuje do **Řadiče**.

    2. **Adresa operandu / Imandátní hodnota:** Data nebo adresa (*"s čím se to má dělat"*), která směřují na adresní/datovou sběrnici.

### C. Řadič (Control Unit / CU)

* **Význam:** "Mozek" a dirigent procesoru.

* **Fungování:**

  * Přečte operační znak z RI a pomocí vnitřního **mikrokódu** jej rozloží na sérii sekvenčních elektronických impulsů.

  * Otvírá a zavírá hradla na sběrnicích, řídí časování a předává pokyny ALU a paměti.

### D. ALU a FPU (Výpočetní jednotky)

* **ALU (Arithmetic Logic Unit):** Provádí celočíselné matematické operace (`ADD`, `SUB`, `MUL`, `DIV`) a bitové logické operace (`AND`, `OR`, `XOR`, `NOT`, posuny).

* **FPU (Floating Point Unit):** Samostatný koprocesor specializovaný na výpočty s desetinnými čísly podle standardu IEEE 754.

### E. S – Střadač / Akumulátor (Sada datových registrů)

* **Význam:** Hlavní pracovní přihrádka pro data přiváděná do ALU/FPU.

* **Fungování:**

  * Drží vstupní operandy pro výpočet v ALU.

  * Přijímá a uchovává výsledek provedené operace.

  * V architektuře x86 odpovídá registrům jako `EAX`/`RAX`, `EBX`/`RBX`, `ECX`/`RCX`, `EDX`/`RDX`.

### F. FLAG – Stavové slovo procesoru (Flag Register)

* **Význam:** Registr jednobitových přepínačů (vlajek), které indikují vlastnosti výsledku poslední operace provedené v ALU.

* **Klíčové příznaky (Flags):**

  * **ZF (Zero Flag):** Nastaví se na `1`, pokud byl výsledek operace roven `0`.

  * **SF (Sign Flag):** Kopíruje nejvyšší (znaménkový) bit výsledku. `1` znamená záporný výsledek.

  * **CF (Carry Flag):** Příznak přenosu. Nastaví se na `1`, pokud došlo k přetečení rozsahu při operaci s **nezápornými čísly (unsigned)**.

  * **OF (Overflow Flag):** Příznak přetečení. Nastaví se na `1`, pokud došlo k přetečení rozsahu při operaci se **znaménkovými čísly (signed / doplňkový kód)**.

### G. IND – Indexregistr (Index Register)

* **Význam:** Slouží k modifikaci adres (přičítání posunu/offsetu k základní adrese). Má spoj s Adresní sběrnicí, a volá do RAM když chcem vzít nějaký data, Data se ukládají jinde než příkazy.

* **Fungování:** Využívá se při adresování prvků v polích nebo datových strukturách. V x86 reprezentován např. registry `ESI` (Source Index) a `EDI` (Destination Index). Propojení $IND \rightarrow IP$ umožňuje dynamický výpočet cílové adresy skoku.

## 3. Instrukční cyklus krok za krokem

Zpracování každé instrukce probíhá v neustále se opakujícím čtyřfázovém cyklu:

```
+---------------------------------------------------------------+
| 1. FETCH (Načtení)                                            |
|    - IP pošle adresu po Adresní sběrnici do RAM.               |
|    - RAM pošle instrukci po Datové sběrnici do RI.            |
|    - IP se inkrementuje (IP = IP + délka instrukce).          |
+---------------------------------------------------------------+
                               |
                               v
+---------------------------------------------------------------+
| 2. DECODE (Dekódování)                                        |
|    - Řadič přečte operační znak instrukce z RI.              |
|    - Mikrokód Řadiče dekóduje, jaké obvody je třeba aktivovat. |
+---------------------------------------------------------------+
                               |
                               v
+---------------------------------------------------------------+
| 3. EXECUTE (Vykonání)                                         |
|    - Řadič pošle řídící signál do ALU a Střadače (S).        |
|    - ALU zpracuje data ze Střadače S a případný operand z RI. |
|    - Výsledek se uloží zpět do Střadače S.                    |
+---------------------------------------------------------------+
                               |
                               v
+---------------------------------------------------------------+
| 4. UPDATE FLAGS (Aktualizace příznaků)                        |
|    - ALU vyhodnotí výsledek a nastaví bity v registru FLAG.   |
|    - Řadič je připraven na načtení další instrukce z adresy IP. |
+---------------------------------------------------------------+


```

## 4. Reprezentace dat v hardwaru

### A. Celá čísla se znaménkem (Doplňkový kód / Two's Complement)

Záporné číslo $-x$ v $n$-bitové reprezentaci získáme jako:

$$
\text{Doplňkový kód} = \bar{x} + 1
$$

*(Bitová negace všech bitů + přičtení čísla 1).*

#### Rozsah 8bitového čísla:

* **Unsigned (bez znaménka):** $0 \dots 255$ ($00000000_2 \dots 11111111_2$)

* **Signed (se znaménkem):** $-128 \dots +127$ ($10000000_2 \dots 01111111_2$)

#### Matematika určování příznaku Overflow ($OF$):

HW vyhodnocuje přetečení podle přenosu z nejvyššího bitu ($c_n$) a přenosu do nejvyššího bitu ($c_{n-1}$):

$$
OF = c_n \oplus c_{n-1}
$$

Pokud dojde k přenosu do znaménkového bitu, ale už ne ven z něj (nebo naopak), operace XOR vrátí `1` a indikuje chybné znaménko výsledku.

### B. Desetinná čísla (Standard IEEE 754 - 32bit Float)

Reálné číslo je v paměti reprezentováno ve tvaru:

$$
x' = (-1)^s \cdot (1,m) \cdot 2^e
$$

```
 Bit 31     Bity 30--23            Bity 22--0
+-------+-----------------+---------------------------------------+
|  s    |   exponent e'   |             mantisa m'                |
| (1b)  |     (8 bitů)    |              (23 bitů)                |
+-------+-----------------+---------------------------------------+


```

1. **Znaménko** $s$ **(Bit 31):** `0` pro kladná čísla, `1` pro záporná.

2. **Exponent** $e'$ **(Bity 30–23):** Ukládá se s posunem nuly (bias) $+127$.

   $$
   e' = e + 127
   $$

3. **Mantisa** $m'$ **(Bity 22–0):** Ukládá pouze část **za binární čárkou**. Vedoucí jednička ($1,m$) je tzv. **skrytá jednička** a do paměti se fyzicky nezapisuje (ušetří se 1 bit).

> **Principiální vědomost:** Obrovská čísla jako $3{,}4 \cdot 10^{38}$ nezabírají v RAM žádné nuly navíc. Zaberou **vždy přesně 32 bitů**. Velikost čísla udává binární hodnota uložená v 8 bitech exponentu.

## 5. Přechod k programování v Asembleru (Assembly)

Asembler je symbolický přepis strojového kódu procesoru. Místo zápisu binárních bajtů používá mnemotechnické zkratky instrukcí (`MOV`, `ADD`, `SUB`, `JMP`).

### A. Mapování teoretického schématu na x86-64 registry

| Registr na schématu | x86 (32-bit) | x86-64 (64-bit) | Účel v Asembleru | 
| ----- | ----- | ----- | ----- | 
| **IP (Čítač instrukcí)** | `EIP` | `RIP` | Ukazatel na vykonávaný kód. | 
| **S (Střadač)** | `EAX` | `RAX` | Hlavní akumulátor pro aritmetiku a návratové hodnoty funkcí. | 
| **S (Datové registry)** | `EBX`, `ECX`, `EDX` | `RBX`, `RCX`, `RDX`, `R8`–`R15` | Všeobecné registry pro uchování dat a čítače cyklů. | 
| **IND (Indexregistr)** | `ESI`, `EDI` | `RSI`, `RDI` | Indexace polí, zdroj/cíl při blokových přesunech v paměti. | 
| **Ukazatel zásobníku** | `ESP`, `EBP` | `RSP`, `RBP` | Správa paměťového rámce funkcí a lokálních proměnných. | 
| **FLAG** | `EFLAGS` | `RFLAGS` | Příznaky výsledků (`ZF`, `SF`, `CF`, `OF`). | 

### B. Práce s pamětí v Asembleru

Programátor v Asembleru nepíše natvrdo reálná čísla fyzických adres v RAM. Používá **náveští (labels)** pro globální data a **relativní posun od registrů** pro lokální data na zásobníku.

#### 1. Globální proměnné (`.data` sekce)

Asembler a Linker přiřadí náveštím relativní offsety. Zaváděč operačního systému (OS Loader) je při spuštění namapuje do virtuální paměti RAM.

```
section .data
    pocatecni_cislo dd 100       ; dd = Define Doubleword (4 bajty)
    druhe_cislo     dd 50        ; leží v paměti o 4 bajty dále

section .text
    global _start

_start:
    ; Hranaté závorky [] znamenají přístup do paměti na danou adresu
    MOV EAX, [pocatecni_cislo]   ; Přesun hodnoty 100 z RAM do střadače EAX
    ADD EAX, [druhe_cislo]      ; ALU sečte EAX + 50, výsledek (150) uloží do EAX


```

#### 2. Lokální proměnné a Zásobník (Stack)

Lokální proměnné uvnitř funkcí dynamicky alokujeme posunem ukazatele zásobníku `ESP`/`RSP`. Adresují se pomocí offsetu vůči bázovému registru `EBP`/`RBP`.

```
moje_funkce:
    PUSH EBP            ; Uložení starého bázového ukazatele
    MOV EBP, ESP        ; Nastavení nového rámce funkce
    SUB ESP, 8          ; Vyhrazení 8 bajtů na zásobníku pro 2 lokální proměnné

    MOV dword [EBP-4], 10  ; První lokální proměnná = 10
    MOV dword [EBP-8], 20  ; Druhá lokální proměnná = 20

    MOV EAX, [EBP-4]    ; Načtení první proměnné do EAX
    ADD EAX, [EBP-8]    ; Sečtení s druhou proměnnou (EAX = 30)

    MOV ESP, EBP        ; Uvolnění lokálních proměnných ze zásobníku
    POP EBP             ; Obnovení starého bázového ukazatele
    RET                 ; Návrat z funkce (IP se načte ze zásobníku)


```

### C. Reakce na příznaky (FLAG) a podmíněné skoky

V Asembleru po provedení operace v ALU nevyhodnocujeme registr `FLAG` ručně, ale používáme **instrukce podmíněných skoků**, které interně čtou bity z registru `FLAG`.

```
    MOV EAX, 120
    ADD EAX, 20         ; Pokus o sečtení: v 8-bitovém/signed kontextu dojde k přetečení!

    JO  pripad_overflown ; Jump if Overflow (OF=1): Skok na náveští, pokud ALU nastavila OF
    JS  pripad_zaporne   ; Jump if Sign (SF=1): Skok, pokud je výsledek záporný
    JZ  pripad_nula      ; Jump if Zero (ZF=1): Skok, pokud je výsledek přesně 0

    ; Pokračování, pokud k žádné z těchto situací nedošlo...
    JMP konec

pripad_overflown:
    ; Zpracování chyby přetečení
    ...

konec:


```

## 6. Shrnutí toku zpracování od vývojáře po procesor

1. **Vývojář:** Napevno napíše instrukce v Asembleru nebo vyšším jazyce (C/C++).

2. **Kompilátor & Asembler:** Přeloží textové mnemotechniky na binární bajty strojového kódu.

3. **Linker:** Propojí kód s knihovnami a sestaví spustitelný soubor (`.exe` / ELF).

4. **OS Loader:** Načte bajty ze souboru do vyhrazeného bloku ve **virtuální RAM** a nastaví registr **IP** procesoru na počáteční instrukci.

5. **Hardware CPU:** Spustí instrukční cyklus **Fetch-Decode-Execute**. **IP** předává adresy, **RI** přijímá instrukce, **Řadič** řídí sběrnice, **ALU** počítá nad **Střadačem (S)** a vyhodnocuje výstup do registru **FLAG**.