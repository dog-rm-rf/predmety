# Pojmy: Relace a jejich vlastnosti (Část 1)

---

## Uspořádaná dvojice

**Definice:**
Dvouprvkovou množinu $\{ \{x\}, \{x, y\} \}$ **nazýváme uspořádanou dvojicí prvků** $x$ a $y$. Značíme ji $(x, y)$.

**Příklad:**
Mějme prvky $1$ a $2$:
- Uspořádaná dvojice $(1, 2) = \{ \{1\}, \{1, 2\} \}$
- Uspořádaná dvojice $(2, 1) = \{ \{2\}, \{2, 1\} \}$

**Lidsky / Proč na pořadí záleží:**
Protože se tyto dvě množiny nerovnají ($\{ \{1\}, \{1, 2\} \} \neq \{ \{2\}, \{2, 1\} \}$), platí $(1, 2) \neq (2, 1)$. Záleží na tom, kdo je první a kdo druhý.

**Geometrická interpretace:**
V kartézské $x$-$y$ mřížce představuje bod $(1, 2)$ sloupec $1$ a výšku $2$, zatímco bod $(2, 1)$ představuje sloupec $2$ a výšku $1$. Jde o dva zcela různé body.

---

## Kartézský součin

**Definice:**
Kartézský součin množin $A$ a $B$ je množina všech uspořádaných dvojic takových, že na prvním místě je prvek množiny $A$ a na druhém prvek množiny $B$.
$$A \times B = \{(a, b) \mid a \in A \land b \in B\}$$

**Příklad:**
Mějme $A = \{1, 2\}$ a $B = \{x, y\}$.
Kartézský součin $A \times B = \{(1, x), (1, y), (2, x), (2, y)\}$.

**Lidsky / Proč na tom záleží:**
Je to spojení "každý s každým". Vytvoří naprosto všechny možné kombinace mezi dvěma skupinami. Tvoří to hrací plochu pro relace.

**Geometrická interpretace:**
V $x$-$y$ grafu tvoří kartézský součin úplně celou prázdnou mřížku bodů, kde $A$ definuje všechny sloupce a $B$ všechny řádky.

---

## Binární relace

**Definice:**
Binární relace na množinách $A$ a $B$ je jakákoli podmnožina $R$ kartézského součinu $A \times B$. Pokud je $A = B$, hovoříme o binární relaci na množině $A$. Místo $(a, b) \in R$ píšeme někdy $aRb$.

**Příklad:**
Z předchozího kartézského součinu $A \times B$ vybereme jen některé dvojice.
Relace $R = \{(1, x), (2, y)\}$.
Tedy platí $1 R x$ (prvek 1 je ve vztahu s $x$), ale neplatí $1 R y$.

**Lidsky / Proč na tom záleží:**
Zatímco kartézský součin jsou *všechna možná* spojení, relace je výběr jen *některých* konkrétních spojení (např. relace "je menší než" nebo "je sourozencem").

**Geometrická interpretace:**
V $x$-$y$ mřížce relace znamená, že vybarvíš jen některé specifické průsečíky (body), které do tvého vztahu patří. 

---

## Reflexivní relace

**Definice:**
Buď $R$ relace na množině $A$. Pak $R$ se nazývá reflexivní, pokud platí:
$$\forall x \in A: (x, x) \in R$$

**Příklad:**
Na množině $A = \{1, 2\}$ je relace $R = \{(1, 1), (2, 2), (1, 2)\}$ reflexivní. (Kdyby chybělo např. $(2,2)$, už reflexivní není).

**Lidsky / Proč na tom záleží:**
Znamená to, že úplně každý prvek je ve vztahu sám se sebou (např. relace "má stejnou barvu očí jako").

**Geometrická interpretace:**
V bublinovém grafu má každý uzel smyčku sám na sebe. V $x$-$y$ mřížce je kompletně vyplněná celá hlavní úhlopříčka (přímka $y = x$). Nesmí tam chybět ani jediný bod.
```
y-osa
    ^
  3 |   .    .   [X]  <-- Bod (3, 3)
  2 |   .   [X]   .   <-- Bod (2, 2)
  1 |  [X]   .    .   <-- Bod (1, 1)
    +-------------------> x-osa
        1    2    3
```

