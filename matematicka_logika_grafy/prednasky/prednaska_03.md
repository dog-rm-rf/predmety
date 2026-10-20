# Quin-McCluskeyho algoritmus a minimalizace výrokových formulí

Přepis dokumentu **quin.pdf** obsahujícího řešené příklady na minimalizaci výrokových formulí pomocí Quine-McCluskeyho algoritmu.

---

## Příklad 1

**Zadání:**  
Nalezněte minimální vyjádření výrokové formule 
$$(A' \land B' \land C) \lor (A' \land B \land C') \lor (A' \land B \land C) \lor (A \land B' \land C) \lor (A \land B \land C)$$
v disjunktivním tvaru.

---

### Postup řešení

#### 1. Seznam mintermů (vektorový zápis)

| Minterm | $A$ | $B$ | $C$ | Označení |
| :---: | :---: | :---: | :---: | :---: |
| **1** | $-1$ | $-1$ | $1$ | $\text{x}$ |
| **2** | $-1$ | $1$ | $-1$ | $\text{x}$ |
| **3** | $-1$ | $1$ | $1$ | $\text{x}$ |
| **4** | $1$ | $-1$ | $1$ | $\text{x}$ |
| **5** | $1$ | $1$ | $1$ | $\text{x}$ |

---

#### 2. Slučování v 1. řádu

| Slučované dvojice | $A$ | $B$ | $C$ | Označení |
| :---: | :---: | :---: | :---: | :---: |
| **1, 3** | $-1$ | $*$ | $1$ | $\text{x}$ |
| **1, 4** | $*$ | $-1$ | $1$ | $\text{x}$ |
| **2, 3** | $-1$ | $1$ | $*$ | |
| **3, 5** | $*$ | $1$ | $1$ | $\text{x}$ |
| **4, 5** | $1$ | $*$ | $1$ | $\text{x}$ |

---

#### 3. Slučování ve 2. řádu

| Slučované skupiny | $A$ | $B$ | $C$ |
| :---: | :---: | :---: | :---: |
| **1, 3, 4, 5** | $*$ | $*$ | $1$ |

---

#### 4. Nalezení primárních implikantů a tabulka pokrytí

Výsledné primární implikanty:
1. **$-1 \quad 1 \quad *$** $\rightarrow (A' \land B)$
2. **$* \quad * \quad 1$** $\rightarrow C$

**Tabulka pokrytí mintermů:**

| Primární implikant | $(-1, -1, 1)$ | $(-1, 1, -1)$ | $(-1, 1, 1)$ | $(1, -1, 1)$ | $(1, 1, 1)$ |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **$-1 \quad 1 \quad *$** | | $\otimes$ | $\times$ | | |
| **$* \quad * \quad 1$** | $\otimes$ | | $\times$ | $\otimes$ | $\otimes$ |

---

### Výsledek (Příklad 1)

Minimální vyjádření v disjunktivním tvaru je tedy:
$$(A' \land B) \lor C$$

---
---

## Příklad 2

**Zadání:**  
Nalezněte minimální vyjádření výrokové formule 
$$(A' \land B' \land C') \lor (A \land B' \land C') \lor (A' \land B \land C') \lor (A' \land B \land C) \lor (A \land B' \land C) \lor (A \land B' \land C') \lor (A \land B \land C)$$
v disjunktivním tvaru.

---

### Postup řešení

#### 1. Seznam mintermů (vektorový zápis)

| Minterm | $A$ | $B$ | $C$ | Označení |
| :---: | :---: | :---: | :---: | :---: |
| **1** | $-1$ | $-1$ | $-1$ | $\text{x}$ |
| **2** | $1$ | $-1$ | $-1$ | $\text{x}$ |
| **3** | $-1$ | $1$ | $-1$ | $\text{x}$ |
| **4** | $-1$ | $1$ | $1$ | $\text{x}$ |
| **5** | $1$ | $-1$ | $1$ | $\text{x}$ |
| **7** | $1$ | $1$ | $1$ | $\text{x}$ |

---

#### 2. Slučování v 1. řádu (Primární implikanty)

| Slučované dvojice | $A$ | $B$ | $C$ | Odpovídající člen |
| :---: | :---: | :---: | :---: | :---: |
| **1, 2** | $*$ | $-1$ | $-1$ | $B' \land C'$ |
| **1, 3** | $-1$ | $*$ | $-1$ | $A' \land C'$ |
| **2, 5** | $1$ | $-1$ | $*$ | $A \land B'$ |
| **3, 4** | $-1$ | $1$ | $*$ | $A' \land B$ |
| **4, 7** | $*$ | $1$ | $1$ | $B \land C$ |
| **5, 7** | $1$ | $*$ | $1$ | $A \land C$ |

---

#### 3. Tabulka pokrytí mintermů

**Možnost A:**

| Primární implikant | $(-1, -1, -1)$ | $(1, -1, -1)$ | $(-1, 1, -1)$ | $(-1, 1, 1)$ | $(1, -1, 1)$ | $(1, 1, 1)$ |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| $* \quad -1 \quad -1$ | $\otimes$ | $\times$ | | | | |
| $-1 \quad * \quad -1$ | $\times$ | | $\otimes$ | | | |
| $-1 \quad 1 \quad *$ | | | $\times$ | $\otimes$ | | |
| $1 \quad -1 \quad *$ | | $\times$ | | | $\otimes$ | |
| $* \quad 1 \quad 1$ | | | | $\times$ | | $\otimes$ |
| $1 \quad * \quad 1$ | | | | | $\times$ | $\otimes$ |

**Možnost B (alternativní pokrytí):**

| Primární implikant | $(-1, -1, -1)$ | $(1, -1, -1)$ | $(-1, 1, -1)$ | $(-1, 1, 1)$ | $(1, -1, 1)$ | $(1, 1, 1)$ |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| $* \quad -1 \quad -1$ | $\times$ | $\otimes$ | | | | |
| $-1 \quad * \quad -1$ | $\otimes$ | | $\times$ | | | |
| $-1 \quad 1 \quad *$ | | | $\otimes$ | $\times$ | | |
| $1 \quad -1 \quad *$ | | $\times$ | | | $\otimes$ | |
| $* \quad 1 \quad 1$ | | | | $\otimes$ | | $\times$ |
| $1 \quad * \quad 1$ | | | | | $\times$ | $\otimes$ |

---

### Výsledek (Příklad 2)

Minimální vyjádření v disjunktivním tvaru je tedy buď:
$$(B' \land C') \lor (A' \land B) \lor (A \land C)$$
nebo:
$$(A' \land C') \lor (A \land B') \lor (B \land C)$$

---
---

## Příklad 3

**Zadání:**  
Nalezněte minimální vyjádření výrokové formule 
$$(A \land B' \land C' \land D \land E) \lor (A \land B \land C \land D' \land E) \lor (A' \land B' \land C' \land D \land E) \lor (A \land B' \land C \land D' \land E) \lor (A' \land B' \land C' \land D' \land E) \lor (A \land B \land C \land D' \land E') \lor (A \land B' \land C' \land D' \land E)$$
v disjunktivním tvaru.
