/*
Stringa: array di caratteri con terminatore ossia '\0'
char nome[30+1] NB il + 1 serve per il terminatore
Esempio
char nome[30]
carattere:  a n n a \0
posizione:  0 1 2 3 4

Si distinguono stringhe e array di char dal terminatore

Per leggere le stringhe da tastiera 
scanf("%s", nome);
al primo spazio o andata a capo, lo spazio/andata a capo viene sostituito con il \0

Per stampare
printf("%s", nome);

Per inizializzare, in fase di dichiarazione,
char nome[30+1]="anna";


Quale è la differenza tra 'a' e "a"
la prima è un carattere, mentre la seconda è una stringa
'a'--->['a']
"a"--->['a', '\0']

*/

#include <stdio.h>
int main(){
    char stringa[30+1];
    scanf("%S", stringa);
    int length;
    for(length=0; stringa[length]!='\0'; length++);
    

}