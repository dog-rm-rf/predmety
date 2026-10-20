# Úvod do principu počítačů a kódování čísel
**Přednáška 03**  
**Autor:** David Buchtela  
**Pracoviště:** Katedra informačního inženýrství, Provozno ekonomická fakulta ČZU v Praze  

---

## 1. Kódování celých čísel (Čísla s pevnou řádovou čárkou)

Celá čísla zahrnují kladná i záporná čísla. V počítači však binární čísla nemají přímé znaménko (především symbol `-`). Je proto nutné najít způsob převodu celých čísel na nezáporná (přirozená) čísla.

Podle předpokládaného rozsahu se celá čísla ukládají do **1 až 4 bajtů (Byte)**:

| Kódové slovo | Rozsah (pouze kladná / nezáporná) | Rozsah (kladná i záporná) |
| :--- | :--- | :--- |
| **1 byte** (8 bitů) | $0 \div 255$ | $-128 \div 127$ |
| **2 byte** (16 bitů) | $0 \div 65\,535$ | $-32\,768 \div 32\,767$ |
| **4 byte** (32 bitů) | $0 \div 4\,294\,967\,295$ | $-2\,147\,483\,648 \div 2\,147\,483\,647$ |

---

## 2. Doplňkový kód

Pro uložení celých čísel $X$ v počítači se nejčastěji používá **doplňkový kód**. Pro kódové slovo $X'$ platí:

- **Je-li $X$ kladné nebo nula ($X \ge 0$):**  
  $X' = X$
- **Je-li $X$ záporné ($X < 0$):**  
  $X' = X + 2^n$
  *kde $n$ je délka kódového slova v bitech.*

Kódové slovo $X'$ (v desítkové soustavě) se následně převede do binární soustavy.

### Příklady (8bitové kódové slovo, $n = 8$):

| Číslo $X$ | Kódové slovo $X'$ (desítkově) | Kódové slovo $X'$ (binárně - 8b) | Kódové slovo $X'$ (hexadecimálně) |
| :---: | :---: | :---: | :---: |
| **0** | $0$ | `0000 0000` | `00` |
| **53** | $53$ | `0011 0101` | `35` |
| **-53** | $53 + 256 = 203$ | `1100 1011` | `CB` |

---

## 3. Vlastnosti doplňkového kódu a výpočet doplňku $d(x)$

### Vlastnosti doplňkového kódu:
- U nezáporného čísla je hodnota prvního bitu zleva (nejvyšší bit) **0**.
- U záporného čísla je hodnota prvního bitu zleva **1**.
- Doplňkový kód je velmi výhodný pro provádění aritmetických operací (především sčítání).

### Doplněk $d(x)$:
Doplněk $d(x)$ splňuje vztah:  
$x + d(x) = 0 \implies d(x) = -x$

**Postup získání doplňku $d(x)$ k číslu $x$ v binárním zápisu:**
1. V binárním zápisu čísla $x$ zaměníme všechny `0` za `1` a všechny `1` za `0` (zobracení/negace bitů).
2. Přičteme binárně hodotu $1$. Výsledek je doplněk $d(x)$.

#### Příklad výpočtu (8 bitů):
- Číslo $X = 53$: `0011 0101`
- Negace bitů: `1100 1010`
- Přičtení $+1$: `1100 1011` $\implies d(53) = -53$
- Zpětná negace pro $-53$: `0011 0100`
- Přičtení $+1$: `0011 0101` $\implies d(-53) = 53$

---

## 4. Sčítání dvou čísel v doplňkovém kódu

Mějme dvě $n$-bitová čísla $A = (a_{n-1}, \dots, a_1, a_0)$ a $B = (b_{n-1}, \dots, b_1, b_0)$ v doplňkovém kódu.

