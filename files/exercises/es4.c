/*crivere un programma C che apre un file di testo
“testo.txt” contenente parole ciascuna di al massimo
15 caratteri. Il programma identifica e stampa a video
tutte le parole che rappresentano un numero (cioè
composte soltanto da cifre). Ad esempio, se il file
“input3.txt” contiene il testo:*/


#include <stdio.h>
#include <string.h>
#define WORD_SIZE 15

int main(){
    char car[WORD_SIZE];
    int cond;
    FILE *fi;
    fi=fopen("out.txt", "r");
    if(fi!=NULL){
        fscanf(fi, "%s", car);
        while(!feof(fi)){
            cond=1;
            for(int i=0; i<strlen(car) && cond; i++){
                if(car[i]<'0' || car[i]>'9')
                    cond=0;
            }
            if(cond)
                printf("%s\n", car);
            fscanf(fi, "%s", car);
        }
        fclose(fi);
    }
    else printf("Errore");
    return 0;
}