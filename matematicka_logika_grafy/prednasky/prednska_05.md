# Relace a zobrazení

**Autor:** Jan Hora  
**Instituce:** Česká zemědělská univerzita  
**Datum:** 6. srpna 2025  

---

## 1. Množiny množin

### Příklad
- $\text{Barcelona} = \{\text{Xavi}, \text{Messi}, \text{Iniesta}, \dots\}$
- $\text{Real} = \{\text{Ronaldo}, \text{Adebayor}, \text{Casillas}, \dots\}$
- $\text{Chelsea} = \{\text{Drogba}, \text{Lampard}, \text{Čech}, \dots\}$
- $\text{Sparta} = \{\text{Řepka}, \text{Matějovský}, \text{Blažek}, \dots\}$

$$\text{SLM2013} = \{\text{Barcelona}, \text{Real}, \text{Chelsea}, \text{Sparta}\}$$
$$\text{SLM2013} = \{\{\text{Xavi}, \text{Messi}, \text{Iniesta}, \dots\}, \{\text{Ronaldo}, \text{Adebayor}, \text{Casillas}, \dots\}, \{\text{Drogba}, \text{Lampard}, \text{Čech}, \dots\}, \{\text{Řepka}, \text{Matějovský}, \text{Blažek}, \dots\}\}$$

---

## 2. Kartézský součin

### Definice (Uspořádaná dvojice)
Dvouprvkovou množinu $\{\{x\}, \{x, y\}\}$ nazýváme **uspořádanou dvojicí** prvků $x$ a $y$. Značíme ji $(x, y)$.

### Definice (Kartézský součin)
**Kartézský součin** množin $A$ a $B$ je množina všech uspořádaných dvojic takových, že na prvním místě je prvek množiny $A$ a na druhém prvek množiny $B$:

$$A \times B = \{(a, b) \mid a \in A, b \in B\}$$

### Definice (Binární relace)
**Binární relace** na množinách $A$ a $B$ je jakákoli podmnožina $R$ kartézského součinu $A \times B$. Pokud je $A = B$, hovoříme o binární relaci na množině $A$. Místo $(a, b) \in R$ píšeme někdy $a R b$.

---

## 3. Relace jsou vztahy

### Příklad 1
Množina $K$ všech klientů banky, množina $U$ všech běžných účtů.  
Relace $D$ na množinách $K$ a $U$ je definována předpisem:

$$k D u \iff k \text{ je disponent } u$$

### Příklad 2
Uvažujme množinu $A = \{1, 2, 3, 4\}$.

1. $x R y \iff x \le y \implies R = \{(1,1), (1,2), (1,3), (1,4), (2,2), (2,3), (2,4), (3,3), (3,4), (4,4)\}$
2. $x S y \iff x = y^2 \implies S = \{(1,1), (4,2)\}$

---

## 4. Vlastnosti relací

### Definice
Buď $R$ relace na množině $A$. Pak se $R$ nazývá:

- **reflexivní**, pokud $(x, x) \in R, \forall x \in A$,
- **symetrická**, pokud $(x, y) \in R \iff (y, x) \in R$,
- **antisymetrická**, pokud $((x, y) \in R \land (y, x) \in R) \implies x = y$,
- **tranzitivní**, pokud $((x, y) \in R \land (y, z) \in R) \implies (x, z) \in R$,
- **ekvivalence**, pokud je reflexivní, symetrická a tranzitivní,
- **uspořádání**, pokud je reflexivní, antisymetrická a tranzitivní.

---

## 5. Příklady relací

### Příklad
Určete, které z uvedených vlastností mají následující relace:

1. Na množině $A = \{1, 2, 3, 4\}$ relace daná předpisem:
   $$x R y \iff x = y^2 \implies R = \{(1,1), (4,2)\}$$

2. Na množině $P = \{-2, -1, 0, 1, 2\}$ relace daná předpisem:
   $$x S y \iff x^2 = y^2 \implies S = \{(-2,-2), (-1,-1), (0,0), (1,1), (2,2), (1,-1), (-1,1), (-2,2), (2,-2)\}$$

---

## 6. Doplnění na ekvivalenci

### Příklad
Doplňte relaci $R$ na množině $A$ nejmenším počtem dvojic tak, aby výsledná relace byla ekvivalence:
- $A = \{\text{Dana}, \text{Karel}, \text{Petra}, \text{Hana}, \text{Radim}, \text{Vladimír}\}$
- $R = \{(\text{K}, \text{R}), (\text{D}, \text{H}), (\text{H}, \text{H}), (\text{K}, \text{P})\}$

### Definice
Ekvivalence rozdělí nosnou množinu na disjunktní části, které se nazývají **třídy ekvivalence**.

---

## 7. Doplnění na uspořádání

### Příklad
Doplňte relaci $S$ na množině $B$ nejmenším počtem dvojic tak, aby výsledná relace byla uspořádání:
- $B = \{\text{Segedín}, \text{Rajská}, \text{Jahodové knedlíky}, \text{Šišky s mákem}, \text{Hrachová kaše}, \text{Řízek s bramborovým salátem}\}$
- $S = \{(\text{HK}, \text{SM}), (\text{HK}, \text{S}), (\text{R}, \text{R}), (\text{R}, \text{RBS}), (\text{SM}, \text{JK}), (\text{S}, \text{R}), (\text{HK}, \text{R}), (\text{SM}, \text{R})\}$

---

## 8. Jak zobrazit uspořádání

### Pseudodefinice
**Hasseho diagram** zobrazuje uspořádání způsobem, kdy jsou menší prvky níže než prvky větší a spojnice mezi dvěma prvky je právě tehdy, když:

$$(a \le b) \land \neg(\exists c)((a \ne c \land c \ne b) \land (a \le c \le b))$$

