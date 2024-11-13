/*○ Scrivere un programma C che memorizza in un
array di lunghezza 15 tutti i numeri primi minori
di 50 e successivamente li stampa a video.
● Un numero x è primo se è diverso da 1 ed ha
come unici divisori 1 ed x.
● NB 0 non è primo in quanto ogni numero
divide 0*/


#include <stdio.h>
#define D 15

int main(){
    int pos=0;
    int is_primo;
    int array[15];
    for(int i=1; i<=50; i++){
        is_primo=1;
        for(int h=2; h<=i/2 && is_primo; h++){
            if(i%h==0)
                is_primo=0;
        }
        if(is_primo){
            array[pos]=i;
            printf("%d\n", array[pos]);
            pos++;
        }
    }
    return 0;
}
