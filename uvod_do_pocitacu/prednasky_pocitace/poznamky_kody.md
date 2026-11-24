Hammingova vzdálenost
Minimální vzdálenost
Rozdělení binárních kódů:
	kód dmin >= 1
	zabezpečující kód   dmin >=2, lze detekovat dmin-1 chyb
    samoopravnýkód dmin >= 3 Samoopravný kód ($d_{\min} \ge 3$) je zároveň i zabezpečujícím kódem – můžeš ho buď použít čistě k detekci až $d_{\min} - 1$ chyb, anebo k opravě až $(d_{\min} - 1)\text{ div }2$ chyb. 

Konstrukce zabezpečujícího kódu
    Přidáme lichou nebo soudou paritu
    Kódy dmin 1 se rozšíří o paritní bit


Konstrukce samoopravného kódu
    Navrhnout samoopravny kod delky napriklad 5
    Důležité pro kolik kódových slov například, když chceme 3 tak nam bude stacit kdyz m bude 2 protoze 2 na m je pocet kombinaci ktere muzeme vytvorit 
    
# Konstrukce samoopravného kódu

**Cíl:** Navrhnout samoopravný kód ($d_{\min} \ge 3$) o zadané délce slova (například **5 bitů**) pro určitý počet objektů (například **3 objekty**: $X, Y, Z$).

## 1. Rozdělení bitů (datové vs. paritní)
* Celková délka slova je součet datových ($m$) a paritních ($k$) bitů: 
  $$m + k = 5$$
* **Počet datových bitů ($m$):** Musí být tak velký, aby se nám do něj vešly všechny objekty. Platí vzorec $2^m \ge \text{počet objektů}$.
  * *Příklad pro 3 objekty:* Stačí nám **$m = 2$**, protože $2^2 = 4$ kombinace (a to pro 3 objekty stačí).
* **Počet paritních bitů ($k$):** Zbytek délky slova do 5 bitů doplní paritní bity $\rightarrow$ **$k = 3$**.

## 2. Ověření Hammingovy podmínky (zda se slova do prostoru vejdou)
* Aby se kolem platných slov vytvořily dostatečné „ochranné bubliny“ a kód dokázal opravit 1 chybu, musí platit Hammingova nerovnice: 
  $$m + k + 1 \le 2^k$$
* *Dosazení našeho příkladu:* $2 + 3 + 1 \le 2^3 \implies 6 \le 8$ (platí, model funguje).
* *(Pokud by nerovnice neplatila, musíme přidat více paritních bitů $k$.)*

## 3. Sestavení samotných kódových slov
* Vytvoříme potřebný počet **různých** binárních slov zadané délky (pro $X, Y, Z$ tři 5bitová slova).
* **Hlavní pravidlo:** Každá dvojice slov se od sebe musí lišit **minimálně ve 3 bitech** ($d_{\min} \ge 3$). Může to být i více (např. 4 nebo 5 bitů), nesmí to ale klesnout pod 3.
* **Praktický postup přes paritní bity (sudá parita):**
  * Slovo složíme jako $(d_1, d_2, p_1, p_2, p_3)$.
  * Každý paritní bit hlídá jinou skupinu datových bitů a doplňuje počet jedniček ve své skupině na sudý:
    * $p_1$ hlídá $d_1$
    * $p_2$ hlídá $d_2$
    * $p_3$ hlídá $d_1$ i $d_2$ dohromady

### Příklad výsledné tabulky pro 3 objekty
| Objekt | Data ($d_1, d_2$) | Výsledné 5bitové slovo $(d_1, d_2, p_1, p_2, p_3)$ |
| :--- | :---: | :---: |
| **$X$** | `00` | **`00000`** |
| **$Y$** | `01` | **`01011`** |
| **$Z$** | `10` | **`10101`** |

*(Kontrola vzdáleností: mezi $X$ a $Y$ je vzdálenost 3, mezi $X$ a $Z$ je 3, mezi $Y$ a $Z$ je 4 $\rightarrow$ $d_{\min} = 3$, kód je samoopravný.)*

## 4. Jak probíhá oprava chyby u příjemce
* Příjemce zkontroluje sudost jedniček v jednotlivých paritních skupinách.
* Pokud chybu hlásí jen jeden paritní bit, pokazil se samotný paritní bit (data jsou v pořádku).
* Pokud chybu hlásí kombinace paritních bitů (např. $p_2$ a $p_3$ zároveň), ukážou tím přesně na konkrétní poškozený datový bit ($d_2$), který řadič automaticky otočí zpět.



