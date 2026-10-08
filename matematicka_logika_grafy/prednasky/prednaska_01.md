
# Výroková logika
Jan Hora
Konzulatace - Po,St 13:00 - 13:45

Česká zemědělská univerzita
5. srpna 2025
Jan Hora Výroková logika
pisemna zkouska


**U makléře - pak vyřešit**

**Já:** Dobrý den, rád bych koupil nějaký světlý byt. Chtěl bych, aby měl dvě koupelny a aby byl v domě výtah.

**Makléř:** Ano ano, rozhodně nějaké byty, co by se Vám mohly líbit, v nabídce máme. Ovšem, pokud budete trvat na výtahu, pak nemůžete mít dvě koupelny. Ale rozhodně Vám nenabídnu něco tmavého, bez výtahu a s jednou koupelnou, tak váženému zákazníkovi, jako jste Vy (následováno slizkým úsměvem). A jak tak koukám, je tu ještě jedna dobrá zpráva, všechny světlé byty v nabídce mají dvě koupelny a výtah.



## Základní stavební kameny
**Definice**

Elementární výrok je oznamovací věta, o které má smysl rozhodovat, jestli je pravdivá, a kterou chápeme jako nedělitelný celek.

**Příklady**
* Mám dnes narozeniny.
* $3^{3}=9$
* Uvařím švestkové knedlíky.

**Nepříklady**
* Jdi pryč.
* $x^{2}-2\ge3x+2$
* Jestli budou mít švestky, uvařím švestkové knedlíky.

**Některé výroky jsou složitější**

* **H:** Půjdu dnes večer s Pavlem do hospody.
* **S:** NEpůjdeš dnes večer s Pavlem do hospody.
* **S:** JESTLI půjdeš dnes večer s Pavlem do hospody, PAK budou zítra k večeři bramborové šišky s mákem. (dotyčný je nemá rád)
* **H:** Půjdu dnes večer s Pavlem do hospody A dám si guláš se šesti.
* **S:** Zůstaneš doma NEBO pozvu na víkend svojí maminku.
* **H:** Půjdu dnes večer do hospody PRÁVĚ TEHDY, KDYŽ půjde Pavel.

**Pravdivost výroků**

to-do: udelat si pravdivostní hodnoty

**Značení**

Výroky budeme označovat velkými písmeny, a to buď ze začátku abecedy nebo tak, aby název odpovídal danému výroku.

**Značení**
Výrok může nabývat dvou hodnot, a to pravda a nepravda, značíme $1$ a $0$.

**Poznámka**
Pravdivost výroku nemusíme být schopni v dané chvíli určit.

**Negace**

**Příklad**
$A$
Trautenberk je dobrý člověk.

**Definice**
Negací výroku $A$ rozumíme větu "Není pravda, že $A$". Značíme obvykle $A'$, alternativně také $A^{\prime}$ nebo $\overline{A}$.

**Příklad**
Negace výroku $A$ je tedy věta
Není pravda, že Trautenberk je dobrý člověk.
neboli
$A'$ ... Trautenberk není dobrý člověk.


**Konjunkce**

**Příklad**
$A$
Hrabáč se živí termity.
$B$
Hrabáč se živí mravenci.

**Definice**
Konjunkcí výroků $A$ a $B$ rozumíme větu "$A$ a zároveň $B$". Značíme $A\wedge B$.

**Příklad**
Konjunkce výroků $A$ a $B$ je tedy věta
$A\wedge B$ ... Hrabáč se živí termity a zároveň mravenci.
Lépe česky:
$A\wedge B$ ... Hrabáč se živí termity i mravenci.

**Disjunkce**

**Příklad**
$A$
Nově přijatý zaměstnanec musí mít vysokou školu.
$B$
Nově přijatý zaměstnanec musí mít praxi.

**Definice**
Disjunkcí výroků $A$ a $B$ rozumíme větu "$A$ nebo $B$". Značíme $A\vee B$.

**Příklad**
Disjunkce výroků $A$ a $B$ je tedy věta
$A\vee B$ ... Nově přijatý zaměstnanec musí mít vysokou školu nebo praxi.


