# Přepis přednášky 3: Teorie systémů a Organizační systém podniku

**Předmět:** Teorie řízení organizačního systému (TROS) / Základy řízení  
**Přednášející:** Ing. Monika Jadrná, Ph.D., MBA, MSc. (Katedra managementu a marketingu, PEF ČZU v Praze)  
**Hlavní témata:** Vymezení pojmu systém, struktura a typy vazeb, systém a okolí (černá skříňka), agregace/integrace, kompletní typologie systémů (vymezení podniku), organizační systém (OS), matice 3×3 subsystémů 1. řádu, oblasti a procesy, vlastnosti efektivního OS (nezastupitelnost, podmíněnost, proporcionalita, stabilita, kompetence, disjunkce/konjunkce).

---

## 1. Vymezení pojmu Systém

- **Definice systému (Hron, 2014):**
  > *„Systém je určitou abstrakcí reálného objektu, kterou je možné definovat při respektování vytčeného cíle určitými prvky (vlastnostmi) a vazbami mezi nimi.“*
- **Klíčové znaky systému:**
  - Konečná množina prvků navzájem propojená konečnou množinou vazeb.
  - Všechna spojení a prvky jsou podřízeny **určité účelové funkci (cíli)**.
  - Jde o **abstrakci reálného objektu** – systém můžeme zavést na jakémkoliv reálném objektu podle toho, jaký cíl zkoumání sledujeme.
- **Symbolický zápis systému:**
  $$S = \{A, R\}$$
  - $A$ = množina prvků (*Elements / Attributes*)
  - $R$ = množina vazeb (*Relations*)

---

## 2. Struktura a Složitost systému

- **Struktura systému:** je určena:
  1. Počtem prvků ($n$).
  2. Počtem vazeb.
  3. Typem prvků (hmotné, informační, lidské).
  4. Typem vazeb (přímé, nepřímé, zpětné).
- **Složitost systému:** představuje vztah mezi počtem prvků a počtem vazeb.
  - Pro systém o $n$ prvcích platí interval možného počtu vazeb:
    $$\text{Minimální počet vazeb} = n - 1$$
    $$\text{Maximální počet vazeb} = n^2$$

---

## 3. Typologie vazeb ve struktuře systému

### A. Otevřené vazby (přímé komunikace / působení)
- **Přímá vazba:** $S_{ij}$ (přímé propojení prvku $A_i$ a prvku $A_j$).
- **Nepřímá (sériová) vazba:** $S_{ik}$ procházející přes zprostředkující prvek $A_j$ ($V_i \rightarrow A_i \xrightarrow{W_i = V_j} A_j \xrightarrow{W_j = V_k} A_k \rightarrow W_k$).
- **Paralelní vazby:**
  - **Rozvodná vazba ($P_{ijk}$):** Výstup z jednoho prvku $A_i$ se větví do více prvků ($A_j, A_k$).
  - **Svodná vazba ($P_{ijk}$):** Výstupy z více prvků ($A_i, A_j$) se sbíhají do jednoho vstupu prvku $A_k$.

### B. Uzavřené vazby (zpětná vazba)
- **Vlastní zpětná vazba ($Z_{jj}$):** Výstup z prvku $A_j$ se vrací jako korekční vstup do téhož prvku $A_j$.
- **Přímá zpětná vazba ($Z_{ji}$):** Výstup z následujícího prvku $A_j$ se vrací jako kontrolní/korekční vstup do předchozího prvku $A_i$.

### Způsoby zápisu struktury systému
1. **Blokové schéma:** Grafické znázornění pomocí bloků (prvků) a orientovaných šipek (vazeb).
2. **Matice vazeb:** Čtvercová tabulka prvků ($A, B, C, \dots$), kde hodnota `1` značí existenci orientované vazby z řádkového prvku do sloupcového prvku.

---

## 4. Systém a jeho Okolí (Princip Černé skříňky)

- **Okolí systému:** Množina prvků vně systému, které mají vazbu na systém (ovlivňují jej nebo jsou jím ovlivňovány).
  - **Užší okolí:** **Vždy podstatné** okolí, s nímž má systém přímé a klíčové vazby (dodavatelé, zákazníci, banky, státní orgány).
  - **Širší okolí:** Nepodstatné nebo nepřímé okolí.
- **Interakce s okolím:**
  - **Vstupy ($x$):** Akce okolí působící na systém.
  - **Výstupy ($y$):** Reakce systému působící na okolí.
  - **Kalendář:** Definované časové intervaly, v nichž akce a reakce probíhají.
  - **Repertoár:** Množina všech možných akcí a reakcí systému.
