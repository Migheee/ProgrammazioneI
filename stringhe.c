/*
Stringa: array di caratteri con terminatore '\0'
char nome[30+1]; // NB: il +1 serve per il terminatore

Esempio:
char nome[30];
carattere:   a  n  n  a  \0
posizione:   0  1  2  3   4

Si distinguono stringhe e array di char dal terminatore.

Per leggere le stringhe da tastiera:
    scanf("%s", nome);
// Al primo spazio o andata a capo, lo spazio/andata a capo viene sostituito con '\0'.

Per stampare:
    printf("%s", nome);

Per inizializzare, in fase di dichiarazione:
    char nome[30+1] = "anna";

Qual è la differenza tra 'a' e "a"?
La prima è un carattere, mentre la seconda è una stringa.
    'a'  ---> ['a']
    "a" ---> ['a', '\0']
*/

#include <stdio.h>
#include <string.h>

#define N 30

int main() {
    char stringa[N+1];
    char c;
    
    // Leggere una stringa da input
    scanf("%s", stringa);

    // Contare la lunghezza di una stringa
    int length;
    for (length = 0; stringa[length] != '\0'; length++);
    printf("Lunghezza: %d\n", length);

    // Esiste la gets(s) dove solo l'invio termina la stringa
    // NOTA: su gcc la gets dà warning
    gets(stringa);
    
    // Leggere una stringa con spazi
    int i = 0;
    scanf(" %c", &c); // spazio prima di %c per ignorare spazi residui
    while (c != '\n' && i < N) {
        stringa[i] = c;
        i++;
        scanf("%c", &c);
    }
    stringa[i] = '\0';
    
    // Stampare la stringa invertita
    char stringa2[N+1], stringa3[N+1];
    int n;
    scanf("%s", stringa2);
    for (i = 0; stringa2[i] != '\0'; i++);
    n = i;
    for (i = 0; i < n; i++) {
        stringa3[n - i - 1] = stringa2[i];
    }
    stringa3[n] = '\0';
    printf("%s %s\n", stringa2, stringa3);

    // Rimuovere le vocali da una stringa
    char stringa4[N+1], stringa5[N+1];
    scanf("%s", stringa4);
    int a = 0;
    for (i = 0; stringa4[i] != '\0'; i++) {
        if (stringa4[i] != 'a' && stringa4[i] != 'e' && stringa4[i] != 'i' && 
            stringa4[i] != 'o' && stringa4[i] != 'u') {
            stringa5[a] = stringa4[i];
            a++;
        }
    }
    stringa5[a] = '\0';
    printf("Stringa senza vocali: %s\n", stringa5);
    
    return 0;
}
