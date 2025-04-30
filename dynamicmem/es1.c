#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
come es fai con funzione

char* concatena(char*, char*);
*/

int main(){
    char str[100];
    char str2[100];
    char *str3;
    int l1, l2;
    printf("Inserisci la prima stringa: ");
    scanf("%s", str);
    printf("Inserisci la seconda stringa: ");
    scanf("%s", str2);
    l1 = strlen(str);
    l2 = strlen(str2);
    str3= (char *) malloc((l1+l2+1)*sizeof(char)); //+1 per il terminatore di stringa
    if(str3 != NULL){
        for(int i=0; i<l1; i++){
            str3[i] = str[i];
        }
        for(int i=0; i<l2; i++){
            str3[l1+i] = str2[i];
        }
        str3[l1+l2] = '\0'; //aggiungo il terminatore di stringa
        printf("La stringa concatenata è: %s\n", str3);
        free(str3); //libero la memoria allocata
    }
    else printf("Errore nell'allocazione della memoria\n");

}