- **Standardní schéma nejvyššího stupně agregace – Černá skříňka (*Black Box*):**
  - Známe **vstupy** a známe **výstupy**, ale **neznáme (nebo zkoumatelsky zanedbáváme) vnitřní strukturu** systému.

---

## 5. Operace se systémy: Agregace vs. Integrace

Zkouškově velmi důležité rozlišení mezi operacemi **uvnitř** jednoho systému a operacemi **mezi** více systémy:

| Typ operace | Operace uvnitř systému (Slučování prvků) | Mezisystémové operace (Slučování systémů) |
| :--- | :--- | :--- |
| **Slučování / Spojování** | **AGREGACE**<br>*(Slučování prvků $A_1 + A_2 \rightarrow$ snižování rozlišovací úrovně)* | **INTEGRACE**<br>*(Spojování více systémů $S_1 + S_2 \rightarrow S_i$, např. fúze či akvizice firem)* |
| **Dělení / Rozklad** | **DESAGREGACE**<br>*(Dělení prvků na podprvky $\rightarrow$ zvyšování rozlišovací úrovně)* | **DESINTEGRACE / DIFERENCIACE**<br>*(Rozpad/dělení celých systémů na samostatné subjekty podle produkce/divizí)* |

---

## 6. Typologie systémů (Vymezení podniku pro zkoušku)

Zkouškový test velmi často vyžaduje přesné zařazení **PODNIKU** v jednotlivých kategoriích typologie systémů:

1. **Podle vztahu k objektům:**
   - *Abstraktní systémy:* Matematické, ekonomické a modelové konstrukce.
   - *Reálné systémy:* Fyzicky existující objekty $\rightarrow$ **PODNIK je reálný systém**.
2. **Podle vztahu k okolí:**
   - *Uzavřené systémy:* Bez vazeb na okolí (pouze laboratorní experimenty).
   - *Otevřené systémy:* Zcela neomezená výměna energie/informací.
   - *Relativně izolované systémy:* Výměna s okolím probíhá pouze přes definované vstupy a výstupy $\rightarrow$ **PODNIK je relativně izolovaný systém**.
3. **Podle podrobnosti zkoumání:**
   - *Absolutní systémy:* Zahrnují všechny detailní vlastnosti a prvky reálného objektu (nemožné v praxi popsat).
   - *Redukované systémy:* Vznikají selekcí podstatných prvků vzhledem k cíli $\rightarrow$ **PODNIK je redukovaný systém**.
4. **Podle faktoru času:**
   - *Prospektivní systémy:* Zkoumají budoucí stav (simulační a prognostické modely).
   - *Retrospektivní systémy:* Zkoumají minulý děj $\rightarrow$ **Účetnictví podniku**.
5. **Podle složitosti:**
   - *Jednoduché systémy:* Malý počet prvků a vazeb (termostat).
   - *Složité systémy:* Velký počet prvků a vazeb (počítač, mobil).
   - *Velmi složité systémy:* Počet prvků a vazeb nelze přesně podchytit $\rightarrow$ **PODNIK, trh, národní hospodářství**.
6. **Podle typu chování:**
   - *Deterministické systémy:* Reakce $y$ je jednoznačně určena podnětem $x$ ($y = f(x)$), např. automatizovaná technologická linka.
   - *Stochastické systémy:* Reakce na podnět nelze určit jednoznačně, ale pouze s určitou pravděpodobností ($p_1 = 0{,}8, p_2 = 0{,}2$) $\rightarrow$ **PODNIK je stochastický systém**.
7. **Podle vztahu ke změnám:**
   - *Neadaptivní systémy:* Neschopné přizpůsobení (hrozí zánik).
   - *Adaptivní systémy:* Reagují na změny vnitřního stavu i okolí tak, aby zachovaly svou existenci $\rightarrow$ **PODNIK je adaptivní systém**.
8. **Podle vztahu chování k tvorbě cílů:**
   - *Bez cílového chování:* Nemají stanovený účel.
   - *S cílovým chováním:* Směřují svou trajektorii k dosažení požadovaného cílového stavu $\rightarrow$ **PODNIK je systém s cílovým chováním**.

### Kombinovaná tabulka složitosti a typu chování
| Chování / Složitost | Jednoduché (malý počet prvků) | Složité (velký počet prvků) | Velmi složité (přesný popis nemožný) |
| :--- | :--- | :--- | :--- |
| **Deterministické** | **Termostat** | **Počítač** | *(V praxi neexistuje)* |
| **Stochastické** | **Házení mincí** | **Zásobování podniku** | **PODNIK / Národní hospodářství** |

