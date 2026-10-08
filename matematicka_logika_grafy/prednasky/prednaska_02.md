# Převod formule do (úplného) disjunktivního tvaru

**Výroková logika**
Jan Hora
Česká zemědělská univerzita
5. srpna 2025

---

## Logický důsledek

**Definice**
Říkáme, že formule $\psi$ je důsledkem formule $\varphi$, pokud je $\psi$ pravdivá při každém ohodnocení, při kterém je pravdivá formule $\varphi$. Tento vztah se značí $\varphi \models \psi$.

**Příklad**
Určete, zda je $\psi$ důsledkem $\varphi$:
* $\varphi = A \vee B$, $\psi = A \Rightarrow B$
* $\varphi = A \wedge A^{\prime}$, $\psi = A^{\prime} \Leftrightarrow B$

**Pozorování**
Jakákoli formule je důsledkem kontradikce, tautologie je důsledkem jakékoli formule.

---

## Logický důsledek více formulí

**Definice**
Říkáme, že formule $\psi$ je důsledkem množiny formulí $\Gamma$, pokud je $\psi$ pravdivá při každém ohodnocení, při kterém je pravdivá každá formule z množiny $\Gamma$. Tento vztah se značí $\Gamma \models \psi$.

---

## Dám si moučník?

**Příklad**
Polévku nebo hlavní jídlo si určitě dám, ovšem jestliže si dám hlavní jídlo, nedám si rozhodně polévku i moučník.

Určete, zda jsou následující věty logickým důsledkem výše uvedeného:
* Dám si polévku.
* Dám si hlavní jídlo.
* Jestliže si dám hlavní jídlo i moučník, nedám si polévku.

---

## Ekvivalence formulí podruhé

**Definice**
Dvě formule (řekněme $\varphi$ a $\psi$) se nazývají ekvivalentní, pokud nabývají stejné pravdivostní hodnoty při všech ohodnoceních (mají stejnou pravdivostní tabulku). Značíme $\varphi \equiv \psi$.

**Fakt**
Formule $\varphi$ a $\psi$ jsou ekvivalentní právě tehdy, když je formule $\varphi \Leftrightarrow \psi$ tautologií.

---

## Příklady ekvivalentních formulí

* $\neg(\neg A) \equiv A$ (Zákon dvojité negace)
* $\neg(A \vee B) \equiv A^{\prime} \wedge B^{\prime}$, $\neg(A \wedge B) \equiv A^{\prime} \vee B^{\prime}$ (De Morganova pravidla)
* $\neg(A \Rightarrow B) \equiv A \wedge B^{\prime}$
* $(A \Leftrightarrow B) \equiv (A \wedge B) \vee (A^{\prime} \wedge B^{\prime})$
* $A \vee A \equiv A$, $A \wedge A \equiv A$ (idempotence)
* $A \vee B \equiv B \vee A$, $A \wedge B \equiv B \wedge A$ (komutativita)
* $(A \vee B) \vee C \equiv A \vee (B \vee C) \equiv A \vee B \vee C$, $A \wedge (B \wedge C) \equiv (A \wedge B) \wedge C \equiv A \wedge B \wedge C$ (asociativita)
* $A \wedge (B \vee C) \equiv (A \wedge B) \vee (A \wedge C)$ (distributivita)
* $A \wedge A^{\prime} \equiv 0$, $A \vee A^{\prime} \equiv 1$
* $A \vee 1 \equiv 1$, $A \vee 0 \equiv A$
* $A \wedge 1 \equiv A$, $A \wedge 0 \equiv 0$

---

## Disjunkce konjunkcí, konjunkce disjunkcí

**Definice**
Výrokové proměnné a jejich negace se souhrnně nazývají literály.

**Definice**
Formule je v disjunktivním tvaru (disjunktivní normální formě – DNF), pokud je disjunkcí konjunkcí literálů.

**Definice**
Formule je v úplném disjunktivním tvaru, pokud je v disjunktivním tvaru a každá konjunkce obsahuje všechny výrokové proměnné nebo jejich negace.

**Definice**
Formule je v konjunktivním tvaru (konjunktivní normální formě – CNF), pokud je konjunkcí disjunkcí literálů.

---

## Příklady

**Příklad**
Převeďte do disjunktivního tvaru:
1. $(A^{\prime} \wedge (B^{\prime} \vee A))$
2. $(A^{\prime} \Rightarrow (B \wedge C^{\prime}))^{\prime}$
3. $A^{\prime} \Leftrightarrow (B \vee C^{\prime})$

**Příklad**
Převeďte do konjunktivního tvaru:
1. $A \vee (A^{\prime} \wedge B^{\prime})^{\prime}$
2. $(A^{\prime} \Rightarrow (B \wedge C^{\prime}))^{\prime}$
3. $A^{\prime} \Leftrightarrow B$

---

## Příklady

**Příklad**
Převeďte do úplného disjunktivního tvaru:
1. $A \vee (A^{\prime} \wedge B)$
2. $(A \wedge B) \vee (B \wedge C^{\prime})$
3. $(A^{\prime} \Rightarrow B^{\prime}) \vee (B \wedge C^{\prime})$

**Příklad**
Napište jakoukoli formuli $\varphi$ s následující pravdivostní tabulkou:

| $A$ | $B$ | $\varphi$ |
|---|---|---|
| 1 | 1 | 1 |
| 1 | 0 | 1 |
| 0 | 1 | 0 |
| 0 | 0 | 1 |

---

## Příklady

**Příklad**
Napište jakoukoli formuli $\varphi$ s následující pravdivostní tabulkou *(pozn.: hodnoty zrekonstruovány z poškozeného zdrojového textu)*:

| $A$ | $B$ | $C$ | $\varphi$ |
|---|---|---|---|
| 1 | 1 | 1 | 0 |
| 1 | 1 | 0 | 1 |
| 1 | 0 | 1 | 0 |
| 1 | 0 | 0 | 1 |
| 0 | 1 | 1 | 0 |
| 0 | 1 | 0 | 1 |
| 0 | 0 | 1 | 0 |
| 0 | 0 | 0 | 1 |