**Implikace**

**Příklad**
$A$
Budou mít švestky.
$B$
Uvařím švestkové knedlíky.

**Definice**
Implikací výroků $A$ a $B$ rozumíme větu "Jestliže $A$, pak $B$". Značíme $A\Rightarrow B$.

**Příklad**
Implikace výroků $A$ a $B$ (v tomto pořadí) je tedy věta
$A\Rightarrow B$ ... Jestliže budou mít švestky, uvařím švestkové knedlíky.

A - předpoklad
B - závěr
může být více spojek, li, když

jestliže - mluví jen když když je pravdivý ten první výrok, pokud nemají švestky tak si můžeme co chceme, vlastně mi si můžeme udělat v té chvíli co chcem protože jsme nespcifikovali co se stane když nemají švesky, pak to můžeme nabívat 0, 1

**Ekvivalence**

**Příklad**
$A$
Alice miluje Boba.
$B$
Bob miluje Alici.

**Definice**
Ekvivalencí výroků $A$ a $B$ rozumíme větu "$A$ právě tehdy, když $B$". Značíme $A\Leftrightarrow B$.

**Příklad**
Ekvivalence výroků $A$ a $B$ je tedy věta
$A\Leftrightarrow B$ ... Alice miluje Boba právě tehdy, když Bob miluje Alici.

**Logické spojky – shrnutí**

$A$ výroková proměná 

$0, 1$ výrokové proměné

| Značení | Název | Význam |
| :--- | :--- | :--- |
| $A'$, $\overline{A}$, $\neg A$ | Negace | Není pravda, že $A$ |
| $A\wedge B$ | Konjunkce | $A$ a současně $B$ |
| $A\vee B$ | Disjunkce | $A$ nebo $B$ |
| $A\Rightarrow B$ | Implikace | Jestliže $A$, pak $B$ |
| $A\Leftrightarrow B$ | Ekvivalence | $A$ právě tehdy, když $B$ |

**Skládáme výroky ve formule**

**Definice**

**Výroková proměnná** je formální symbol zastupující libovolný elementární výrok.

**Výroková konstanta** je formální symbol zastupující konkrétní výrokovou hodnotu (čili Pravdu nebo Nepravdu).

**Definice**

Každá výroková proměnná je **výroková formule**.

Každá výroková konstanta je výroková formule.

Pokud jsou $\varphi$, $\psi$ výrokové formule, pak jsou výrokové formule i $(\neg\varphi)$, $(\varphi\vee\psi)$, $(\varphi\wedge\psi)$, $(\varphi\Rightarrow\psi)$, $(\varphi\Leftrightarrow\psi)$.

Jiné výrokové formule nejsou.
Místo výrokové formule budeme obvykle říkat jen formule.

**Pravda, nepravda, lež**

Výroková proměnná (stejně jako elementární výrok) může nabývat dvou hodnot, a to **PRAVDA/NEPRAVDA**, značí se $1/0$.

Pravdivost složitějších výrokových formulí definujeme tak, aby souhlasila s významem těchto spojek v běžné řeči:

| A | B | $A'$ | $A\wedge B$ | $A\vee B$ | $A\Rightarrow B$ | $A\Leftrightarrow B$ |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| $1$ | $1$ | $0$ | $1$ | $1$ | $1$ | $1$ |
| $1$ | $0$ | $0$ | $0$ | $1$ | $0$ | $0$ |
| $0$ | $1$ | $1$ | $0$ | $1$ | $1$ | $0$ |
| $0$ | $0$ | $1$ | $0$ | $0$ | $1$ | $1$ |

*(Pozn.: Hlavička tabulky byla pro přehlednost zarovnána do standardního formátu.)*


**Příklady**

