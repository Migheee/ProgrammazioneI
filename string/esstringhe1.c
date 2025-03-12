/******************************************************************************
Scrivere un programma che acquisisce una stringa di al più
100 caratteri che può contenere spazi e segni di punteggiatura.
Il programma conta quante consonanti doppie sono presenti
nella stringa. NOTE: assumere che la stringa NON sia vuota
ed inoltre che non contenga lettere maiuscole. Infine non
possono verificarsi casi di consonanti triple o più.
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#define N 100

int main()
{
    char stringa[N+1];
    char c;
    int i = 0;
    scanf(" %c", &c);
    while (c != '\n' && i < N) {
        stringa[i] = c;
        i++;
        scanf("%c", &c);
    }
    stringa[i] = '\0';
    int contdoppie=0;
    for(int a =0; a<i; a++){
        if(isalpha(stringa[a]) && (stringa[a]!='a'  && stringa[a]!='e'  && stringa[a]!='i'  && stringa[a]!='o'  && stringa[a]!='u')){
            if(stringa[a] == stringa[a+1]){
                contdoppie+=1;
            }
        }
    }
    printf("%d", contdoppie);
    return 0;
}