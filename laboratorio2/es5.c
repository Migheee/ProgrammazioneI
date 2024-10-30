/*Scrivere in linguaggio C un programma per calcolare il numero di
bottigliette d’acqua che si possono comprare alla macchinetta. Il
programma, dopo aver chiesto all’utente i soldi a disposizione, stampa a
video il numero di bottigliette che possono essere acquistate e il resto da
ricevere dopo l’acquisto. Il prezzo di ciascuna bottiglietta è di 40
centesimi. Si supponga che la cifra a disposizione sia positiva e che la
macchinetta abbia in giacenza un numero illimitato di bottigliette. Per
erogare il resto, la macchinetta utilizza pezzi da 20, 10, 5 e 1 centesimi:
il programma dovrà calcolare il numero di monete di resto di ciascun
taglio, prediligendo l’utilizzo di monete di taglio maggiore (ad esempio,
se il resto è di 0.37 €, il programma dovrà restituire: 1*20 cent, 1*10
cent, 1*5 cent, 2*1 cent).*/

#include <stdio.h>
#define prezzo_bottiglia 40 //costante, non c'è bisogno di indicare il tipo di dato
int main() {
    float soldi;
    int soldi_disponibili, numero_bottiglie;
    int resto, monete_da_20, monete_da_10, monete_da_5, monete_da_1;
  
    printf("Inserisci i soldi a disposizione (in euro): ");
    scanf("%f", &soldi);

    soldi_disponibili = soldi*100;
    // Calcolo del numero di bottiglie acquistabili
    numero_bottiglie = soldi_disponibili / prezzo_bottiglia;

    // Calcolo del resto da restituire
    resto = soldi_disponibili % prezzo_bottiglia;

    // Calcolo delle monete da restituire
    monete_da_20 = resto / 20;
    resto = resto % 20;

    monete_da_10 = resto / 10;
    resto = resto % 10;

    monete_da_5 = resto / 5;
    resto = resto % 5;

    monete_da_1 = resto;

    printf("Numero di bottiglie acquistate: %d\n", numero_bottiglie);
    printf("Resto da ricevere: ");
    printf("%d*20 cent ", monete_da_20);
    printf("%d*10 cent ", monete_da_10);
    printf("%d*5 cent ", monete_da_5);
    printf("%d*1 cent", monete_da_1);
    printf("\n");

    return 0;
}


