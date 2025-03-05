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
#define N 31
#include <stdio.h>
int main(){
    char stringa[30+1];
    char c;
    scanf("%s", stringa);
    //contare quanto è lunga una stringa
    int length;
    for(length=0; stringa[length]!='\0'; length++);
    printf("%d\n", length);
    //esiste la gets(s) dove solo l'invio termina la stringa
    //NOTA: su gcc la gets da warning
    gets(stringa);
    //nel caso in cui si voglia leggere una stringa con spazi
    int i=0;
    scanf("%c", &c);
    while (c!='\n' && i<N)
    {
        stringa[i]=c;
        i++;
        scanf("%c", &c);
    }
    stringa[i]='\0';
    //Quindi, nel seguente caso, la stringa è "ab c"
    //stringa--->['a', 'b', ' ', 'c', '\0']
}