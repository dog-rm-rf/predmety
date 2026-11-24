# Operační systémy: Správa procesů a zdrojů
**Přednáška 04**  
**Autor:** David Buchtela  
**Fakulta:** ČZU Provozně ekonomická fakulta, Katedra informačního inženýrství  

---

---

## Operační systém
- **Definice:** Souhrn všech systémových programů.
  - Tvoří základní programové vybavení počítače.
  - Obsluhuje veškeré technické prostředky počítače.
  - Poskytuje systémové služby aplikačním programům.
  - Spouští se obvykle automaticky.
  - S výjimkou uživatelského prostředí je pro uživatele neviditelný.
  - **Nejčastější příklady:** OS řady MS Windows, Linux.
- Po zapnutí počítače se nejprve spustí operační systém $\rightarrow$ až je vše připraveno, lze spouštět aplikační programy.

---

## Třívrstvá architektura
- **Architektura:** Aplikace $\leftrightarrow$ Operační systém $\leftrightarrow$ Hardware (Aplikace nesmí přímo komunikovat s HW).
- **Výhody třívrstvé architektury:**
  - **Aplikace se nemusí starat o detaily hardwaru:** Existuje mnoho různých modelů HW od různých výrobců, se kterými se komunikuje jinak.
  - **Jednodušší komunikace s HW:** Společné funkce se řeší centrálně v OS, nikoli v každé aplikaci zvlášť (výrazně ulehčuje práci programátorům).
  - **Rozdělení HW zdrojů:** OS funguje jako "šéf", který rozhoduje o střídání a přidělování zdrojů (procesor, paměť atd.) spuštěným programům.

---

## Hlavní úkoly (služby) operačního systému
- **Základní poslání:** Zajistit uživateli možnost ovládat počítač, vytvořit pro spuštěné programy stabilní aplikační rozhraní a přidělovat jim systémové zdroje.
- **Dílčí úkoly:**
  - **Ovládání počítače:** Umožňuje uživateli spouštět programy, předávat vstupní data a zobrazovat výstup. Poskytuje uživatelské rozhraní.
  - **Abstrakce technického vybavení (HW):** Vytváří aplikační rozhraní (API) a využívá ovladače zařízení (drivers).
  - **Správa prostředků (zdrojů):** Přiděluje spuštěným programům systémové zdroje (operační paměť, procesor, pevný disk, I/O zařízení).
  - **Bezpečnost:** Nastavení a kontrola přístupových práv uživatelů (kdo smí s čím pracovat a jak).

---

## Řady (třídy) operačních systémů
- OS se liší ve způsobu realizace poskytovaných služeb a rozhraní mezi vrstvami.
- **Běžné OS pro osobní počítače:**
  - **MS Windows:** Windows 95, 98, NT, 2000, XP, Vista, Windows 7, 10, 11...
  - **Linux:** Distribuce Ubuntu, SuSE, Debian, Fedora, Red Hat, Mandrake, Gentoo...
  - **Macintosh:** Pro počítače firmy Apple (System, Mac OS...).
- **Běžné OS pro mobilní telefony:**
  - Android, iOS (Apple), Windows Phone (Microsoft).

---

## Rozhraní dle typu komunikace
- Rozdělení rozhraní podle toho, které vrstvy spolu komunikují:
  - Uživatelské rozhraní (Uživatel $\leftrightarrow$ Aplikace / OS)
  - Aplikační rozhraní (Aplikace $\leftrightarrow$ OS)
  - Ovladače zařízení (OS $\leftrightarrow$ HW)
  - Správa systémových prostředků

---

## Uživatelské rozhraní
- **Rozhraní mezi programem a uživatelem:**
  - Ovládací prvky (tlačítka, posuvníky, ikonky, texty, grafické prvky), ovládání klávesnicí a myší, rychlost reakce.
- **Správa obrazovky:**
  - Sdílení obrazovky pomocí oken (ohraničená obdélníková oblast).
  - OS zajišťuje správné zobrazení, překreslení a překrývání všech oken (velikost, pozice, přepínání oken, záhlaví, pás karet...).

---

## Typy uživatelského rozhraní
- **Příkazový řádek (CLI - Command-Line Interface, Console):**
  - Textové příkazy zadávané klávesnicí, výsledky zobrazené jako text.
