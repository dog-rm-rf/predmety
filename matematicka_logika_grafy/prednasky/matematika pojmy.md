Výroková logika- negace výroků, určit pravdivost
	tautologie
	kontradikce
	splnitelná
	DeMorganovy zakony a ekvivalence a negace formulí tabulka
	AND,OR
	A je důsledkem B - B=>A - A a B musí být tautologií a B pokud je to vice neboli mnozin formulí a musí být spojena AND,
	disjunktivní tvar  (A and B)or(A and C)
	úplný disjunktivní tvar (A and B and C) or (negA and B and C) - podmínka musí být splněna podmínka že každé písmenko musí být obsaženo právě jednou a nesmí se opakovat - tady se rozšiřuje např (A and B) or ... pridame C aby byli
všichny literaly obsazeny tim padem pridame (A nad B and (C or negC)) rozsirime o 1, pak vznikne (A and B and C) or (A and B and negC)
	konjuktivní tvar (A or B) and (A or C)
	minimální disjunktivní tvar - nejmenší počet literálů mezi všemi formulemi
	Algoritmus Quine-McCluskey

Prediková logika
	kvatifikatory - existuje alespon, pro všechna, neg obraceneho E je platí pro jedno jediné x
	Unární relace - A je množina aut a R je relace ,,auto má dieslový motor" - jde o vlastnost - buď patří nebo nepatří
	Terární relace - vztah mezi třemi prvky najednou,  Vztah, který dává smysl pouze tehdy, když jsou pohromadě všechny tři entity v přesném pořadí – tedy jako uspořádaná trojice $(a, b, c)$.
	Predikáty proměnné - mohou být kvatntifikované nebo volné (kvatnifikované každý nebo alespň jeden a volné nejsou kvatifikované)
	Prediková formule se nazývá uzavřená pokud tam není volná proměnná

Množiny
	Vlastnosti:
		1. Jednoznačnost - je není prvkem
		2. Unikátnost prvků - není duplicita
		3. Neuspořádanost - není důležité pořadí
	Velikost množiny - |A| počet prvků
	Každý prvek JE nebo NENÍ prvkem množiny, nezáleží na pořadí

	Russellův problém - nesmí být množina množin protože by to generoval pořád dokona nove množiny, proto se používají Třídy
	Množina nesmí obsahovat samu sebe
	Podmnožina - množina A je podmnožinou B - A < B(< znak podmnoziny xd) pokud všechny prvky z množiny A leží také v množině B --- A=>B-- PROTIPŘÍPAD A obsahuje B nebo A je nadmnožina B
	Vlastní podmnožina - je striktně menší, nikdy neobsahuje všechny prvky, 1. Každý prvek leží v množině A leží i v množině B 2. obě množiny se nerovnají (doplněk množiny B v množině A )
	Potenční množina dané množiny A (zapisovaná jako {P}(A) nebo 2^A) je množina, jejímiž prvky jsou všechny možné podmnožiny množiny A
	
	Dvě množiny jsou stejné pokud A=B  x je elementem A a zároveň B

	Operace s množinami:
		sjednocení
		průnik
		rozdíl - doplněk

Vennovy diagramy

Kartézký součin množin A a B je dvouprvková množina všech uspořádaných dvojic (když součin dvou stejných mnozin je A na n takze je to AxAxA podle n)
	Uspořádaná dvojice - záleží na pořadí {x}{x,y} x bude první

Číselné obory
	N - přirozená čísla i 0
	Z - celá čísla (-)
	Q - racionální (1/2)
	R - realná (sin)
	C - komplexní (realná a imaginarní část)

Relace
	Binární relace - podmnožiny A a B relace je aRb, pokud je A = B tak binární relace na množině A