---

## Symetrická relace

**Definice:**
Buď $R$ relace na množině $A$. Pak $R$ se nazývá symetrická, pokud platí:
$$(x, y) \in R \iff (y, x) \in R$$

**Příklad:**
Na množině $A = \{1, 2\}$ je relace $R = \{(1, 2), (2, 1)\}$ symetrická.
Relace $R = \{(1, 2)\}$ symetrická není, protože chybí zpáteční cesta $(2, 1)$.

**Lidsky / Proč na tom záleží:**
Vztah musí být obousměrný. "Pokud jsem tvůj sourozenec, musíš být ty můj sourozenec." Kde je cesta tam, musí být i cesta zpátky.


**Geometrická interpretace:**
Graf v $x$-$y$ mřížce funguje jako zrcadlo. Hlavní úhlopříčka $y = x$ je osa souměrnosti. Pokud přehneš papír podél této úhlopříčky, všechny body padnou přesně na sebe.

```
y-osa
    ^
  3 |  [X]   .   [ ]  <-- Bod (1, 3)
  2 |   .   [D]   .   <-- Bod na úhlopříčce (2, 2)
  1 |  [ ]   .   [X]  <-- Povinný zrcadlový bod (3, 1)
    +-------------------> x-osa
        1    2    3
       /
  úhlopříčka y = x

  ```

---

## Antisymetrická relace

**Definice:**
Buď $R$ relace na množině $A$. Pak $R$ se nazývá antisymetrická, pokud platí:
$$((x, y) \in R \land (y, x) \in R) \implies x = y$$

**Příklad:**
Relace $R = \{(1, 2), (2, 3)\}$ JE antisymetrická (neexistují obousměrné cesty).
Relace $R = \{(1, 2), (2, 1)\}$ NENÍ antisymetrická (protože $1 \neq 2$).

**Lidsky / Proč na tom záleží:**
Přísný zákaz obousměrných vztahů mezi dvěma různými prvky. Jediná povolená "obousměrnost" je smyčka na stejném prvku ($x = y$). Např. relace "být potomkem" – nemůžeme být vzájemně svými potomky.

**Geometrická interpretace:**
V $x$-$y$ mřížce to znamená, že mimo hlavní úhlopříčku nesmí existovat žádné dva zrcadlové odrazy. Pokud leží bod nad úhlopříčkou, na jeho zrcadlovém místě pod úhlopříčkou musí být prázdno.

```
y-osa
    ^
  3 |  [X]   .   [ ]  <-- Bod (1, 3) JE v relaci
  2 |   .   [D]   .   <-- Bod na úhlopříčce (2, 2) - povolen
  1 |  [ ]   .   [Z]  <-- ZAKÁZÁNO! (zde nesmí být bod)
    +-------------------> x-osa
        1    2    3
       /
  úhlopříčka y = x

  ```

---

## Tranzitivní relace

**Definice:**
Buď $R$ relace na množině $A$. Pak $R$ se nazývá tranzitivní, pokud platí:
$$((x, y) \in R \land (y, z) \in R) \implies (x, z) \in R$$

**Příklad:**
Množina $A = \{1, 2, 3\}$.
Relace $R = \{(1, 2), (2, 3), (1, 3)\}$ JE tranzitivní. Cesta vede z $1$ do $2$, z $2$ do $3$, a proto musí existovat zkratka z $1$ do $3$.

**Lidsky / Proč na tom záleží:**
Vztah se přenáší přes prostředníka. "Pokud jsem starší než ty a ty jsi starší než Karel, pak já musím být starší než Karel." Kdekoliv najdeš cestu o dvou krocích, musí tam existovat i přímá zkratka.

**Geometrická interpretace:**
Představ si sloupec $y$ jako razítko. Pokud leží bod na souřadnicích $(x, y)$, znamená to, že se vzor celého sloupce $y$ musí otisknout i do sloupce $x$. (Někdy se tomu říká pravidlo čtvrtého rohu).

