#include <stdio.h>
#include <string.h>

#define N 10

int main() {
    char s1[N + 1];  // Parola segreta
    char s2[N + 1];  // Parola nascosta
    int tentativi = 10;
    int indovinato = 0;
    int lettere_indovinate = 0;
    char c;

    // Inserimento parola segreta
    printf("Giocatore 1, inserisci la parola segreta (max %d caratteri): ", N);
    scanf("%s", s1);

    int len = strlen(s1);
    for (int i = 0; i < len; i++) {
        s2[i] = '*';
    }
    s2[len] = '\0'; 


    printf("Giocatore 2, inizia il gioco!\n");

    
    while (tentativi > 0 && !indovinato) {
        printf("\nParola attuale: %s\n", s2);
        printf("Tentativi rimanenti: %d\n", tentativi);
        printf("Inserisci una lettera: ");
        scanf(" %c", &c);
        int trovata = 0;
        for (int i = 0; i < len; i++) {
            if (s1[i] == c && s2[i] == '*') {  
                s2[i] = c;
                trovata = 1;
                lettere_indovinate++;
            }
        }
        if (!trovata) {
            tentativi--;
            printf("Lettera errata!\n");
        } else {
            printf("Lettera trovata!\n");
        }
        if (lettere_indovinate == len) {
            indovinato = 1;
        }
    }
    if (indovinato) {
        printf("\nComplimenti! Hai indovinato la parola: %s\n", s1);
    } else {
        printf("\nHai esaurito i tentativi! La parola era: %s\n", s1);
    }
    return 0;
}
