/*Scrivere un programma C che apre in lettura un file di nome
input1.txt - creato precedentemente (vedi il file fornito) – e
ne mostra il contenuto a video. Non sapendo cosa contiene il
file leggete un carattere alla volta (con fscanf %c).
*/

#include <stdio.h>

int main(){
    FILE* fi;
    char car;
    fi=fopen("../out.txt", "r");
    if(fi!=NULL){
        fscanf(fi, "%c", &car);
        while(!feof(fi)){
            printf("%c", car);
            fscanf(fi, "%c", &car);
        }
        fclose(fi);
    }
    else printf("Errore lettura");
    return 0;
}