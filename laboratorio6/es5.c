/*Scrivere un programma C che:
○ Richiede all’utente di inserire 20 caratteri e li salva in un
array.
○ Produce due risultati:
● Una array costruito con i caratteri inseriti in cui ogni
vocale (mauiscola o minuscola) è sostituita da un numero
corrispondente (A=1, E=2, I=3, O=4, U=5).
● Un numero contenente la somma delle cifre (caratteri da
0 a 9) contenute nella stringa prodotta.
*/


#define D 20
#include <stdio.h>
int main(){
    int pos,somma=0;
    char array[D];
    char vocali[]={'a','e','i','o','u'};
    for(int i=0; i<D; i++){
        scanf(" %c", &array[i]);
    }
    for(int i=0; i<D; i++){
        if(array[i]=='A' || array[i]=='E' || array[i]=='I' ||  array[i]=='O' || array[i]=='U'){
            array[i]=array[i]-'A'+'a';
        }
        for(int a=0; a<5; a++){
            if(array[i]==vocali[a])
                array[i]=a+'1';
        }
        if(array[i]>='1' && array[i]<='9')
            somma = somma + array[i]-'0';
        printf("%c", array[i]);
    }
    printf("\nsomma %d\n", somma);
    return 0;
}
