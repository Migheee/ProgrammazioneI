#include <stdio.h>

int main() {
    int n1, n2, prod = 1;
    
    printf("Inserisci due numeri: ");
    scanf("%d %d", &n1, &n2);

    // Salva i valori originali
    int n1_originale = n1;
    int n2_originale = n2;
    int somma = n1 + n2;

    // Calcola il prodotto delle cifre di n1
    while (n1 > 0) {
        prod = prod * (n1 % 10);
        n1 = n1 / 10;
    }

    // Calcola il prodotto delle cifre di n2
    while (n2 > 0) {
        prod = prod * (n2 % 10);
        n2 = n2 / 10;
    }

    // Stampa il risultato
    printf("Prodotto delle cifre: %d\n", prod);
    printf("%s\n", n1_originale != n2_originale && prod == somma ? "aff" : "non aff");

    return 0;
}

