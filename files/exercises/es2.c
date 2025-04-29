/*
Scrivere un programma C che si comporta come il
programma dell’esercizio 1, ma legge una stringa alla volta
con la funzione (con fscanf %s) dal file prima di stamparla a
video.
*/

#include <stdio.h>
#define MAX_WORD_LENGTH 255

int main(){
    FILE* fi;
    char car[MAX_WORD_LENGTH];
    fi=fopen("../out.txt", "r");
    if(fi!=NULL){
        fscanf(fi, "%s", car);
        while(!feof(fi)){
            printf("%s\n", car);
            fscanf(fi, "%s", car);
        }
        fclose(fi);
    }
    else printf("Errore lettura");
    return 0;
}