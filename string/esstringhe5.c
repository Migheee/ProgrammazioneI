/******************************************************************************
Scrivere un programma che acquisisce una stringa di
al più 100 caratteri che può contenere spazi e segni di
punteggiatura. Il programma conta quante sequenze
di almeno due consonanti uguali adiacenti sono
presenti nella stringa. Esempio: ccccaafbb -> 2. 
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main() {
	char s1[N+1];
	scanf("%s", s1);
    int cont=0;
    for(int i=1; i<strlen(s1); i++){
        if(isalpha(s1[i]) && s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u' && s1[i]!='A' && s1[i]!='E' && s1[i]!='I' && s1[i]!='O' && s1[i]!='U'){
            if(s1[i]==s1[i-1] && s1[i] !=s1[i+1]){
                cont++;
            }
        }

    }
    printf("%d\n", cont);
	return 0;
}