# Laboratori - Presentazione veloce

Questo repository contiene gli appunti e gli esercizi dei laboratori di programmazione in C. Qui trovi una panoramica sintetica e link diretti ai due file principali della cartella `laboratori`:

- [02 - operatori di confronto e logici, selezione (if)](02.md)
- [03 - for](03.md)
- [04 - char, stringhe, cicli annidati](04.md)

Scopo di questo README: presentare brevemente il contenuto di `02.md` e `03.md`, spiegare come usare gli esercizi e fornire suggerimenti rapidi per compilare, testare e modificare i sorgenti.

---

## Sommario rapido dei file principali

### 02 - operatori di confronto e logici, selezione (if) (`02.md`)
Contenuto essenziale:
- Introduzione a operatori di confronto (`==`, `!=`, `<`, `>`, `<=`, `>=`) e operatori logici (`!`, `&&`, `||`).
- Esercizi di analisi del codice e numerosi esercizi di scrittura in C (da `condizioni0.c`, `condizioni1.c`, fino a `tasse.c`).
- Esempi guidati: `if` a una via, a due vie, a più vie, `if` annidati, azioni indipendenti.
- Problemi complessi (data valida, quadrante, sovrapposizione, rettangolo).
- Nota: eventuali riferimenti che invitavano a "caricare su upload" sono stati rimossi o sostituiti con indicazioni di consegna generiche.

Per leggere: apri `02.md` e segui gli esercizi nell'ordine proposto; molti esercizi contengono il nome consigliato del file (`nomefile: ...`) e esempi di esecuzione.

### 03 - for (`03.md`)
Contenuto essenziale:
- Introduzione e utilizzo del ciclo `for` (vari schemi: tre-clausole, con step variabili, condizione espressa).
- Uso del `while` e dei cicli infiniti (con esempi).
- Molti esercizi pratici per imparare a progettare loop che calcolano risultati, ripetono operazioni e compongono sottoproblemi.
- Esempi pratici: generazione di numeri casuali (`random.c`), calcoli con loop annidati, problemi classici (Euclide, massimo, somma cifre, conversioni).
- Anche qui le istruzioni di consegna online sono state neutralizzate; i sorgenti sono pensati per essere compilati e testati localmente.

### 04 - char, stringhe, cicli annidati (`04.md`)
Contenuto essenziale:
- Manipolazione di `char` e stringhe in C, uso di funzioni da `<ctype.h>` e lettura robusta di caratteri (`scanf(" %c", &c)`).
- Esercizi su analisi e trasformazione di stringhe, cifrari semplici (es. Cesare), conteggi e cicli annidati.
- Esempi e file consigliati: `stringaChar.c`, `cesare.c`, `max_somma_cifre.c`, `num_sequenze.c`.
- Scopo: imparare a gestire sequenze di caratteri, combinare operazioni su stringhe e progettare cicli annidati efficaci per problemi reali.

---

## Come usare gli esercizi (sintetico)

1. Scegli l'esercizio e crea il file C con il nome suggerito (es. `esercizio.c` o il `nomefile` indicato nel testo).
2. Scrivi/aggiungi le specifiche come commento all'inizio (molti esercizi lo richiedono).
3. Compila con `gcc`:
```laboratori/README.md#L1-5
gcc -Wall -o programma sorgente.c
```
4. Testa l'esecuzione e confronta l'output con file di riferimento usando reindirizzamento:
```laboratori/README.md#L6-10
./programma < input.txt > mio_output.txt
diff mio_output.txt output_atteso.txt
```
Se `diff` non produce output, l'output è identico a quello atteso.

---

## Suggerimenti rapidi

- Usa costanti (`#define` o `const`) al posto di numeri magici.
- Quando il modello d'input non richiede prompt, non stamparli: rendi il programma adatto al test automatico (input da file).
- Per confronti con numeri in virgola mobile, definisci una costante `EPSILON` (es. `1e-6`) e confronta con tolleranza.
- Per leggere caratteri singoli in modo robusto: `scanf(" %c", &c);` (nota lo spazio prima di `%c`).
- Organizza il lavoro in piccoli passi: progettazione (commenti), implementazione, compilazione, test.

---

## Ricerca nel repository

Per trovare rapidamente esercizi o simboli:
- Cerca per nome file (es. `condizioni1.c`, `random.c`) o per parola chiave (`bisestile`, `for`, `if`).
- Se lavori da terminale, comandi utili:
```laboratori/README.md#L11-14
# esempio: cercare la parola 'bisestile' nei file della cartella current
grep -n \"bisestile\" *.md *.c
```