VLASTNOSTI RELACE R NA MNOŽINĚ A
	Reflexivní: (x, x) ∈ R, ∀x ∈ A (každý prvek z A má smyčku sám na sebe)   
	Symetrická: (x, y) ∈ R <=> (y, x) ∈ R (každá šipka tam má i cestu zpět)   
	Antisymetrická: ((x, y) ∈ R ∧ (y, x) ∈ R) => x = y (žádná obousměrná šipka mezi různými prvky; smyčky nevadí)   
	Tranzitivní: ((x, y) ∈ R ∧ (y, z) ∈ R) => (x, z) ∈ R (kde je cesta x -> y -> z, musí být i zkratka x -> z)   
	Ekvivalence: reflexivní + symetrická + tranzitivní   
	Uspořádání: reflexivní + antisymetrická + tranzitivní   
JAK FUNGUJÍ JAKO IMPLIKACE 
	(P => Q)Symetrie, antisymetrie a tranzitivita mají tvar implikace.
	Pravidlo logiky: 0 => cokoli je vždy PRAVDA (1).
	Vlastnost platí automaticky vždy, když v R nenajdeš dvojice splňující levou stranu (není na čem najít protipříklad).
	Výjimka je reflexivita – ta není implikací z prvků R, ale bezpodmínečně vyžaduje smyčku (x, x) pro každý prvek z A.
CHYTÁK S PRÁZDNOU MNOŽINOU 
	(∅)R = ∅ na neprázdné množině A (např. A = {1, 2}):
		Symetrická, antisymetrická, tranzitivní: ANO (levá strana implikací je 0, takže implikace platí)
		Reflexivní: NE (prvkům v A chybí smyčky (x, x))
		Ekvivalence / uspořádání: NE
	R = ∅ na prázdné množině A = ∅:
		Reflexivní, symetrická, antisymetrická, tranzitivní: VŠE ANO (v A není žádný prvek, pro který by podmínka selhala)Ekvivalence / uspořádání: ANO

Ekvivalence a uspořádání
	Ekvivalence má třídy a uspořádání se dá napsat Hasseho diagram

Porovnatelné a neporovnatelné
	V kontextu Uspořádání
	Pokud platí relace, alespoň jedním směrem tak se jedná o porovnatelné a opak je neporovnatelné
	3|12 je porovnatelné
	3|5 neporovnatelné

	Pokud jsou v množině všechny dvojice prvků porovnatelné jde o úplné (lineární) uspořádání — prvky se dají seřadit do jedné řady za sebou. 
	Jakmile existuje alespoň jedna dvojice neporovnatelných prvků, jedná se jen o částečné uspořádání.

Inverzní relace
	Konkrétní výčet dvojic: Máš-li $R = \{(1, 2), (1, 3), (4, 2)\}$, pak inverzní relace je $R^{-1} = \{(2, 1), (3, 1), (2, 4)\}$.
	Prohodím vstup a výstup

Doplňková (komplementární) relace 
	obsahuje všechny uspořádané dvojice z celého kartézského součinu, které v původní relaci $R$ nejsou. Jde jednoduše o negaci původního vztahu.

	Zobrazení z A do B (F: A -> B): Relace, kde každý prvek z A má přiřazen nejvýše jeden prvek z B.
	Obraz prvku $x$ je prostě výsledek (hodnota), který dostaneš, když do funkce nebo zobrazení $F$ dosadíš konkrétní vstupní prvek $x$.
	Definiční obor D(F): Všechny vstupní prvky z množiny A, které mají v zobrazení F svůj výsledek. (Zjednodušeně: všechno, co smíš do funkce dosadit, aby to dávalo smysl).
	Zobrazení A do B (bez předložky "z"): Zobrazení, u kterého má výsledek úplně každý prvek z množiny A (celá množina A je definičním oborem, D(F) = A)
	(Reálná) funkce na množině A: Zobrazení, které každému prvku z množiny A přiřadí jedno konkrétní reálné číslo. (Zjednodušeně: klasická funkce, jejímž výsledkem je reálné číslo).
	Prosté zobrazení (injektivní): Zobrazení, ve kterém žádné dva různé vstupy z A nemají stejný výsledek v B. (Zjednodušeně: každý výsledek pochází maximálně z jednoho vstupu)
	Zobrazení množiny A na množinu B (surjektivní): Zobrazení, které zaplní celou cílovou množinu B – každý prvek v B je výsledkem alespoň pro jeden vstup z A. (Zjednodušeně: v B nezůstane žádný prvek „na ocet“).
	Vzájemně jednoznačné zobrazení (bijekce): Dokonalé párování 1:1 mezi všemi prvky množiny A a všemi prvky množiny B. (Zjednodušeně: každý prvek z A má přesně jeden unikátní protějšek v B a v žádné množině nikdo nezbude)
	Inverzní relace R^-1: Pro relaci R na množinách A a B je definována předpisem x R^-1 y právě tehdy, když y R x.
	Pozorování: Inverzní relace k zobrazení F je opět zobrazení právě tehdy, když je F prosté.
	Menší mohutnost (|A| <= |B|): Množina A má menší mohutnost než B, pokud existuje injektivní zobrazení množiny A do množiny B.
	Stejná mohutnost (|A| = |B|): Množina A má stejnou mohutnost jako B, pokud existuje bijektivní zobrazení množiny A na množinu B
	Spočetná množina: Množina A, která je buď konečná, nebo pro ni existuje bijektivní zobrazení f: N -> A
	Poznámka: Nekonečné spočetné množiny jsou nejmenší nekonečné množiny.
	
	
	


