#include <stdio.h>
#include <math.h> // Necessario per la funzione fabs() usata nell'ultimo controllo

// Aggiungere dopo ogni scanf il codice occorrente per stampare il risultato della condizione
int main() {
    int n;
    double x;
    const double EPSILON = 1e-6; // Costante per il confronto tra double

    // 1. int uguale a 10
    printf("int uguale a 10: ");
    scanf("%d", &n);

    // 2. int diverso da 10
    printf("int diverso da 10: ");
    scanf("%d", &n);

    // 3. int diverso da 10 e da 20
    printf("int diverso da 10 e da 20: ");
    scanf("%d", &n);

    // 4. int diverso da 10 o da 20
    printf("int diverso da 10 o da 20: ");
    scanf("%d", &n);

    // 5. int maggiore o uguale a 10
    printf("int maggiore o uguale a 10: ");
    scanf("%d", &n);

    // 6. int compreso tra 10 e 20, nell'intervallo [10,20]
    printf("int compreso tra 10 e 20, nell'intervallo [10,20]: ");
    scanf("%d", &n);

    // 7. int compreso tra 10 e 20, nell'intervallo (10,20)
    printf("int compreso tra 10 e 20, nell'intervallo (10,20): ");
    scanf("%d", &n);

    // 8. int compreso tra 10 e 20, nell'intervallo [10,20)
    printf("int compreso tra 10 e 20, nell'intervallo [10,20): ");
    scanf("%d", &n);

    // 9. int esterno all'intervallo [10,20]
    printf("int esterno all'intervallo [10,20]: ");
    scanf("%d", &n);

    // 10. int tra 10 e 20 ([10,20]) o tra 30 e 40 ([30,40])
    printf("int tra 10 e 20 (nell'intervallo [10,20]) o tra 30 e 40 ([30,40]): ");
    scanf("%d", &n);

    // 11. int multiplo di 4 ma non di 100
    printf("int multiplo di 4 ma non di 100: ");
    scanf("%d", &n);

    // 12. int dispari e compreso tra 0 e 100 ([0,100])
    printf("int dispari e compreso tra 0 e 100 ([0,100]): ");
    scanf("%d", &n);

    // 13. float64 vicino a 10.0 (non più lontano di 10^-6)
    printf("double vicino a 10.0 (non piu' lontano di 10^-6): ");
    scanf("%lf", &x); // %lf è il specificatore di formato per i double in scanf

    return 0; // Indica che il programma è terminato correttamente
}