``` 
y-osa
    ^
  3 |  [T]  [2]   .   <-- [T]=(1, 3) je výsledek. [2]=(2, 3) je druhý krok.
  2 |  [1]   .    .   <-- [1]=(1, 2) je první krok.
  1 |   .    .    .   
    +-------------------> x-osa
        1    2    3
```

---

## Ekvivalence

**Definice:**
Relace na množině $A$ se nazývá ekvivalence, pokud je **reflexivní, symetrická a tranzitivní**.

**Příklad:**
Relace $a \sim b \iff |a| = |b|$ na celých číslech. 
Dvojice jako $(3, 3), (-3, -3), (3, -3), (-3, 3)$ tvoří kompletní propojenou skupinu.

**Lidsky / Proč na tom záleží:**
Ekvivalence rozděluje celou množinu na tzv. **třídy ekvivalence** (disjunktní části/ostrovy). Znamená to "být z určitého pohledu stejný". Na každém ostrově je každý s každým propojen (symetrie, tranzitivita) a každý má i smyčku (reflexivita). Z jednoho ostrova na druhý nevede žádná cesta.

**Geometrická interpretace:**
Když si vhodně seřadíš prvky na osách, relace ekvivalence vytvoří v $x$-$y$ mřížce dokonalé plné čtverce, které leží na hlavní úhlopříčce.

---

## Uspořádání (Částečné uspořádání)

**Definice:**
Relace na množině $A$ se nazývá uspořádání, pokud je **reflexivní, antisymetrická a tranzitivní**.

**Příklad:**
Relace $\le$ (menší nebo rovno) na číslech, nebo dělitelnost $a \mid b$ na přirozených číslech.

**Lidsky / Proč na tom záleží:**
Definuje hierarchii (žebříček) prvků od "nejmenšího" po "největší". Antisymetrie zaručuje, že žádné dva různé prvky nebudou mít v žebříčku obousměrnou vazbu (nemohou být nad sebou navzájem).

**Geometrická interpretace (Hasseho diagram):**
Zobrazuje se zjednodušeným grafem zdola nahoru. "Menší" prvky jsou dole, "větší" nahoře. Z grafu se mažou smyčky (vyplývají z reflexivity) a mažou se tranzitivní zkratky (vyplývají z tranzitivity). Spojnice (bez šipek) se kreslí jen mezi nejbližšími sousedy v hierarchii.

## Zobrazení (Funkce)

**Pravidlo:** V každém sloupci (pro dané $x$) může být maximálně jeden bod. (Zakázané rozvětvení)

```
y-osa
    ^
  3 |  [ ]   .   [ ]
  2 |  [X]   .   [X]  <-- Různá x (sloupce 1 a 3) mohou mít stejné y
  1 |  [ ]  [X]  [ ]
    +-------------------> x-osa
        1    2    3
      
  TOTO JE ZAKÁZÁNO (Není zobrazení):
  3 |  [Z]  <-- 
  2 |  [Z]  <-- Dva body nad sebou ve sloupci x=1 !
```


## Zobrazení z $A$ do $B$ (Částečné zobrazení)

**Definice:**
Relace $F$ na množinách $A$ a $B$ se nazývá zobrazení z $A$ do $B$ (značíme $F : A \rightarrow B$), pokud platí pravidlo jednoznačnosti výstupu:

$$
((x, y) \in F \land (x, z) \in F) \implies y = z
$$

**Příklad:**
Množina $A = \{1, 2, 3\}$. Relace $F = \{(1, a), (2, b)\}$ JE zobrazení z $A$ do $B$. Prvek $3$ nemá žádný výstup, což u zobrazení "z $A$ do $B$" nevadí.
Relace $F = \{(1, a), (1, b)\}$ NENÍ zobrazení, protože jednička se větví na $a$ i $b$.

**Lidsky / Proč na tom záleží:**
Základní pravidlo zobrazení zní: **z jednoho bodu se nesmí větvit cesty**. Každé $x$ na vstupu může mít **maximálně jeden** výstup $y$ (tedy 0 nebo 1). Není ale povinné, aby každý prvek z $A$ někam ukazoval (definiční obor $D(F)$ může být jen část množiny $A$).