### 1. Stanovení řetězce přenosu (Carry) $C = (c_n, c_{n-1}, \dots, c_1, c_0)$:
- $c_0 = 0$ (vždy)
- Pro $0 \le i \le n-1$:
  - $c_{i+1} = 1$, pokud alespoň dvě z hodnot $a_i, b_i, c_i$ jsou rovny $1$.
  - $c_{i+1} = 0$ v opačném případě.

### 2. Výpočet výsledného součtu $S = (s_{n-1}, \dots, s_1, s_0)$:
Pro všechna $i$ ($0 \le i \le n-1$) platí:  
$s_i = a_i \oplus b_i \oplus c_i$
*(kde $\oplus$ označuje operaci XOR).*

### 3. Validační kritérium přetečení (Overflow):
Spočítáme validační bit $v = c_n \oplus c_{n-1}$:
- **Pokud $v = c_n \oplus c_{n-1} = 1$:** Výsledný součet $A + B$ **nelze vyjádřit** ve zvoleném $n$-bitovém doplňkovém kódu. Hodnota $S$ neodpovídá skutečnému součtu $A + B$ – došlo k **přeplnění (přetečení, overflow)**.
- **Pokud $v = 0$:** Výsledný řetězec $S$ správně vyjadřuje součet $A + B$.

#### Příklad sčítání pro 4bitový doplňkový kód ($n = 4$):
Sčítáme $A = +5$ (`0101`) a $B = -4$ (`1100`):

```text
    +5  A:   0  1  0  1
    -4  B:   1  1  0  0
        C: 1 1  0  0  0
 ----------------------
    +1  S:   0  0  0  1
```

Validační bit $v = c_4 \oplus c_3 = 1 \oplus 1 = 0 \implies$ Výsledek `0001` ($+1$) je platný.

---

## 5. Násobení a dělení čísla $X$ mocninou $2^k$

### Násobení čísla $X$ mocninou $2^k$ ($S = X \cdot 2^k$):
- Binární řetězec čísla $X$ se **posune o $k$ míst vlevo**.
- Zprava na uvolněná prázdná místa se doplní hodnoty **`0`**.

### Dělení čísla $X$ mocninou $2^k$:
- Binární řetězec čísla $X$ se **posune o $k$ míst vpravo**.
- Zleva na uvolněná prázdná místa se doplní **stejná hodnota, jakou má nejvyšší bit $x_{n-1}$** (původní znaménkový bit).
- Jelikož podíl nemusí být celé číslo, doplňkový kód určuje:
  - Výsledek celočíselného dělení: **$D = X \text{ div } 2^k$**
  - Zbytek po celočíselném dělení: **$M = X \text{ mod } 2^k$**

---

## 6. Čísla v pohyblivé řádové čárce (IEEE 754)

Reálná čísla se v počítači nejčastěji zobrazují ve formátu **IEEE 754**.

### Struktura 32bitového kódového slova (binary32 / single precision):
Kódové slovo $x'$ reprezentuje číslo $x$ ve tvaru:  
$$x' = \pm 1,m \cdot 2^e$$

| Bit | 31 | 30 ... 23 | 22 ... 0 |
| :--- | :---: | :---: | :---: |
| **Význam** | **Znaménko ($\pm$)** | **Exponent $e'$ (8 bitů)** | **Mantisa $m'$ (23 bitů)** |

1. **Znaménko ($\pm$):** 1 bit (bit 31). Nezáporná čísla $\rightarrow 0$, záporná čísla $\rightarrow 1$.
2. **Exponent ($e$):** Celé číslo z intervalu $\langle -126; 127 \rangle$. Ukládá se v kódu s posunutou nulou:  
   $$e' = e + 2^{8-1} - 1 = e + 127$$
