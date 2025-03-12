/******************************************************************************
Scrivere un programma che acquisisce due stringhe s1 ed s2 di
al massimo 100 caratteri ciascuna. Il programma verifica se s2
è presente in s1 e tutte le volte che compare sostituisce il primo
carattere di s2 in s1 con il carattere X (è ammesso l’uso solo di
strlen
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char stringa1[N+1];
    char stringa2[N+1];
    int is_presente=0,a ;
    scanf("%s", stringa1);
    scanf("%s", stringa2);
    for(int i=0; i<strlen(stringa1); i++){
        if(stringa1[i]==stringa2[0]){
            a=1;
            for(int k=0, j=i; k<strlen(stringa2) && a; k++, j++){
                if(stringa2[k]!= stringa1[j])
                    a=0;
            }
            if(a){
                is_presente+=1;
                stringa1[i]='X';
            }
        }
    }
    printf("%s\n", stringa1);
    printf("is_presente: %d\n", is_presente);
}