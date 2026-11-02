# Naivní teorie množin – Přepis přednášky

**Přednášející:** Jan Hora  
**Instituce:** Česká zemědělská univerzita  
**Datum:** 6. srpna 2025  

---

## 1. Základní pojmy a definice

- **Množina (pseudodefinice):** Množinou rozumíme souhrn určitých a navzájem rozlišitelných objektů existujících v naší mysli [1].
- **Prvky množiny:** Objekty tvořící danou množinu se nazývají jejími prvky [1].
  - Zápis příslušnosti prvku k množině: $x \in A$ (prvek $x$ patří do množiny $A$), případně $x \notin A$ (prvek $x$ nepatří do množiny $A$) [1].

### Příklady zápisu množin
- **Výčtem prvků:**
  - $P = \{a, b, c, d, e, f\}$ [1]
  - $B = \{\text{krtek}, \text{lama}, \text{emu}, \text{beruška}, \text{lemur}, \text{krajta}\}$ [1]
- **Vymezením charakteristické vlastnosti:**
  - $S = \{x \in P \mid x \text{ je samohláska}\} = \{a, e\}$ [1]
  - $V = \{x \in B \mid x \text{ snáší vajíčka}\} = \{\text{emu}, \text{beruška}, \text{krajta}\}$ [1]

---

## 2. Vlastnosti množin a kvantifikátory

### Vlastnosti množin
1. **Nezáleží na pořadí:** Prvky množiny nemají určené pořadí [2].
2. **Jednoznačné určení prvky:** Množina je jednoznačně určena svými prvky a nemá žádné další vlastnosti. Dvě množiny se rovnají právě tehdy, když mají stejné prvky [2]:
   $$A = B \iff (\forall x)(x \in A \iff x \in B)$$
3. **Konečnost / nekonečnost:** Množiny mohou obsahovat nekonečně mnoho prvků [2].

### Kvantifikátory a prázdná množina
- **Značení kvantifikátorů:**
  - $\forall x \in A$ – pro každý prvek $x$ z množiny $A$ [2]
  - $\exists x \in A$ – existuje prvek $x$ z množiny $A$ [2]
  - $\exists! x \in A$ – existuje právě jeden prvek $x$ z množiny $A$ [2]
- **Prázdná množina:** Množina, která neobsahuje žádný prvek. Značí se symboly $\emptyset$ nebo definicí jako $\emptyset = \{x \mid x \neq x\}$ [2].

---

## 3. Množinové operace

- **Podmnožina:** Říkáme, že množina $A$ je podmnožinou množiny $B$, pokud každý prvek náležející do $A$ leží také v $B$ [3]:
  $$A \subseteq B \iff (\forall x)(x \in A \Rightarrow x \in B)$$
- **Doplněk (komplement):** Nechť $A \subseteq B$. Doplněk množiny $A$ v množině $B$ je množina prvků z $B$, které neleží v $A$ [3]:
  $$A'_B = \{x \mid x \in B \land x \notin A\}$$
- **Průnik:** Množina prvků patřících do $A$ i $B$ současně [4]:
  $$A \cap B = \{x \mid x \in A \land x \in B\}$$
  - Množiny, jejichž průnik je prázdný ($A \cap B = \emptyset$), nazýváme **disjunktní** [4].
- **Sjednocení:** Množina prvků patřících do $A$ nebo do $B$ [4]:
  $$A \cup B = \{x \mid x \in A \lor x \in B\}$$
- **Rozdíl:** Množina prvků patřících do $A$, ale nepatřících do $B$ [4]:
  $$A \setminus B = \{x \mid x \in A \land x \notin B\}$$
- **Potenční množina:** Množina všech podmnožin množiny $A$ [4]:
  $$\mathcal{P}(A) = \{X \mid X \subseteq A\}$$

---

## 4. Vennovy diagramy a praktické úlohy

Vennovy diagramy slouží k grafickému znázornění vztahů a operací mezi množinami (pro 3 i 4 množiny) [4].

### Příklady aplikací z přednášky:
1. **Výroba automobilů Škoda Octavia:**
   - Analýza podílů vyrobených kombi a sedanů podle výbavy (klimatizace, CD přehrávač) pomocí množinových vztahů a procentních podílů [4, 5].
2. **Chov domácích mazlíčků (třída 3.B):**
   - Slovní úloha určující počty žáků chovajících kombinace zvířat (had, potkan, pavouk) s využitím principu inkluze a exkluze [5, 6].

---

## 5. Číselné obory

Přednáška uvádí přehled základních číselných oborů a jejich vzájemnou inkluzi [6]:

- **Přirozená čísla ($\mathbb{N}$):** $\mathbb{N} = \{0, 1, 2, 3, \dots\}$ [6]
- **Celá čísla ($\mathbb{Z}$):** $\mathbb{Z} = \{\dots, -2, -1, 0, 1, 2, 3, \dots\}$ [6]
- **Racionální čísla ($\mathbb{Q}$):** $\mathbb{Q} = \left\{\frac{a}{b} \;\middle|\; a, b \in \mathbb{Z}, b \neq 0\right\}$ [6]
- **Reálná čísla ($\mathbb{R}$):** body odpovídající přímce / číselné ose [6]
- **Iracionální čísla ($\mathbb{I}$):** $\mathbb{I} = \mathbb{R} \setminus \mathbb{Q}$ [6]
- **Komplexní čísla ($\mathbb{C}$):** $\mathbb{C} = \{a + ib \mid a, b \in \mathbb{R}, i^2 = -1\}$ [6]

**Řetězec inkluzí číselných oborů:**
$$\mathbb{N} \subset \mathbb{Z} \subset \mathbb{Q} \subset \mathbb{R} \subset \mathbb{C}$$ [6]

---

## 6. Komplexní čísla a výpočetní příklady

Součástí přednášky jsou následující výpočetní typy úloh [7, 8]:
- Základní aritmetické operace v $\mathbb{C}$ (např. pro čísla $18 - i$ a $3 + 2i$) [7].
- Výpočet absolutní hodnoty komplexního čísla (např. $-5$, $4 - 3i$, $1 + i$) [7].
- Řešení kvadratických rovnic se záporným diskriminantem ($x^2 + 6x + 25 = 0$) [7].
- Převod komplexních čísel mezi algebraickým a goniometrickým tvarem [7].
- Operace s intervaly v reálných číslech, dělitelnost v celých číslech a průniky podmnožin komplexních čísel [7, 8].