Přednáška 6
	Neorientovaný graf G = (V, E, p): 
	Trojice tvořená neprázdnou konečnou množinou vrcholů V, konečnou množinou hran E a zobrazením p. 
	Zobrazení p každé hraně přiřazuje jeden nebo dva vrcholy (jednoprvkovou nebo dvouprvkovou množinu), které daná hrana spojuje.
	Smyčka: Hrana začínající a končící ve stejném vrcholu (p(e) je jednoprvková množina)
	Multigraf: Graf obsahující vícenásobné hrany – tedy různé hrany e1 a e2, které spojují stejné vrcholy (platí p(e1) = p(e2)).
	Diagram grafu: Konkrétní grafické znázornění grafu (nakreslený obrázek na papíře).
	Neorientovaný graf bez vícenásobných hran: Symetrická relace E na neprázdné množině V
	Neorientovaný graf bez vícenásobných hran a smyček: Symetrická a antireflexivní relace E na neprázdné množině V
	Prostý graf: Graf, který neobsahuje smyčky ani vícenásobné hrany.
	Diskrétní graf Dn: Graf s n vrcholy, který nemá žádnou hranu.
	Úplný graf Kn: Graf s n vrcholy, ve kterém jsou každé dva různé vrcholy spojeny hranou
	Izomorfní grafy: Grafy G1 = (V1, E1, p1) a G2 = (V2, E2, p2) bez vícenásobných hran, mezi jejichž vrcholy existuje vzájemně jednoznačné zobrazení I: V1 -> V2 zachovávající hrany (platí {a, b} z p(E1) právě tehdy, když {I(a), I(b)} z p(E2)).
	Rozdíly: 
		Mají jiný počet vrcholů
		rozdílné skóre grafu
		ruzni sousede vrcholu
		ruzny pocet kruznic
		souvislost grafu
	Stupeň vrcholu deg(a): Počet hran, které z vrcholu a vycházejí (deg(a) = |{e z E | a z p(e)}|)
	Skóre grafu G: Posloupnost stupňů všech jeho vrcholů (deg(v1), deg(v2), ..., deg(vn)), obvykle zapisovaná jako nerostoucí posloupnost (dvě skóre jsou shodná, pokud se liší jen pořadím).
	Vlastnosti izomorfních grafů: Izomorfní grafy mají vždy stejný počet vrcholů, stejný počet hran a stejné skóre.
	Princip sudosti (věta o součtu stupňů): Součet stupňů všech vrcholů libovolného grafu je vždy sudé číslo.
	7,6,5,4 - musi byt sudy pocet hran, vezmeme jedo cislo to nejvetsi, a odecteme tolik cisel o -1. Pokud vyjde -1 tak to nejde, pokud vyjdou 0000 tak to funguje
	Sled: Střídavá posloupnost vrcholů a hran (v0, e1, v1, e2, ..., en, vn), kde každá hrana ei spojuje sousední vrcholy {vi-1, vi}. Délka sledu je počet hran n.
	Tah: Sled, ve kterém se neopakují hrany. Pokud začíná a končí ve stejném vrcholu (v0 = vn), jde o tah uzavřený, v opačném případě o tah otevřený
	Cesta: Sled, ve kterém se neopakují vrcholy (s možnou výjimkou prvního a posledního).
	Kružnice: Uzavřená cesta (první a poslední vrchol jsou totožné).
	Souvislý graf: Graf, ve kterém jsou každé dva vrcholy spojené cestou (tahem, sledem).
	Komponenty: Maximální souvislé části nesouvislého grafu.
	Eulerovský graf: Graf, ve kterém existuje (uzavřený či otevřený) Eulerovský tah – tedy tah obsahující každou hranu grafu právě jednou
	Poznámka: Eulerovský graf bez izolovaných vrcholů (vrcholů stupně 0) musí být vždy souvislý
	Uzavřený Eulerovský tah: Souvislý graf ho obsahuje právě tehdy, když mají všechny jeho vrcholy sudý stupeň. Každý takový tah pak končí ve stejném vrcholu, ve kterém začal.
	Otevřený Eulerovský tah: Souvislý graf ho obsahuje právě tehdy, když mají právě dva jeho vrcholy lichý stupeň. Tyto dva vrcholy jsou pak vždy počátečním a koncovým vrcholem každého Eulerovského tahu.
	Hamiltonovský graf: Graf, ve kterém existuje Hamiltonovská kružnice – tedy kružnice, která obsahuje každý vrchol grafu právě jednou
	Diracova věta (postačující podmínka): Má-li graf G s n vrcholy stupeň každého vrcholu alespoň n/2, pak je tento graf Hamiltonovský.
	Oreova věta (postačující podmínka): Platí-li v grafu G s n vrcholy pro každé dva nesousední vrcholy u, v, že součet jejich stupňů je alespoň n (st(u) + st(v) >= n), pak je tento graf Hamiltonovský.
	Les: Graf, který neobsahuje žádnou kružnici.
	Strom: Souvislý graf, který neobsahuje žádnou kružnici.
	Věta o počtu hran stromu: Souvislý graf o n vrcholech je strom právě tehdy, když má n - 1 hran
	Důsledek: Graf o n vrcholech s méně než n - 1 hranami je vždy nesouvislý.
	Listy: Vrcholy stupně jedna (deg(v) = 1)
	Věta o listech stromu: Každý strom s alespoň dvěma vrcholy má minimálně dva listy.
	Podgraf: Graf (V', E', p') je podgrafem grafu (V, E, p), pokud je V' podmnožinou V, E' je podmnožinou E na vrcholech z V' a zachovává přiřazení hran vrcholům (p(e) = p'(e) pro každou hranu e z E').
	Faktor grafu G: Podgraf, který obsahuje všechny vrcholy původního grafu G (V' = V)
	Kostra grafu G: Faktor souvislého grafu G, který je zároveň stromem.

Přednáška 7
	Ohodnocený graf G = (V, E, p, c): Čtveřice tvořená grafem (V, E, p) a zobrazením c: E -> R (nebo R+), které každé hraně přiřazuje reálné (kladné) číslo – tzv. ohodnocení hrany.
	Minimální kostra: Taková kostra souvislého ohodnoceného grafu G, u které je součet ohodnocení jejích hran nejmenší možný ze všech koster daného grafu.
	Délka cesty: Součet ohodnocení všech jejích hran
	Vzdálenost dvou vrcholů: Délka nejkratší cesty mezi těmito vrcholy
	Strom nejkratších cest z vrcholu v: Taková kostra grafu G, ve které je vzdálenost vrcholu v od všech ostatních vrcholů stejná jako v původním grafu G.
	
	 Dijkstrův algoritmus
	

Přednáška 8
	Orientovaný graf - Graf je uspořádaná trojice $(V, E, p)$, ne dvojice $(V, E)$
	$V$ musí být neprázdná ($V \neq \emptyset$), $E$ může být prázdná: Graf musí mít vždy alespoň jeden vrchol. Množina hran $E$ naopak neprázdná být nemusí (pak dostaneme diskrétní graf).   
	Záleží na pořadí $(a, b)$
	Smyčky jsou touto definicí povolené: Zápis $\{(a, b) \mid a, b \in V\}$ neříká, že $a \neq b$. Zobrazení tedy může hraně přiřadit i dvojici $(a, a)$, což je orientovaná smyčka.  
	Rozdíl mezi vícenásobnými hranami(multigraf) stačí jedna vícenásobná hranaí ze stejného bodu do nějkého bodu takže jsou tam dvakrát, protisměrné jdou opačným směrem: jedna z $a$ do $b$, druhá z $b$ do $a$, tedy $(a, b) \neq (b, a)$ (nejsou to násobné hrany).
	Diskrétní graf (neboli bez hran) - je Orientovaný a zároveň Neorientovaný graf
	Smyčka musí být jen jedna a,a je a,a
	Izomorfismus- existuje bijekce. $I : V_1 \to V_2$ (každý vrchol z prvního grafu má přesně jeden svůj protějšek ve druhém)
	Značení stupňů v orientovaném grafu
	$\deg^+(a)$ (výstupní stupeň / out-degree): Počet hran, které ve vrcholu $a$ začínají (šipky jdou ven z vrcholu).   $\deg^-(a)$ (vstupní stupeň / in-degree): Počet hran, které ve vrcholu $a$ končí (šipky jdou dovnitř do vrcholu)

	Sled - můžu opakovat vrcholy a hrany

	Tah - zákaz opakování hran - otevřený(začínáme a končíme někde jinde) vs uzavřený(začínáme a končíme ve stejném vrcholu)

	Cesta - zákaz opakování vrcholů a hran

	Pokud je cesta uzavřená(opakuje se první a poslední vrchol) je to kružnice

	Silně souvislý graf (respektuješ jednosměrky) - Z každého vrcholu se dokážeš po směru šipek (po orientované cestě) dostat do všech ostatních vrcholů – a tedy i vrátit zpátky

	Slabě souvislý graf (ignoruješ směr šipek) - Kdybys ze všech šipek v grafu vygumoval hroty (udělal z nich obyčejné neorientované čáry), graf by držel pohromadě v jednom kuse (byl by souvislý jako neorientovaný graf)

	Nesouvislý orientovaný graf - Pokud graf nedrží pohromadě ani po odmazání šipek (rozpadá se na více izolovaných částí), není ani slabě souvislý

	Eulerovský orientovaný graf - Eulerovský tah je takový tah (nesmí opakovat hrany), který projde každou hranou grafu právě jednou (po směru šipek). Vrcholy přitom můžeš navštívit vícekrát.

	Eulerovský graf je graf, ve kterém takový tah existuje – a pozor na slajd: v této definici se za Eulerovský považuje graf s uzavřeným i otevřeným Eulerovským tahem

	Izolované vrcholy stupně $(0, 0)$

	Kdybys takové izolované vrcholy v grafu měl, graf není souvislý jako celek, ale přesto v něm může existovat tah přes všechny hrany.


	Slabě souvislý orientovaný graf - Uzavřený Eulerovský tah existuje (u slabě souvislého grafu bez izolovaných vrcholů) tehdy, když pro každý vrchol platí $\deg^+(v) = \deg^-(v)$ (kolikrát do vrcholu vejdeš, tolikrát z něj musíš vyjít).

	Slabě souvislý orientovaný graf - Otevřený Eulerovský tah existuje tehdy, když má právě jeden startovní vrchol o hranu víc ven ($\deg^+ - \deg^- = 1$), právě jeden cílový vrchol o hranu víc dovnitř ($\deg^- - \deg^+ = 1$) a všechny ostatní mají $\deg^+ = \deg^-$



	
	
	
	
	


	
	
	









	
	