- **Grafické uživatelské rozhraní (GUI - Graphical User Interface):**
  - Obsahuje text i grafiku. Ovládání pomocí klávesnice, myši, dotykového displeje atd.

---

## Ovladače zařízení (hardware)
- **Ovladač zařízení (device driver):** Software umožňující OS pracovat s hardwarem.
  - Součást OS nebo distribuován s HW (např. na CD-ROM).
  - Zajišťuje řízení konkrétního zařízení a komunikuje s OS pomocí obecnějších rozhraní (abstrakce).
  - Stejné nebo podobné rozhraní pro podobná zařízení (např. stejně se pracuje s HDD, disketou i CD/DVD).
- **Základní typy:**
  - **Driver:** Ovládací program instalovaný do OS.
  - **Firmware:** Ovládací program přímo v ROM paměti zařízení.

---

## Aplikační rozhraní - API
- **API (Application Programming Interface):**
  - Abstrahuje ovládání HW do snadno použitelných procedur a funkcí pro programátory.
  - Umožňuje programům pracovat i se zařízeními vzniklými v budoucnu (otevření souboru na HDD, CD, Flash disku či síťovém disku je z pohledu kódování stejné).
  - Každý OS definuje své vlastní aplikační prostředí $\rightarrow$ spustitelné programy jsou mezi různými OS nepřenositelné.

---

## Knihovny funkcí API
- **Statická knihovna (SLL - Static Linking Library, `.lib`, `.a`):**
  - Volané funkce jsou při překladu přímo připojeny do výsledného spustitelného souboru (kompaktní celek).
- **Dynamická knihovna (DLL - Dynamic Linking Library, `.dll` ve Windows, `.so` / `.o` v Linuxu):**
  - Odkazy na funkce jsou v tabulce symbolů; knihovna není součástí exe souboru a musí být k dispozici v systému zvlášť.

---

## Systémová platforma
- **Platforma:** Soustava komponent tvořících počítač. OS je psán pro konkrétní platformu, ale sám o sobě tvoří platformu pro aplikace.
- **Dělení dle HW:**
  - **x86:** 32-bitové procesory (Intel/AMD).
  - **x86-64 (AMD64):** 64-bitové procesory.
  - **Macintosh:** Počítače Apple.
- **Dělení dle OS:** MS Windows (32/64 bit), Linux, Mac OS.

---

## Přenositelnost programů (aplikací)
- Aplikace obecně **nejsou přenositelné** mezi OS kvůli:
  - Různým formátům spustitelných souborů (Windows `.exe` vs. Linux bez přípony / ELF).
  - Odlišné komunikaci s OS (odlišná API, např. WinAPI).
- **Řešení přenositelnosti – Jazyk Java:**
  - Vytváří mezivrstvu – virtuální stroj **JVM (Java Virtual Machine)**.
  - Zdrojový kód (`.java`) je kompilován kompilátorem (`javac`) do **Byte Code** (`.class`), který pak běží na jakémkoliv OS v daném JVM.

---

## Správa prostředků počítače – Správa procesoru
- Většina osobních PC má 1 procesor (nebo vícejádrový procesor).
- **Multitasking:** Úkol správy procesoru – zajistit zdánlivě souběžný běh několika aplikací pomocí **sdílení času** (střídání procesů v řádu milisekund).
  - **Kooperativní multitasking:** Procesy musely samy nabízet přerušení (např. Windows 3.x).
  - **Preemptivní multitasking:** OS odebere procesoru řízení a přeruší proces sám po uplynutí časového kvanta (např. Windows 95+, Linux).

---

## Více-jádrové a víceprocesorové systémy
- Umožňují **skutečně souběžný (paralelní)** běh procesů.
- Jádrům/procesorům náleží samostatná nebo sdílená paměť (architektury UMA, NUMA, Distributed, Hybrid).
- **Multithreading:** Rozdělení jednoho programu (procesu) na několik samostatných vláken (**Threads**), která běží současně.

---

## Správa procesoru v operačním systému
- Nástroje pro sledování a správu procesů:
  - **Správce úloh** (Task Manager) ve Windows (`CTRL+ALT+DEL`).
  - Příkaz **`ps`** v Linuxu.