**Příklad**
Napište pravdivostní tabulku formule $A\Rightarrow(B'\Rightarrow A)$.

**Příklad**
Napište pravdivostní tabulku formule $(A'\Leftrightarrow B)\wedge(B'\vee C)'$.

### Řešení: Pravdivostní tabulka formule $(A' \Leftrightarrow B) \wedge (B' \vee C)'$

| $A$ | $B$ | $C$ | $A'$ | $B'$ | $A' \Leftrightarrow B$ | $B' \vee C$ | $(B' \vee C)'$ | $\varphi$ Výsledek: $(A' \Leftrightarrow B) \wedge (B' \vee C)'$ |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| 1 | 1 | 1 | 0 | 0 | 0 | 1 | 0 | **0** |
| 1 | 1 | 0 | 0 | 0 | 0 | 0 | 1 | **0** |
| 1 | 0 | 1 | 0 | 1 | 1 | 1 | 0 | **0** |
| 1 | 0 | 0 | 0 | 1 | 1 | 1 | 0 | **0** |
| 0 | 1 | 1 | 1 | 0 | 1 | 1 | 0 | **0** |
| 0 | 1 | 0 | 1 | 0 | 1 | 0 | 1 | **1** |
| 0 | 0 | 1 | 1 | 1 | 0 | 1 | 0 | **0** |
| 0 | 0 | 0 | 1 | 1 | 0 | 1 | 0 | **0** |

2 na počet neznámích je počet řádků

## Ohodnotit znamená dosadit

**Definice**

**Ohodnocení** formule je přiřazení hodnoty pravda či nepravda ($0$ či $1$) každé výrokové proměnné obsažené v této formuli.

**Absolutní pravda, absolutní lež**

**Definice**
Tautologie je formule, která je pravdivá při každém ohodnocení.

**Příklad tautologie**

$A \vee A'$, $A \Rightarrow A$, $A \Leftrightarrow A$, nebo 1

Tedy formule, která má ve všech řádcích pradivostní tabulky jedničky.

**Definice**
Kontradikce (spor) je formule, která je při každém ohodnocení nepravdivá.

Tedy formule, která má ve všech řádcích pradivostní tabulky nuly.
**Příklady**
$A \wedge A'$ nebo 0


**Není ekvivalence jako ekvivalence**

**Příklad**
Napište pravdivostní tabulku formule $(A\vee B'\vee C')\Rightarrow(A\wedge B)$ a na jejím základě určete, či se jedná o tautologii (kontradikci).

**Poznámka**
Někdy se tautologie/kontradikce značí jen symbolem $1/0$

**Definice**
Formule se nazývá **splnitelná**, pokud existuje ohodnocení, při kterém je její pravdivostní hodnota $1$.

**Definice**
Dvě formule (řekněme $\varphi$ a $\psi$) se nazývají **ekvivalentní**, pokud nabývají stejné pravdivostní hodnoty při všech ohodnoceních (mají stejnou pravdivostní tabulku). Značíme $\varphi\equiv\psi$.


**Příklady**

**Příklad**
Zjistěte, zda jsou následující formule ekvivalentní
1. $\varphi=\neg(\neg A)$, $\psi=A$,
2. $\varphi=A\wedge(B\vee C)$, $\psi=(A\wedge B)\vee(A\wedge C)$
3. $\varphi=A\Rightarrow(B\Rightarrow(C\Rightarrow(D\Rightarrow E)))$, $\psi=A\vee B\vee C\vee D\vee E$,
4. $\varphi=(A\vee B)'$, $\psi=A'\wedge B'$.

Podle definice se dvě formule nazývají ekvivalentní ($\varphi \equiv \psi$), pokud nabývají stejné pravdivostní hodnoty při všech ohodnoceních.

čtvrtina je 1 nebo 0 třeba u A a B je 1/4 1 

### 1. $\varphi=\neg(\neg A)$, $\psi=A$

| A | $\neg A$ | $\varphi = \neg(\neg A)$ | $\psi = A$ |
|:-:|:-:|:-:|:-:|
| 1 | 0 | 1 | 1 |
| 0 | 1 | 0 | 0 |

**Závěr:** Formule **jsou ekvivalentní** ($\varphi \equiv \psi$). Obě sloupce mají shodné hodnoty.

---

### 2. $\varphi=A\wedge(B\vee C)$, $\psi=(A\wedge B)\vee(A\wedge C)$

| A | B | C | $B \vee C$ | $\varphi = A \wedge (B \vee C)$ | $A \wedge B$ | $A \wedge C$ | $\psi = (A \wedge B) \vee (A \wedge C)$ |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| 1 | 1 | 1 | 1 | **1** | 1 | 1 | **1** |
| 1 | 1 | 0 | 1 | **1** | 1 | 0 | **1** |
| 1 | 0 | 1 | 1 | **1** | 0 | 1 | **1** |
| 1 | 0 | 0 | 0 | **0** | 0 | 0 | **0** |
| 0 | 1 | 1 | 1 | **0** | 0 | 0 | **0** |
| 0 | 1 | 0 | 1 | **0** | 0 | 0 | **0** |
| 0 | 0 | 1 | 1 | **0** | 0 | 0 | **0** |
| 0 | 0 | 0 | 0 | **0** | 0 | 0 | **0** |

**Závěr:** Formule **jsou ekvivalentní** ($\varphi \equiv \psi$). Hodnoty sloupců pro $\varphi$ a $\psi$ jsou ve všech řádcích totožné.

---

### 3. $\varphi=A\Rightarrow(B\Rightarrow(C\Rightarrow(D\Rightarrow E)))$, $\psi=A\vee B\vee C\vee D\vee E$

Zde není nutné vypisovat celou pravdivostní tabulku (měla by 32 řádků). Stačí najít jediné ohodnocení, kde se výsledky obou formulí liší. Zvolme ohodnocení, kde jsou všechny proměnné nepravdivé ($A=0, B=0, C=0, D=0, E=0$):

* Dosazení do $\psi$: $0 \vee 0 \vee 0 \vee 0 \vee 0 = \mathbf{0}$
* Dosazení do $\varphi$: $0 \Rightarrow (0 \Rightarrow (0 \Rightarrow (0 \Rightarrow 0)))$
  Podle pravidel pro implikaci platí, že z nepravdy (0) vyplývá cokoliv a výsledek je pravda (1). Tedy i celá tato implikace začínající $0 \Rightarrow \dots$ je rovna $\mathbf{1}$.

**Závěr:** Formule **nejsou ekvivalentní** ($\varphi \not\equiv \psi$). Například pro ohodnocení ze samých nul je $\varphi = 1$, ale $\psi = 0$.

---

### 4. $\varphi=(A\vee B)'$, $\psi=A'\wedge B'$

| A | B | $A \vee B$ | $\varphi = (A \vee B)'$ | $A'$ | $B'$ | $\psi = A' \wedge B'$ |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| 1 | 1 | 1 | **0** | 0 | 0 | **0** |
| 1 | 0 | 1 | **0** | 0 | 1 | **0** |
| 0 | 1 | 1 | **0** | 1 | 0 | **0** |
| 0 | 0 | 0 | **1** | 1 | 1 | **1** |

**Závěr:** Formule **jsou ekvivalentní** ($\varphi \equiv \psi$). (Jedná se o tzv. de Morganovo pravidlo).

**Jak je to s tím makléřem?**

* $A$ - s výtahem
* $B$ - se dvěma koupelnami
* $C$ - světlý

| A | B | C | $A\Rightarrow B'$ | $(A'\wedge B'\wedge C')'$ | $C\Rightarrow(A\wedge B)$ |
| :--- | :--- | :--- | :--- | :--- | :--- |
| $1$ | $1$ | $1$ | $0$ | $1$ | $1$ |
| $1$ | $1$ | $0$ | $0$ | $1$ | $1$ |
| $1$ | $0$ | $1$ | $1$ | $1$ | $0$ |
| $0$ | $1$ | $0$ | $1$ | $1$ | $1$ |
| $1$ | $0$ | $1$ | $1$ | $1$ | $0$ |
| $0$ | $1$ | $0$ | $1$ | $1$ | $1$ |
| $0$ | $0$ | $1$ | $1$ | $1$ | $0$ |
| $0$ | $0$ | $0$ | $1$ | $0$ | $1$ |

*(Pozn.: Tabulka byla upravena pro zřetelnost oproti částečně rozbitému zdrojovému formátu z PDF, aby správně odpovídala sloupcům.)*

Jan Hora Výroková logika