---

## 7. Organizační systém (OS) podniku

Organizační systém podniku je definován pomocí 3 dimenzí prvků, vazeb a rozlišovací úrovně:

$$\text{OS} = [\text{Prvky: } HP, SP, L], [\text{Vazby: } HE, SV, I] \xrightarrow{\text{Rozlišovací úroveň}}$$

### A. Prvky Organizačního systému (1. rozměr)
1. **Hmotné prvky ($HP$):** Stroje, budovy, materiál, technické vybavení.
2. **Lidé ($L$):** Zaměstnanci, manažeři, lidský faktor.
3. **Smíšené prvky ($SP$):** Propojení hmotných prvků a lidí ($HP + L$), např. obsluhovaná pracoviště.

### B. Vazby Organizačního systému (2. rozměr)
1. **Hmotně-energetické vazby ($HE$):** Tok materiálu, surovin, polotovarů, energie (*otázka "CO"*).
2. **Informační vazby ($I$):** Tok řídících příkazů, zpráv, dat, rozhodnutí (*otázka "JAK"*).
3. **Smíšené vazby ($SV$):** Kombinace hmotně-energetických a informačních toků ($HE + I$).

### C. Rozlišovací úroveň OS (3. rozměr)
- **1. rozlišovací úroveň:** Celý Organizační systém (Podnik jako celistvý blok).
- **2. rozlišovací úroveň:** **Subsystémy 1. řádu** (9 základních bloků matice 3×3).
- **3. rozlišovací úroveň:** Subsystémy 2. řádu (podnikové úseky, závody).
- **4. rozlišovací úroveň:** Subsystémy 3. řádu (dílny, oddělení).
- **5. rozlišovací úroveň:** Konkrétní prvky OS (jednotlivá pracoviště, pracovníci).

---

## 8. Matice 3×3 subsystémů 1. řádu (Struktura OS)

Konstrukce matice 3×3 vzniká křížením prvků ($HP, SP, L$) a vazeb ($HE, SV, I$):

| Prvky \ Vazby | **HE** *(Hmotně-energetické)* | **SV** *(Smíšené)* | **I** *(Informační)* |
| :---: | :---: | :---: | :---: |
| **L** *(Lidé)* | **PS2** *(Pracovní sub. / realizace)* | **MOS** *(Marketingově-obchodní sub.)* | **ŘSS** *(Řídící subsystém)* |
| **SP** *(Smíšené)* | **EES** *(Ekologicko-ergonomický sub.)* | **OSS** *(Organizační subsystém)* | **EIS** *(Ekonomicko-informační sub.)* |
| **HP** *(Hmotné)* | **PS1** *(Produkční subsystém)* | **TS1** *(Technologický subsystém)* | **TS2** *(Technický subsystém)* |

### Rozdělení na hlavní a podpůrné subsystémy

1. **Hlavní diagonála (Hlavní subsystémy 1. řádu):**
   - Tvoří páteř podniku, zajišťují hlavní transformaci vstupů na výstupy:
     - **PS1 (Produkční subsystém):** $HP \times HE$ – fyzická výroba a hmotná produkce.
     - **OSS (Organizační subsystém):** $SP \times SV$ – uspořádání struktury, procesů a vazeb.
     - **ŘSS (Řídící subsystém):** $L \times I$ – vrhání cílů, rozhodování, řídící působení.
2. **Nad hlavní diagonálou (Podpůrné subsystémy s převahou Lidí - $L$):**
   - **MOS (Marketingově-obchodní subsystém):** $L \times SV$ – prodej, výzkum trhu, strategie.
   - **EES (Ekologicko-ergonomický subsystém):** $SP \times HE$ – pracovní prostředí, ekologie.
   - **PS2 (Pracovní subsystém 2 / vzdálený):** $L \times HE$ – fyzický výkon práce lidí.
3. **Pod hlavní diagonálou (Podpůrné subsystémy s převahou Hmotných prvků - $HP$):**
   - **EIS (Ekonomicko-informační subsystém):** $SP \times I$ – účetnictví, kontroling, výkaznictví.
   - **TS1 (Technologický subsystém):** $HP \times SV$ – technologické postupy, receptury.
   - **TS2 (Technický subsystém / vzdálený):** $HP \times I$ – technická správa, nákup a údržba strojů.

---

## 9. Oblasti a Procesy v Organizačním systému