---

## Správa paměti
- Paměť slouží k ukládání dat spuštěných programů.
- Skládá se z paměťových míst (obvykle o velikosti **1 B / Byte**).
- Každé paměťové místo má své jednoznačné pořadové číslo – **adresu**.

---

## Funkce modulu správce paměti
- Udržuje přehled o využití fyzické paměti.
- Přiděluje paměť procesům a uvolněnou paměť vrací zpět.
- Odebírá paměť procesům a rozpozná havárii/násilné ukončení procesu bez uvolnění paměti.
- **Ochrana paměti:** Nedovolí procesům přistupovat k paměti mimo vymezený prostor.

---

## Virtuální paměť
- **Virtuální paměť:** Každý proces má vlastní virtuální adresní prostor rozdělený na **stránky** (např. 4 kB). Může být násobně větší než fyzická paměť.
- **Fyzická paměť:** Rozdělena na **rámy** stejné velikosti jako stránky.
- **Mapování:** OS přiděluje stránkám odpovídající rámy ve RAM, případně nepoužívané stránky odkládá na disk (paging/swapping).

---

## Správa souborů
- Služba OS pro:
  - Ukládání a čtení dat z paměťových médií (HDD, SSD).
  - Vytváření datové abstrakce ve formě souborů organizovaných v hierarchické adresářové struktuře.
  - Vytváření systému souborů.

---

## Role operačního systému v práci se soubory
- OS uchovává informace o rozdělení souborů do "přihrádek" (bloků na disku).
- Zajišťuje transparentní skládání a rozkládání dat (např. při ukládání a načítání souboru `koala.jpg`).

---

## Systém souborů
- **File System:** Určuje a popisuje způsob uložení souborů na disku.
- **Definuje pravidla pro:**
  - Zjištění volného místa na disku.
  - Uložení dat souboru (začátek, konec, fragmentace).
  - Uložení metadat (název, čas vytvoření/úpravy, atributy, přístupová práva).
  - Uložení adresářové struktury.

---

## Rozdíly mezi systémy souborů
- **Výkon:** Rychlost provádění operací (čtení/zápis malých vs. velkých souborů).
- **Omezení:** Max. velikost disku/oddílu, max. velikost souboru, délka a povolené znaky v názvu souboru.
- **Funkce:** Přístupová práva, šifrování, komprese, podpora žurnálování.

---

## Příklady systémů souborů
- **Dle operačního systému:**
  - **Windows:** NTFS, FAT32, FAT16
  - **Linux:** Ext4, ext3, ext2, ReiserFS, XFS
  - **Mac OS:** APFS, HFS+
  - **Android:** Ext4, YAFFS2
  - **iOS:** APFS
- **Dle médií:**
  - **Diskety 3.5":** FAT12
  - **Disky CD:** ISO 9660 (Joliet, Rock Ridge)
  - **Disky DVD / Blu-ray:** UDF (Mount Rainer)

---

## Správa procesů a jejich zdrojů – Proces
- **Proces:** OS spuštěný a zpracovávaný program. Má přidělenu paměť pro instrukce, data, registry a zásobník.
- **Typy procesů:**
  - **Nezávislé:** Nesmí se vzájemně ovlivňovat (OS je musí striktně oddělit).
  - **Spolupracující:** Sdílejí společná data, přístup je nutné řídit (synchronizace).
- **Determinismus:** Požadavek na stejný výsledek při stejných vstupních datech bez ohledu na souběžně běžící procesy.

---

## Stavy procesů
- **Možné stavy procesu:**
  - **Probíhající (Running):** Má přidělen procesor a vykonává se.
  - **Připraven (Ready):** Připraven ke zpracování, čeká na přidělení procesoru.
  - **Zablokován (Blocked / Pozastaven):** Zastaven OS.
  - **Čekající (Waiting):** Čeká na uvolnění sdíleného zdroje nebo splnění podmínky.
  - **Nový (New):** Nově vytvořený proces.
  - **Ukončen (Terminated):** Skončil činnost, uvolňuje paměť.

---

