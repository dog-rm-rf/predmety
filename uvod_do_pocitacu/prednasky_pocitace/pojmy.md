
Binární semafor ($S \in \{0, 1\}$): Spravuje 1 klíč. Dovnitř smí jen 1 vlákno, a pokud přijdou další 4 vlákna, všech 4 se zařadí do fronty u tohoto binárního semaforu a čekají, až ten jeden jediný klíč zase uvolní.

Počítaný semafor ($S \in \{0, 1, \dots, N\}$): Spravuje $N$ stejných klíčů (např. 6 slotů na obrázku). Prvních 6 vláken projde hned bez čekání (hodnota $S$ klesne z 6 na 0), a teprve 7. a další vlákna se zařadí do fronty.

wait(S);    // 1. zaklepu / zamknu (nebo usnu ve frontě)
x++;        // 2. KRITICKÁ OBLAST (tady jsem zaručeně sám)
signal(S);  // 3. odemknu / vzbudím dalšího ve frontě

Číslování zdrojů

Algoritmus bankéře