**Geometrická interpretace:**
V $x$-$y$ mřížce leží **v každém sloupci nejvýše jeden bod**. Nesmí se stát, že by nad sebou ve stejném sloupci ležely dva nebo více bodů.

---

## Zobrazení $A$ do $B$ (Úplné zobrazení)

**Definice:**
Zobrazení $F : A \rightarrow B$ se nazývá zobrazení $A$ do $B$ (bez předložky „z“), pokud je jeho definičním oborem celá množina $A$:

$$
D(F) = A
$$

**Příklad:**
Množina $A = \{1, 2, 3\}$, množina $B = \{a, b\}$.
Relace $F = \{(1, a), (2, b), (3, a)\}$ JE zobrazení $A$ do $B$. Všechna čísla 1, 2 i 3 mají svůj cíl.

**Lidsky / Proč na tom záleží:**
Doplňuje to předchozí definici. Nejenže z žádného $x$ nesmí vést více šipek, ale navíc **nesmí existovat žádné $x$, ze kterého by nevycházela šipka**. Z každého prvku $A$ zkrátka vychází **přesně jedna** šipka.

**Geometrická interpretace:**
V $x$-$y$ mřížce leží v **každém sloupci přesně jeden bod**. Žádný sloupec není prázdný a v žádném nejsou dva body.

**Definice**

Zobrazení množiny A do množiny R reálných čísel se nazývá
**(reálná) funkce** na množině A.

---

## Injektivní zobrazení (Prosté)

**Definice:**
Zobrazení $F : A \rightarrow B$ se nazývá prosté (injektivní), pokud platí, že dva různé vstupy nemohou mít stejný výstup:

$$
(F(x) = z \land F(y) = z) \implies x = y
$$

**Příklad:**
Funkce $y = x^3$ na celých číslech JE injektivní (každé číslo má svou unikátní třetí mocninu).
Funkce $y = x^2$ na celých číslech NENÍ injektivní (čísla $2$ a $-2$ sdílí stejný cíl $4$).

**Lidsky / Proč na tom záleží:**
Zatímco obyčejné zobrazení řešilo start ($x$ se nesmí větvit), injekce řeší cíl ($y$ se nesmí sbíhat). **Cíle se nesmí sdílet.** Do každého cíle $y$ vpravo může vstupovat maximálně jedna šipka.

**Geometrická interpretace:**
V $x$-$y$ mřížce leží **v každém řádku nejvýše jeden bod**.

```
y-osa (Cíle B)
    ^
  4 |   .   [X]   .       <-- (2, 4)
  3 |   .    .    .       <-- Prázdný řádek NEVADÍ (nemusí být "na")
  2 |  [X]   .    .       <-- (1, 2)
  1 |   .    .   [X]      <-- (3, 1)
    +-------------------> x-osa (Vstupy A)
        1    2    3
```


---

## Surjektivní zobrazení (Zobrazení „na“ množinu)

**Definice:**
Zobrazení $F : A \rightarrow B$ zobrazuje množinu $A$ na množinu $B$ (F je surjektivní), pokud má každý prvek z $B$ alespoň jeden vzor v $A$:

$$
\forall y \in B : \exists x \in A \text{ takový, že } F(x) = y
$$

**Příklad:**
Přiřazování židlí v místnosti studentům. Pokud je surjektivní, znamená to, že **nezůstala žádná volná židle** (každá židle má alespoň jednoho studenta, který na ní sedí).

**Lidsky / Proč na tom záleží:**
Znamená to dokonalé pokrytí cílové množiny. Obor hodnot zobrazení pokrývá celou množinu $B$. Ani jeden prvek napravo nezůstal prázdný, do každého míří alespoň jedna šipka.

**Geometrická interpretace:**
V $x$-$y$ mřížce **není žádný prázdný řádek**. V každém řádku leží alespoň jeden bod.

```
y-osa (Cíle B)
    ^
  3 |   .   [X]   .    .  
  2 |  [X]   .    .   [X] <-- Dva body v řádku NEVADÍ (nemusí být prosté)
  1 |   .    .   [X]   .  
    +------------------------> x-osa (Vstupy A)
        1    2    3    4
```

