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
#define N 30
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
    while (c!='\n' && i<N){
        stringa[i]=c;
        i++;
        scanf("%c", &c);
    }
    stringa[i]='\0';
    //Quindi, nel seguente caso, la stringa è "ab c"
    //stringa--->['a', 'b', ' ', 'c', '\0']

    //Scrivere un programma che acquisci una stringa e la restituisca al contrario
    char stringa2[N+1];
    char stringa3[N+1];
    int i,n;
    scanf("%s", stringa2);
    for(i=0; stringa2[i]!='\0'; i++);
    for(i=0; i<n; i++){
        stringa3[n-i-1]=stringa2[i];
    }
    stringa3[n]='\0';
    printf("%s %s\n",stringa2, stringa3);

    //nella libreria string.h ci sono molte funzioni per le stringhe
    //strlen(s) restituisce la lunghezza di s
    //strcmo(s1, s2) restituisce 0 se le stringhe sono uguali, <0 se s1<s2, >0 se s1>s2 (in base all'ordine alfabetico)
    //strcpy(s1, s2) copia s1 il contentuto di s2
    //strcat(s1, s2) concatena s2 a s1
}