---

## 9. Další příklady relací

### Příklad
Určete, které z uvedených vlastností mají následující relace na množině $\mathbb{Z}$ celých čísel:

1. $a R b \iff a \mid b$
2. $a S b \iff (a \mid b \land b \mid a)$

---

## 10. Zobrazení

### Definice (Zobrazení z A do B)
Relace $F$ na množinách $A$ a $B$ se nazývá **zobrazení z $A$ do $B$** (značíme $F: A \rightarrow B$), pokud platí:

$$((x, y) \in F \land (x, z) \in F) \implies y = z$$

Obraz prvku $x$ se označuje $F(x)$. Podmnožina množiny $A$, pro jejíž prvky $x$ existuje obraz $F(x)$, se nazývá **definiční obor** $F$ a značí se $D(F)$.

### Definice (Zobrazení A do B)
Zobrazení $F: A \rightarrow B$ se nazývá **zobrazení $A$ do $B$** (bez předložky "z"), pokud $D(F) = A$.

---

## 11. Příklady zobrazení

### Příklad 1
Určete, zda relace $D$ („býti disponent“) na množinách všech klientů $K$ banky a množině běžných účtů $U$ je zobrazení.

### Příklad 2
Určete, zda jsou následující relace na množině celých čísel $\mathbb{Z}$ zobrazení:

1. \{(x, y) \mid 2y = x\}
2. \{(x, y) \mid x \mid y\}

---

## 12. Zobrazení na reálných číslech

### Příklad
Určete, zda jsou následující relace na množině reálných čísel $\mathbb{R}$ zobrazení:

1. \{(x, y) \mid y = x^2\}
2. \{(x, y) \mid x = y^2\}
3. \{(x, y) \mid x^2 + y^2 = 1\}

### Definice (Funkce)
Zobrazení množiny $A$ do množiny reálných čísel $\mathbb{R}$ se nazývá **(reálná) funkce** na množině $A$.

---

## 13. Vlastnosti zobrazení

### Definice (Injektivní zobrazení)
Zobrazení $F: A \rightarrow B$ se nazývá **prosté (injektivní)**, pokud platí:

$$(F(x) = z \land F(y) = z) \implies x = y$$

### Definice (Surjektivní zobrazení)
Zobrazení $F: A \rightarrow B$ zobrazuje množinu $A$ **na** množinu $B$ ($F$ je **surjektivní**), pokud platí:

$$(\forall y \in B)(\exists x \in A)(F(x) = y)$$

### Definice (Bijektivní zobrazení)
Zobrazení $F$ množiny $A$ do množiny $B$ se nazývá **vzájemně jednoznačné (bijektivní, bijekce)**, pokud je $D(F) = A$, $F$ je prosté a zobrazuje množinu $A$ na množinu $B$ (je injektivní a surjektivní).

---

## 14. Příklady vlastností zobrazení

### Příklad 1
Určete, zda zobrazení, které každému občanu České republiky přiřazuje číslo jeho občanského průkazu, je injektivní, surjektivní a bijektivní.

### Příklad 2
Určete, zda jsou následující zobrazení z množiny $\mathbb{R}$ do množiny $\mathbb{R}$ injektivní, surjektivní a bijektivní:

1. \{(x, y) \mid y = x^2\}
2. \{(x, y) \mid y = x^3\}
3. \{(x, y) \mid y = \log x\}

---

## 15. Inverzní relace

### Definice
Buď $R$ relace na množinách $A$ a $B$. Pak relace $R^{-1}$ definovaná předpisem:

$$x R^{-1} y \iff y R x$$

se nazývá **relace inverzní** k $R$.

### Pozorování
Inverzní relace k zobrazení $F$ je opět zobrazení právě tehdy, je-li $F$ prosté.

### Příklad
Určete, zda inverzní relace k dané funkci je funkce, a pokud ano, nalezněte její předpis, definiční obor a obor hodnot:

1. $y = \frac{x}{x+2}$
2. $y = x^2$
3. $y = 3 + 5 \cdot 10^{x-2}$

---

## 16. Mohutnost množin

### Definice (Menší mohutnost)
Říkáme, že množina $A$ má **menší mohutnost** než množina $B$, pokud existuje injektivní zobrazení množiny $A$ do množiny $B$. Píšeme $|A| \le |B|$.

### Definice (Stejná mohutnost)
Říkáme, že množina $A$ má **stejnou mohutnost** jako množina $B$, pokud existuje bijektivní zobrazení množiny $A$ na množinu $B$. Píšeme $|A| = |B|$.

### Příklad
Mohutností konečné množiny rozumíme počet jejích prvků.

---

## 17. Spočetné množiny

### Definice
Množina $A$ se nazývá **spočetná**, pokud je konečná nebo existuje bijektivní zobrazení $f: \mathbb{N} \rightarrow A$.

### Poznámka
Nekonečné spočetné množiny jsou v tomto smyslu nejmenší nekonečné množiny.

### Poznámka
Spočetné množiny lze uspořádat do (konečné či nekonečné) posloupnosti. Kromě množiny přirozených čísel $\mathbb{N}$ jsou spočetné i množiny $\mathbb{Z}$ a $\mathbb{Q}$, tedy:

$$|\mathbb{N}| = |\mathbb{Z}| = |\mathbb{Q}|$$

---

## 18. Spočetné a nespočetné množiny

### Věta
Pro každou množinu $A$ platí:

$$|A| < |\mathcal{P}(A)|$$

### Věta
Platí:

$$|\mathbb{R}| = |\mathcal{P}(\mathbb{N})|$$

### Důsledek
Množina reálných čísel je **nespočetná**, reálná čísla tedy nelze uspořádat do posloupnosti.