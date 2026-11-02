# Základy: Funkce a Zobrazení (Mappings)

## 0. The Bigger Picture (Jak to do sebe zapadá)
V diskrétní matematice a informatice se vše buduje odspodu jako z lega:
1. **Množiny:** Úplný základ. Jen pytle s prvky (např. čísla, stavy automatu).
2. **Kartézský součin ($A \times B$):** Zkombinuješ dvě množiny a vytvoříš všechny možné dvojice (např. souřadnice na ose $x$ a $y$).
3. **Relace:** Vybereš jen *některé* z těchto dvojic podle nějakého pravidla (např. grafy sítí, databáze). Tohle se učíte teď.
4. **Zobrazení (Funkce):** Je to velmi **přísná relace**. Pravidlo, kde jeden vstup nesmí vyhodit dva různé výsledky. Tohle je základ pro jakýkoliv algoritmus (dáš algoritmu vstup, chceš jednoznačný výstup).
5. **Konečné automaty:** Stroj, který bere vstupy a pomocí zobrazení/přechodů se posouvá mezi stavy. Bez pochopení funkcí (šipek) nemůžeš postavit automat.

---

## 1. Co je to zobrazení (funkce)?
Zobrazení $f$ z množiny $A$ do množiny $B$ je předpis, který **každému** prvku $x \in A$ přiřadí **právě jeden** prvek $y \in B$. Zapisujeme $y = f(x)$.

**Vizuální test (Test svislé čáry):**
Představ si svislou čáru. Pokud projde grafem a protne ho *více než jednou*, **není** to zobrazení (jeden $x$ vstup má dva různé $y$ výstupy – algoritmus neví, co má dělat).

```text
    JE TO FUNKCE                    NENÍ TO FUNKCE (např. kružnice)
      y                               y
      ^                               ^
      |      * (graf f)               |      *  <-- Svislá čára protíná
      |    *                          |    * | *    graf dvakrát!
      |  *                            |   *  |  *   (Jeden vstup x má
 -----+*--------> x              -----+---*--|--*---> x  dva výstupy)
      |                               |      | *
```

## 2. Anatomie zobrazení
* **Definiční obor** $\mathcal{D}(f)$**:** Množina povolených vstupů (osa $x$). (Nesedíš na nule, nemáš pod sudou odmocninou mínus).
* **Obor hodnot** $\mathcal{H}(f)$**:** Množina reálných výstupů (osa $y$). "Stín", který graf hází na osu $y$.

---

## 3. Svatá trojice vlastností (Injekce, Surjekce, Bijekce)

### A. Prosté zobrazení (Injektivita)
Každý výstup má svůj unikátní vstup. Nestane se, že by dva různé vstupy vedly na stejný výsledek.
*Matematicky: $x_1 \neq x_2 \implies f(x_1) \neq f(x_2)$*

**Vizuální test (Test vodorovné čáry):** Kdekoli nakreslíš vodorovnou čáru, protne graf *nanejvýš jednou*.

```text
  NENÍ PROSTÉ (Parabola y = x^2)      JE PROSTÉ (Lineární y = x)
      y                                 y
      ^                                 ^
  4 - | - * - - - - * - <-- protne      |       * <-- vodorovná čára
      |   |         |       2x!         |     *       protne vždy
      |  *           *                  |   *         jen 1x
 -----+--|----------|---> x        -----+--*------> x
        -2          2                   | *
```
*(U paraboly jsi dal na vstup 2 i -2, ale vypadla ti stejná hodnota 4. Není to prosté.)*

### B. Zobrazení "na" (Surjektivita)
Funkce pokryje beze zbytku celou cílovou množinu na ose $y$. Nezbyde žádné $y$, ke kterému by nevedla cesta od nějakého $x$. 
*(Na grafu paraboly výše vidíš, že obor hodnot je jen od $0$ nahoru. Pokud bychom tvrdili, že cílová množina jsou VŠECHNA reálná čísla, tak parabola není surjektivní, protože se nikdy netrefí do záporných čísel na ose y).*

### C. Vzájemně jednoznačné zobrazení (Bijektivita)
Zobrazení je injektivní a zároveň surjektivní. Každé $x$ má právě jedno unikátní $y$ a celá cílová množina je vyčerpána. Dokonalé párování. *(Nutné pro porovnávání nekonečen, např. u Cantorova důkazu v tvých skriptech).*

---

## 4. Inverzní zobrazení $f^{-1}$
Inverzní funkce dělá proces pozpátku – z výstupu dělá vstup (např. logaritmus k exponenciále).

* **Klíčová podmínka:** Aby inverzní zobrazení vůbec existovalo, musí být původní funkce $f$ **prostá (injektivní)**!
* **Graficky:** Graf inverzní funkce získáme překlopením původního grafu přes osu prvního a třetího kvadrantu (přímku s rovnicí $y = x$).

```text
      y
      ^      / (osa překlopení y = x)
      |    /     *  <-- f(x)
      |  /     *    
      |/     *      
 -----+*----------> x
     /|    *  <-- f^{-1}(x) (zrcadlový odraz)
   /  |  *
```