---

## Bijektivní zobrazení (Vzájemně jednoznačné)

**Definice:**
Zobrazení $F$ množiny $A$ do množiny $B$ se nazývá bijektivní, pokud je definiční obor celá množina $A$, $F$ je prosté (injektivní) a zobrazuje $A$ na množinu $B$ (surjektivní).

**Příklad:**
Každý občan ČR má přiděleno přesně jedno unikátní rodné číslo a každé evidované rodné číslo patří přesně jednomu občanovi. Jde o dokonalé párování.

**Lidsky / Proč na tom záleží:**
Je to průnik úplně všech podmínek. Z každého bodu vlevo vyjde přesně jedna šipka a do každého bodu vpravo vejde přesně jedna šipka. Slouží k určení, že jsou dvě množiny absolutně "stejné" (mají stejný počet prvků a dají se spárovat kus za kus).

**Geometrická interpretace:**
V $x$-$y$ mřížce leží **v každém sloupci i v každém řádku PŘESNĚ JEDEN bod**.

```
y-osa (Cíle B)
    ^
  3 |   .   [X]   .       <-- Pouze jeden bod v řádku i sloupci
  2 |  [X]   .    .       
  1 |   .    .   [X]      
    +-------------------> x-osa (Vstupy A)
        1    2    3
```

---

## Inverzní relace

**Definice:**
Buď $R$ relace na množinách $A$ a $B$. Pak relace $R^{-1}$ se nazývá inverzní k $R$, pokud platí:

$$
x R^{-1} y \iff y R x
$$

**Příklad:**
Pokud je relace $R = \{(1, 5), (2, 9)\}$, pak inverzní relace $R^{-1} = \{(5, 1), (9, 2)\}$.

**Lidsky / Proč na tom záleží:**
Je to pouhé otočení směru všech šipek v grafu. *Důležitý chyták:* Inverze k zobrazení tvoří nové zobrazení **POUZE tehdy, pokud bylo to původní zobrazení prosté (injektivní)**. Pokud se do jednoho cíle $y$ sbíhaly dvě šipky (např. $x^2$), při otočení by se z něj najednou rozvětvily (což zobrazení zakazuje).

**Geometrická interpretace:**
V mřížce se celý graf **zrcadlově překlopí přes hlavní úhlopříčku** (osu $y = x$). Z řádků se stanou sloupce a ze sloupců řádky.

---

## Mohutnost a Spočetnost množin

**Definice (Mohutnost):**
* Množina $A$ má **menší nebo stejnou** mohutnost než $B$ ($\vert{}A\vert{} \le \vert{}B\vert{}$), pokud existuje *injektivní* zobrazení z $A$ do $B$.
* Množiny mají **stejnou** mohutnost ($\vert{}A\vert{} = \vert{}B\vert{}$), pokud mezi nimi existuje *bijektivní* zobrazení.

**Definice (Spočetná množina):**
Množina $A$ je spočetná, pokud je buď konečná, nebo má stejnou mohutnost jako množina přirozených čísel $\mathbb{N}$ (tzn. existuje bijekce $f : \mathbb{N} \rightarrow A$).

**Příklad a Lidské vysvětlení:**
* **Spočetné množiny:** Všechny prvky jdou uspořádat do řady (dát jim pořadová čísla $1, 2, 3 \dots$). Spočetná jsou celá čísla $\mathbb{Z}$ a dokonce i racionální čísla (zlomky) $\mathbb{Q}$. Znamená to $\vert{}\mathbb{N}\vert{} = \vert{}\mathbb{Z}\vert{} = \vert{}\mathbb{Q}\vert{}$.
* **Nespočetné množiny:** Prvků je tak strašně moc, že se do řady seřadit nedají, vždy ti nějaké zbudou. Extrémním příkladem jsou reálná čísla $\mathbb{R}$. Platí, že $\vert{}\mathbb{N}\vert{} < \vert{}\mathbb{R}\vert{}$. Reálných čísel je "víc" než přirozených čísel.