Křížením řádků a sloupců matice definujeme **3 věcné oblasti** a **3 typy procesů**:

### A. Věcné oblasti podniku (Řádky matice)
1. **Obchodně-řídící oblast (Řádek L):** Zahrnuje subsystémy **PS2, MOS, ŘSS**. Zaměřuje se na strategii, obchod a vedení lidí.
2. **Organizačně-ekonomická oblast (Řádek SP):** Zahrnuje subsystémy **EES, OSS, EIS**. Zajišťuje celkovou organizaci, ekonomické vyhodnocení a ergonomii.
3. **Produkčně-technická oblast (Řádek HP):** Zahrnuje subsystémy **PS1, TS1, TS2**. Zajišťuje reálnou výrobu, technologie a technické vybavení.

### B. Typy procesů v podniku (Sloupce matice)
1. **Realizační procesy (Sloupec HE):** Subsystémy **PS2, EES, PS1** – *Proces produkčního řízení* (přímá transformace hmoty a energie).
2. **Organizační procesy (Sloupec SV):** Subsystémy **MOS, OSS, TS1** – *Proces nepřímého řízení* (vytváření podmínek a struktur).
3. **Informační a rozhodovací procesy (Sloupec I):** Subsystémy **ŘSS, EIS, TS2** – *Proces přímého řízení* (zpracování dat, plánování, rozhodování).

---

## 10. Vlastnosti efektivního Organizačního systému

Zkouškový okruh – 6 základních vlastností určujících správné fungování podniku:

### 10.1 Nezastupitelnost subsystémů
- Všechny subsystémy 1. řádu jsou k plnění stanovených cílů **stejně důležité**. Žádný subsystém nemůže plně nahradit jiný, protože každý má jiné prvky nebo jiné vazby.
  - *Oblasti* (řádky) mají stejné prvky, ale jiné vazby.
  - *Procesy* (sloupce) mají stejné vazby, ale jiné prvky.

### 10.2 Vzájemná podmíněnost
- Výsledné chování celého organizačního systému je závislé na fungování všech jeho subsystémů. Podmíněnost je dána dynamikou na hlavní diagonále ($PS1 \rightarrow OSS \rightarrow ŘSS$) a dynamikou jednotlivých oblastí.

### 10.3 Proporcionální rozvoj a Dynamická rovnováha
- Správné fungování OS vyžaduje **proporcionální vyváženost** všech subsystémů.
- **Varování:** Posílení investic pouze do jednoho subsystému (pokud to není ten nejslabší – **limitní subsystém**) nevede ke zlepšení fungování celého podniku.
- Cílem manažera je identifikovat a posilovat výhradně limitní subsystém k dosažení **dynamické rovnováhy**.

### 10.4 Rozdílná stabilita vs. Hierarchie
Mezi subsystémy na hlavní diagonále platí nepřímá úměra mezi jejich stabilitou a jejich hierarchickým postavením:

```
[ŘSS] (Nejvyšší hierarchie)  --> Nízká stabilita | Min. investice | Rychlá reakce na změny
  ^
  |
[OSS] (Střední hierarchie)   --> Střední stabilita | Střední investice | Střední reakce
  ^
  |
[PS1] (Nejnižší hierarchie)  --> Vysoká stabilita | Vysoké investice | Pomalá reakce na změny
```

- **Řídící subsystém (ŘSS):** Je v poloze *subjektu řízení* vůči všem ostatním subsystémům (*objektům řízení*):
  - Pro **PS1:** ŘSS vydává zadání přípravy produkce $\leftrightarrow$ kontrola produkce a požadavky produkce.
  - Pro **TS1:** ŘSS zadává přípravu technologického postupu $\leftrightarrow$ kontrola technologie.
  - Pro **TS2:** ŘSS zadává nákup/instalaci hmotných prvků $\leftrightarrow$ kontrola fungování.
  - Pro **OSS:** ŘSS dává příkaz k provedení organizačních změn $\leftrightarrow$ kontrola plnění příkazů.
  - Pro **MOS:** ŘSS zadává obchodní a marketingovou strategii $\leftrightarrow$ kontrola obchodních případů.
  - Pro **EIS:** ŘSS definuje požadavky na strukturu informací $\leftrightarrow$ kontrola výkazů.
  - Pro **EES:** ŘSS schvaluje ekologicko-ergonomická opatření $\leftrightarrow$ kontrola dodržování.
  - Pro **PS2:** ŘSS zadává pracovní úkoly při fyzické spolupráci $\leftrightarrow$ kontrola plnění.

