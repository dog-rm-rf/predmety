# Algoritmizace - úvodní přednáška

## 1. Úvod do předmětu a požadavky

### Předpoklady, dovednosti
* Základní matematické schopnosti
* Hledání řešení problémů
* Optimalizace řešení problémů

### Cvičení a přednášky
* Náplní cvičení je praktické řešení algoritmických úloh, ověření správnosti řešení a implementace v grafickém prostředí Snap!
* S ohledem na omezené množství cvičení budou praktické úlohy (vhodné k zápočtu i zkoušce) řešeny i na přednášce.
* Účast na cvičeních a přednáškách je nepovinná, ale předmět není možné se naučit "přes noc".
* Pro programátory je doporučeno naučit se formální zápis algoritmů.

### Zápočet
* Od 2. přednášky se každý týden v termínu přednášky bude psát v Moodle malý testík po jednom bodu, k zápočtu je nutné získat alespoň 6 bodů z deseti.
* 1 opravný termín v lednu ve formě komplexního testu.
* **Oblasti zápočtového testu:**
  * Matematická logika
  * Čtení strukturogramů
  * Tvorba strukturogramů (definice podmínek)
  * Rekurze
  * Volání funkcí
  * Logické hádanky

### Zkouška
* Ústní zkouška
* Zkoušení ve skupinách
* Diskuze nad zadaným algoritmem/programem
* Na základě zapojení studentů bude navrženo individuální hodnocení

### Návaznosti
* Předmět Programování v letním semestru
* Implementace úloh z algoritmizace v jazyce C#
* Dále předmět Komponentová tvorba SW

---

## 2. Základy algoritmizace

### Vlastnosti algoritmů
Algoritmy musí splňovat následujících pět základních vlastností:

1. **Konečnost**
   * Algoritmus musí vždy skončit.
   * Počet kroků do ukončení není fixní a nemusí být předem znát, ale je vždy konečný.
2. **Zobecnitelnost**
   * Algoritmus neřeší úlohu pro jeden konkrétní vstup, ale celou skupinu úloh.
   * Např. algoritmus pro násobení čísel nemůže fungovat pouze pro čísla 3 a 5.
   * Řešená oblast je dána zadáním algoritmu.
3. **Determinovanost**
   * V každém kroku je možné se na základě vnitřního stavu algoritmu rozhodnout, jaký (právě jeden) krok bude následovat.
4. **Elementárnost**
   * Algoritmus se skládá z elementárních (nedělitelných) kroků.
   * Tyto elementární prvky tvoří jazyk algoritmu (např. piš "Ahoj", Udělej_krok, Otoč_se).
5. **Resultativnost**
   * Každý algoritmus vrací výsledek.
   * Výsledek může být zobrazení informace na monitoru, uložení výsledku do souboru nebo jakékoliv jiné předání uživateli nebo jinému algoritmu.

### Stavební kameny algoritmů
* Sekvence
* Selekce
* Iterace

### Proměnné
* Proměnné slouží k uložení dat v průběhu provádění algoritmu.
* Zachycují vnitřní stav algoritmu.

### Algoritmické úlohy
* Řadící algoritmy
* Vyhledávací algoritmy
* Optimalizační algoritmy
* Úlohy pro podporu lidské činnosti

---

## 3. Formální zápis algoritmů

### Textový popis
* Zápis pomocí textových příkazů a dotazů.
* **Příklady:**
  * udělej krok
  * otoč se o 90 stupňů
  * mám před sebou překážku?
  * dokud je počet kroků < 10, dělej...

### Pseudokód
* Mezistupeň mezi textovým popisem, grafickým zápisem algoritmu a kódem v konkrétním jazyce.
* Používá standardizované příkazy a operace.
* **Příklady:**
  * krok
  * když (měsíc == 12) pak (něco) jinak (něco jiného)
  * dokud (počet_kroků < 10) dělej (něco)

### Vývojové diagramy
* **Začátek - konec:** Oválný/zaoblený tvar
* **Načtení dat:** Kosodélník
* **Rozhodovací člen:** Kosočtverec
* **Podprogram:** Obdélník se svislými čarami po stranách
* **Spojka:** Kruh (čísluje se)

---

## 4. Algoritmické úlohy k procvičení (Time for action)

### Vyhledání nejmenšího prvku
* Máte zadaná 3 čísla $a, b, c$.
* Rozhodněte, jaká je hodnota nejmenšího čísla z těchto čísel.

### Průměr v zadané posloupnosti
* Algoritmus spočítá průměr čísel v zadané posloupnosti.
* Postupně se ptejte na čísla.
* Pokud uživatel zadá číslo 0, znamená to ukončení zadávání a algoritmus vypíše průměr ze zadaných čísel.

### Vynásobení celých kladných čísel
* Pomocí operace sčítání vynásobte 2 zadaná čísla.
* Obě čísla jsou kladná a celá.
* *Jako rozšíření můžete algoritmus upravit na všechna celá čísla.*