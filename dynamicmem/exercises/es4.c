/* Es 4: Si vuole gestire una classe di studenti tramite un array di
dimensione variabile; le informazioni degli studenti hanno la
seguente definizione di tipo:
struct t_stud{
char nome[21];
int eta; };
oppure
typedef struct {
char nome[21];
int eta;
} t_stud;
Scrivere una funzione C che prende come parametro il numero di
studenti da inserire e che restituisce l’indirizzo dell’array dinamico. I
nomi e le età vengono lette da tastiera. Gestire eventuali errori nella
fase di allocazione di memoria, restituendo NULL in caso di errori,
l’indirizzo del vettore in caso di successo.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[21];
    int eta;
} t_stud;

t_stud * crea_arraydin(int);

int main(){
    t_stud * arr;
    int size;
    printf("Inserire numero studenti: ");
    scanf("%d", &size);
    arr = crea_arraydin(size);
    if (arr == NULL) {
        printf("Errore nell'allocazione della memoria.\n");
        return 1;
    }
    
    for(int i=0; i<size; i++){
        printf("Studente %d\n", i+1);
        printf("Nome: %s\n", arr[i].nome);
        printf("Eta: %d\n", arr[i].eta);
    }
    free(arr);
    return 0;
}

t_stud * crea_arraydin(int dim){
    t_stud * arr=(t_stud*) malloc(sizeof(t_stud)*dim);
    if(arr!=NULL){
        for(int i=0; i<dim; i++){
            scanf("%s", (arr+i)->nome);
            scanf("%d" , &(arr+i)->eta);
        }
        return arr;
    }
    return NULL;
}