### 10.5 Kompetence a jejich matematický výpočet

- **Kompetence ($K$):** Schopnost nebo předpoklad subsystému zvládnout určitou funkci, úkol a očekávané chování. Měří se poměrným číslem v intervalu $\langle 0; 1 \rangle$.
- **Celková kompetence systému ($K_{cs}$):**
  - Správně nastavený systém: $$K_{cs} = 1{,}000$$
  - Pokud $K_{cs} < 1$: V systému existují **hluchá místa** (nikdo nemá pravomoc/odpovědnost za určitou činnost).
  - Pokud $K_{cs} > 1$: Dochází k **překrývání kompetencí** (více subsystémů dělá totéž, vznikají kompetenční spory).

#### Vzorec pro výpočet kompetence konkrétního subsystému ($K_{i,j}$):
$$K_{i,j} = PR_i \times SP_j$$
Kde:
- $PR_i$ = **Pravomoc** pro $i$-tý hierarchický stupeň:
  $$PR_i = \frac{1}{\text{počet hierarchických úrovní}}$$
- $SP_j$ = **Sféra působnosti** pro subsystémy na stejné úrovni:
  $$SP_j = \frac{1}{\text{počet subsystémů na dané úrovni}}$$

#### Rozdělení celkové kompetence ($K_{cs} = 1{,}000$) podle pozice v matici:
1. **Subsystémy na hlavní diagonále (PS1, OSS, ŘSS):** Mají nejvyšší kompetenci $\mathbf{0{,}466}$ ($46{,}6\,\%$ celkové kompetence).
2. **Blízké podpůrné subsystémy (MOS, EIS, TS1, EES):** Mají kompetenci $\mathbf{0{,}400}$ ($20\,\%$ nad a $20\,\%$ pod diagonálou).
3. **Vzdálené podpůrné subsystémy (PS2, TS2):** Mají nejnižší kompetenci $\mathbf{0{,}134}$ ($6{,}7\,\%$ pro PS2 a $6{,}7\,\%$ pro TS2).

### 10.6 Disjunktivní a Konjunktivní vztahy

- **Disjunktivní vztah (Logický součet $\cup$ / $+$):**
  - Subsystémy **nemají společné prvky ani vazby** (např. *Produkční subsystém PS1* a *Řídící subsystém ŘSS*).
  - Procesy probíhají **postupně po sobě** a jejich důsledky/efekty se **sčítají**.
- **Konjunktivní vztah (Logický součin $\cap$ / $\times$):**
  - Subsystémy **mají společné prvky nebo vazby** (např. *Marketingově-obchodní subsystém MOS* a *Řídící subsystém ŘSS*).
  - Procesy probíhají **současně (paralelně)** a jejich důsledky/efekty se **násobí** (chyba v jednom subsystému vynásobí a znehodnotí výsledek druhého).

---

## 🎯 Shrnutí a tahák ke zkoušce (Klíčové pojmy a schémata)

1. **Definice podniku z hlediska teorie systémů:**
   - Podnik je **reálný, relativně izolovaný, redukovaný, velmi složitý, stochastický, adaptivní systém s cílovým chováním**.
2. **Vzorec systému:** $S = \{A, R\}$, počet vazeb v intervalu $n-1$ až $n^2$.
3. **Rozdíl Agregace vs. Integrace:**
   - Agregace = slučování prvků UVNITŘ jednoho systému.
   - Integrace = slučování celých SYSTÉMŮ (fúze firem).
4. **Rozměry Organizačního systému:**
   - 1. rozměr (prvky): $HP, SP, L$
   - 2. rozměr (vazby): $HE, SV, I$
   - 3. rozměr (rozlišovací úroveň): Od podniku (1. úroveň) po jednotlivý prvek (5. úroveň).
5. **Matice 3×3 subsystémů 1. řádu:**
   - *Hlavní diagonála:* PS1 ($HP \cdot HE$), OSS ($SP \cdot SV$), ŘSS ($L \cdot I$).
   - *Nad diagonálou (převaha L):* PS2, MOS, EES.
   - *Pod diagonálou (převaha HP):* EIS, TS1, TS2.
6. **Vztah Stabilita vs. Hierarchie:**
   - ŘSS = nejvyšší hierarchie, nejnižší stabilita, rychlá reakce, malé investice.
   - PS1 = nejnižší hierarchie, nejvyšší stabilita, pomalá reakce, velké investice.
7. **Kompetence:** $K_{i,j} = PR_i \times SP_j$. Správný systém má $K_{cs} = 1{,}000$.