3. **Mantisa ($m$):** Reálné číslo zobrazené 23 bity ($m' = a_{22} a_{21} \dots a_0$), kde hodnota mantisy je:  
   $$m = \sum_{i=1}^{23} a_{23-i} \cdot 2^{-i}$$

### Speciální hodnoty v IEEE 754:
- **Nula ($\pm 0$):** Znaménko ($\pm$), $e = 0$, $m = 0$. Formát čísla $\rightarrow \pm 0,m \cdot 2^e$.
- **Nekonečno ($\pm \infty$):** Znaménko ($\pm$), exponent $e$ obsahuje samé jedničky ($255$), mantisa $m = 0$.
- **Nedefinovaná hodnota (NaN – Not a Number):** Znaménko ($\pm$), exponent $e$ obsahuje samé jedničky, mantisa $m \neq 0$.
- **Velmi malá čísla blízko nule (denormalizovaná):** Znaménko ($\pm$), exponent $e$ obsahuje samé nuly, mantisa $m \neq 0$. Formát čísla $\rightarrow \pm 0,m \cdot 2^e$.

### Varianty přesnosti (IEEE 754-2008):

| Formát (IEEE 754) | binary16 | binary32 | binary64 | binary128 |
| :--- | :---: | :---: | :---: | :---: |
| **Značení** | — | *single* | *double* | — |
| **Šířka kódového slova (bitů)** | **16** | **32** | **64** | **128** |
| - Znaménko (bit) | 1 | 1 | 1 | 1 |
| - Šířka exponentu (bitů) | 5 | 8 | 11 | 15 |
| - Šířka mantisy (bitů) | 10 | 23 | 52 | 112 |
| **Max. exponent ($\pm$)** | **15** | **127** | **1 023** | **16 383** |

---

## 7. Princip počítače Von Neumannova typu

### Koncepce konstrukce počítače:
- **John von Neumannovo schéma:** Používá **jednu společnou elektronickou paměť** pro program i pro data. Publikačně doloženo roku 1945 v článku *"First Draft of a Report on the EDVAC"*.
- **Harvardské schéma:** Používá **oddělenou paměť** pro data a paměť pro program.

### Princip činnosti počítače Von Neumannova typu:
1. Pomocí **vstupních zařízení** se do operační paměti umístí **program**, který má být prováděn.
2. Do operační paměti se stejným způsobem nahrají **data**, která bude program zpracovávat.
3. Proběhne vlastní výpočet, jehož jednotlivé kroky provádí **ALU (Aritmeticko-logická jednotka)**.
4. ALU je v průběhu výpočtu spolu s ostatními moduly řízena **řadičem počítače**.
5. Mezivýsledky výpočtu se ukládají do **registrů** nebo **operační paměti**.
6. Po skončení výpočtu se výsledky odešlou na **výstupní zařízení**.

### Registry procesoru:
- **Čítač instrukcí (IP – Instruction Pointer):** Obsahuje adresu právě prováděné (nebo následující) instrukce v paměti.
- **Registr instrukcí (RI):** Obsahuje instrukci načtenou z paměti určenou k dekódování.
- **Stavové slovo procesoru (Flag Register):** Registr příznaků, jehož jednotlivé bity se nastavují podle výsledků operací (např. nula, záporný výsledek, přetečení).
- **Střadač (S / Akumulátor):** Obsahuje výsledek právě provedené instrukce.
- **Indexregistr (IND):** Slouží pro modifikaci adresy (přičtení indexu k adrese operandu).

---

## 8. Programové vybavení počítače (Software)

Software se skládá z **programů**. Každý program je tvořen posloupností instrukcí vyššího či nižšího programovacího jazyka nebo instrukcí procesoru (**strojového kódu**). Instrukce přesně určuje, jaká operace se má s daty provést.

### Rozdělení software:
- **Systémový software:** Programové vybavení na úrovni operačního systému a vývojových nástrojů / programovacích jazyků.
- **Aplikační software:** Programové vybavení určené pro řešení konkrétních uživatelských úloh (textové editory, tabulkové procesory apod.).
- **Firmware:** Programové vybavení, které tvoří přímou součást hardwarového vybavení (řídicí kód v pamětích ROM/Flash). Až na výjimky není uživatelem modifikovatelné.

---

## 9. Strojový kód a instrukce počítače

- **Strojový kód (Machine code):** Program vyjádřený v počítači jako posloupnost instrukcí procesoru (posloupnost bytů resp. bitů). Z hlediska uživatele je nesrozumitelný, ze strany systému přímo proveditelný.
- **Jazyk symbolických instrukcí (Assembler):** Mnemotechnický zápis strojových instrukcí srozumitelný pro člověka.
- Strojový kód závisí na konkrétním typu procesoru (architektuře).

### Formát strojové instrukce:
Strojová instrukce typicky obsahuje:
1. **Operační kód:** Určuje, jaká operace se má vykonat.
2. **Adresu vstupního operandu (operandů):** Identifikuje data, se kterými instrukce pracuje.
3. **Adresu výstupního operandu:** Stanoví adresu, kam bude po provedení uložen výsledek.
4. **Adresu následně vykonané instrukce:** Udává adresu další instrukce (pokud chybí, procesor pokračuje bezprostředně následující instrukcí v paměti).

---

## 10. Činnost procesoru při provádění programu

Každá instrukce je procesorem zpracovávána ve **dvou základních fázích**:

### 1. Výběrová fáze (Fetch):
1. Řadič přenese obsah čítače instrukcí (**IP**) na adresní sběrnici a vydá příkaz ke čtení z hlavní paměti (**HP**).
2. Hlavní paměť přenese obsah adresované buňky na datovou sběrnici.
3. Řadič uloží přijatou instrukci do registru instrukcí (**RI**).
4. Obsah čítače instrukcí (**IP**) se zvýší o 1 (případně o délku instrukce).

### 2. Prováděcí fáze (Execute):
1. Instrukce v registr instrukcí (**RI**) je řadičem dekódována.
2. Je-li nastaven příznak modifikace indexregistrem (**IND**), přičte se obsah **IND** k adrese operandu.
3. Řadič naadresuje hlavní paměť a přečte obsah vstupních operandů.
4. V součinnosti s **ALU** se instrukce provede a výsledek se uloží do střadače (**S**).
5. Řadič zajistí přenos výsledku ze střadače na adresu výstupního operandu.

---

## 11. Vstupní a výstupní operandy a způsoby adresace

Vstupní i výstupní operand může být umístěn:
- **V hlavní paměti** (určen jednoznačně adresou).
- **V registru procesoru** (rychlá paměť přímo v procesoru).

**Způsob adresace operandu** určuje, jakým způsobem procesor podle obsahu pole instrukce identifikuje skutečnou adresu operandu.

### Přehled způsobů adresace:

1. **Bezprostřední adresace ($X \rightarrow S$):**
   - Pracuje se přímo s hodnotou $X$ uvedenou v instrukci.
   - Operand je k dispozici ihned po načtení instrukce, bez nutnosti dalšího čtení z paměti.
   - *Příklad:* Pro $X = 100$ se do střadače $S$ uloží přímo hodnota `100`.

2. **Přímá adresace ($\langle X \rangle \rightarrow S$):**
   - Hodnota $X$ v instrukci představuje adresu v hlavní paměti.
   - *Příklad:* Pokud adresa `100` v paměti obsahuje hodnotu `102`, při $X = 100$ se do střadače $S$ uloží hodnota `102`.

3. **Nepřímá adresace ($\langle\langle X \rangle\rangle \rightarrow S$):**
   - Hodnota $X$ udává adresu v paměti, na které je uložena *další adresa* operandu.
   - *Příklad:* Pokud adresa `100` obsahuje `102` a adresa `102` obsahuje `101`, při $X = 100$ se do $S$ uloží hodnota `101`.

4. **Adresace s posuvem ($\langle X + \langle R \rangle \rangle \rightarrow S$):**
   - K obsahu registru $R$ se přičte hodnota $X$ a pracuje se s obsahem výsledné adresy.
   - **Relativní adresace:** $R = \text{čítač instrukcí (IP)}$, $X = \text{posuv } \pm$.
   - **Bázová (segmentová) adresace:** $R = \text{základní adresa v HP (báze/segment)}$, $X = \text{kladný posuv}$.
   - **Indexová adresace:** $X = \text{adresa v HP}$, $R = \text{indexregistr (IND)}$.
   - *Příklad indexové adresace:* Pro $X = 100$ a $\text{IND} = 1$ se čte z adresy $100 + 1 = 101$. Obsahuje-li adresa `101` hodnotu `40`, do $S$ se uloží `40`.

---

## 12. Typy strojových instrukcí

Strojové instrukce dělíme do tří základních skupin:

1. **Aritmetické a logické instrukce:**
   - **Aritmetické:** Sčítání, odčítání, násobení, dělení.
   - **Logické:** Logický součet (OR), logický součin (AND), negace (NON/NOT), nonekvivalence (XOR).
   - **Posuvy a rotace:** Posouvají nebo rotují bity v registrech.

2. **Instrukce pro přenos dat:**
   - **Čtení z paměti:** Přenos dat z operační paměti do registru procesoru.
   - **Zápis do paměti:** Uložení dat z registru do operační paměti.
   - **Přesun mezi registry:** Přenos dat z jednoho registru do druhého.
   - **Vstupní a výstupní operace (I/O):** Čtení ze vstupního zařízení nebo zápis na výstupní zařízení.

3. **Řídicí instrukce:**
   - **Nepodmíněné skoky:** Přenášejí řízení programu na jinou adresu v paměti.
   - **Podmíněné skoky:** Přenášejí řízení jen při splnění podmínky (např. výsledek byl nulový nebo záporný).
   - **Volání podprogramu:** Uloží návratovou adresu a skočí na začátek podprogramu.
   - **Návrat z podprogramu:** Načte uloženou návratovou adresu a vrátí se do hlavního programu.
   - **Instrukce HALT:** Zastaví vykonávání programu a převede procesor do klidového stavu.

---

## 13. Logické instrukce a operace

Logické instrukce provádějí bitové operace nad operandy.

### Přehled logických operací:
- **AND** (logický součin, konjunkce): Značení $\land$, $\cdot$, `&`
- **OR** (logický součet, disjunkce): Značení $\lor$, $+$, `|`
- **EQ** (ekvivalence, stejnost): Značení $\leftrightarrow$, $\Leftrightarrow$
- **XOR** (nestejnost, výlučné nebo): Značení $\oplus$
- **NON** (negace): Značení $\neg$, `'`, $\bar{X}$

### Vykonání logické instrukce `OP A, B`:
Provedení operace nad odpovídajícími bity operandů $A$ a $B$ a uložení výsledku do **druhého operandu $B$**:
$$B = \langle A \rangle \text{ OP } \langle B \rangle \implies b_i = a_i \text{ OP } b_i$$

### Základní pravidla logických operací:

| Operace | Pravidlo 1 | Pravidlo 2 | Pravidlo 3 |
| :---: | :---: | :---: | :---: |
| **AND** | $a_i \land 0 = 0$ | $a_i \land 1 = a_i$ | $a_i \land a_i = a_i$ |
| **OR** | $a_i \lor 0 = a_i$ | $a_i \lor 1 = 1$ | $a_i \lor a_i = a_i$ |
| **XOR** | $a_i \oplus 0 = a_i$ | $a_i \oplus 1 = \neg a_i$ | $a_i \oplus a_i = 0$ |

### Příklad vykonání logických instrukcí:
Mějme operandy $A = \text{10010010}_2$ a $B = \text{01110110}_2$:

- **`AND A, B`** (uloží se do $B$): `0001 0010`
- **`OR A, B`** (uloží se do $B$): `1111 0110`
- **`XOR A, B`** (uloží se do $B$): `1110 0100`

*(Poznámka: Pro každou instrukci v příkladu se berou výchozí původní hodnoty $A$ a $B$.)*
