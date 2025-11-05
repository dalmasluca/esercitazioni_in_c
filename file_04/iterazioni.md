Certamente, ecco il file tradotto in C, con gli schemi di codice adattati per la sintassi e le librerie standard del C.

---

# Problemi e schemi per l’iterazione

## Problemi di base ricorrenti
- ripetizione
- calcolo di un totale (somma, prodotto, ecc.)
- conteggio
- calcolo del min/max
- ricerca di un valore
- elaborazione su elementi adiacenti

## Schemi di soluzione

**Nota**: in ciascuno dei seguenti esempi si è considerato il caso in cui è noto a priori il numero di valori da considerare, e quindi si è usato un ciclo `for` con un contatore. Se tale numero non è noto, si dovrà usare un ciclo `while` o un ciclo `for(;;)` con una condizione di uscita (`break`), invece di un `for` con contatore.

### Calcolo di un totale su una serie di valori
```c
#include <stdio.h>

// F1: calcolo di un totale di K valori
int main() {
    const int K = 5; // Numero di valori da leggere
    int num;
    int sum = 0;   // Variabile in cui accumulare il totale, inizializzata prima del for

    for (int i = 0; i < K; i++) {
        scanf("%d", &num);   // Qui considero il valore successivo nella serie
        sum = sum + num;     // Qui accumulo il totale
    }

    printf("%d\n", sum); // Stampo il risultato finale una volta fuori dal for
    return 0;
}```

### Identificazione del min/max in una serie di valori

```c
#include <stdio.h>

// F2: identificazione del min/max
int main() {
    const int K = 5;
    int n;

    // Leggo il primo valore per inizializzare max
    scanf("%d", &n);
    int max = n; // Variabile in cui salvare il min/max, inizializzata prima del for
                 // al primo valore della serie

    for (int i = 1; i < K; i++) {
        scanf("%d", &n); // Qui considero il valore successivo nella serie
        if (n > max) {   // È "migliore"?
            max = n;     // Se sì, qui aggiorno
        }
    }

    printf("%d\n", max); // Fuori dal for stampo il risultato finale
    return 0;
}
```
### Ricerca lineare, cioè identificazione della prima occorrenza di un dato valore (e/o della sua posizione) in una serie
```c
#include <stdio.h>

// F3: ricerca lineare di un dato valore (e/o della sua posizione) nella serie
int main() {
    const int K = 5;
    int value;
    int lookedFor = 42; // Valore da cercare

    int position = -1; // Variabile in cui salvare la posizione del valore,
                       // inizializzata prima del for a -1, che indica "non trovato"

    for (int i = 0; i < K; i++) {
        scanf("%d", &value); // Qui considero il valore successivo nella serie
        if (value == lookedFor) {
            position = i;   // Se trovato, salvo la posizione
            break;          // e non occorre andare avanti nel for
        }
    }

    printf("%d\n", position); // Fuori dal for stampo il risultato finale
    return 0;
}
```

### Elaborazione su valori adiacenti di una serie
```c
#include <stdio.h>

// F4: elaborazione su valori adiacenti di una serie
int main() {
    const int K = 5;
    int previous, current; // Variabili per il valore precedente e quello corrente

    scanf("%d", &current); // Leggo il primo valore per inizializzare 'current'

    for (int i = 1; i < K; i++) {
        previous = current;   // Il 'current' precedente diventa 'previous'
        scanf("%d", &current); // Qui aggiorno 'current' con il nuovo valore

        int diff = current - previous; // Elaborazione sui due valori
        printf("%d\n", diff); // In questo caso stampo a ogni iterazione il risultato
    }
    return 0;
}
```

### Conteggio dei valori di una serie (event. con una data caratteristica)
```c
#include <stdio.h>

// F5: conteggio
int main() {
    const int K = 5;
    int num;
    int count = 0;   // Variabile per contare, inizializzata prima del for a 0

    for (int i = 0; i < K; i++) {
        scanf("%d", &num); // Qui considero il valore successivo nella serie
        if (num % 3 == 0) { // Qui ho una caratteristica da verificare
            count++;        // Qui conto
        }
    }

    printf("%d\n", count); // Fuori dal for stampo il risultato finale
    return 0;
}
```

### Ripetizione di un'azione o sequenza di azioni
```c
#include <stdio.h>

// F6: ripetizione
int main() {
    const int K = 5;
    for (int i = 0; i < K; i++) {
        printf("*\n");  // Qui ripeto l'azione
    }
    return 0;
}
```