## Přidělování a klasifikace zdrojů
- Proces potřebuje HW i SW zdroje.
- **Klasifikace zdrojů:**
  - **Násobně použitelné (sdílitelné / reentrantní):** Lze přidělit jinému procesu ještě před dokončením stávajícího (např. disk, myš, data pro čtení).
  - **Opakovaně použitelné (reusabilní):** Lze přidělit dalším až po uvolnění předchozím $\rightarrow$ tvoří **kritickou oblast** (např. tiskárna, pracovní paměť).
  - **Na jedno použití (nereusabilní):** Nelze použít znovu (např. papír v tiskárně, chybný program bez nulování střadače).

---

## Kritická oblast
- Každý opakovaně použitelný zdroj tvoří **kritickou oblast**.
- **Pravidla pro vstup do kritické oblasti:**
  1. V oblasti může být současně max. 1 proces (nebo předem daný počet).
  2. Při obsazení je proces převeden do stavu *čeká na prostředek*.
  3. Proces musí kritickou oblast opustit v konečném čase.
  4. Každý čekající proces se musí vstupu dočkat v konečném čase (nesmí nastat vyhladovění).
- **Uváznutí (Deadlock):** Stav, kdy všechny procesy čekají na zdroje držené jinými procesy a systém zamrzne.

---

## Jak řešit problém uváznutí
- **Přístupy k řešení deadlocku:**
  - **Ignorování (Pštrosí algoritmus):** Předstírání, že se nic neděje (využívá mnoho OS včetně UNIXů).
  - **Prevence:** Opatření zamezující uváznutí, např. *metoda číslování zdrojů*.
  - **Vyhýbání se:** Zdroj se nepřidělí, pokud hrozí nebezpečný stav, např. *Algoritmus bankéře*.
  - **Detekce a obnova:** Uváznutí se detekuje a systém se obnoví (nákladné, vyžaduje restart aplikací).
- **Závěr:** Obecný problém uváznutí je efektivně neřešitelný.

---

## Řízení přístupu do kritické oblasti
- **Zámek (binární semafor):** Sdílená proměnná (0 = zavřen, 1 = otevřen). Používá nedělitelnou instrukci **TST (TSTL - Test and Set Lock)** pro atomické testování a uzavření.
- **Počítaný semafor:** Proměnná nabývající hodnot $0 \dots N$. Využívá operace `wait(S)` (sníží hodnotu / čeká) a `signal(S)` (zvýší hodnotu / probudí proces).

---

## Metoda číslování zdrojů
- Zdroje se očíslují (např. A=1, B=2, C=3) a procesy o ně musí žádat v přísně rostoucím pořadí.
- Zabraňuje vzniku cyklického čekání (Deadlocku).
- **Příklad:** Při požadavku na zdroje A a B v daném pořadí nemůže P2 držet B a blokovat P1 žádající o A.

---

## Algoritmus bankéře
- Autor: **Edsger Dijkstra** (1930–2002).
- OS před přidělením zdroje ověří, zda zůstane v **bezpečném stavu** (existuje alespoň jedna posloupnost, jak všechny procesy dokončit). Pokud ne, zdroj nepřidělí a proces čeká.

---

## Algoritmus bankéře – příklad
- **Stav systému:** Procesy P1, P2, P3 a zdroje A, B, C.
  - P1: MAX [7 5 3], ALOK [0 1 0], POTŘ [7 4 3]
  - P2: MAX [3 2 2], ALOK [2 0 0], POTŘ [1 2 2]
  - P3: MAX [8 1 2], ALOK [3 1 2], POTŘ [5 0 0]
- **Volné zdroje:** [3 3 2]
- **Bezpečné pořadí vyřízení:**
  1. **P2** (potřebuje [1 2 2] $\le$ [3 3 2]) $\rightarrow$ po dokončení uvolní zdroje $\rightarrow$ volné [5 3 2]
  2. **P3** (potřebuje [5 0 0] $\le$ [5 3 2]) $\rightarrow$ po dokončení uvolní zdroje $\rightarrow$ volné [8 4 4]
  3. **P1** (potřebuje [7 4 3] $\le$ [8 4 4]) $\rightarrow$ dokončí $\rightarrow$ výsledné volné [8 5 4]

---

