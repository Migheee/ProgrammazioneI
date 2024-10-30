/*Scrivere un programma in C che acquisisce tre
numeri. Il programma verifica se i tre numeri possono
rappresentare le dimensioni dei lati di un triangolo:
devono essere valori positivi e la somma di due numeri
deve essere maggiore del terzo. In caso il controllo
fallisca, il programma deve stampare un apposito
messaggio di errore. Se il controllo è stato superato con
successo, il programma stabilisce che tipo di triangolo
è (isoscele, equilatero o scaleno) e stampa un apposito
messaggio a video.*/

#include <stdio.h>

int main(){
    float l1, l2, l3;
    printf("Inserire lato1 di un triangolo: ");
    scanf("%f", &l1);
    printf("Inserire lato2 di un triangolo: ");
    scanf("%f", &l2);
    printf("Inserire lato3 di un triangolo: ");
    scanf("%f", &l3);
    if(l1 <= 0 || l2 <=0 || l3<=0)
        printf("Il triangolo deve avere lati positivi!\n");
    else{
        if(l1+l2>l3 && l1+l3>l2 && l2+l3>l1){
            printf("I lati inseriti compongono un triangolo\n");
            if(l1 == l2 && l2 == l3){
                printf("Il triangolo è equilatero.\n");
            }
            else{
                if(l1 == l2 || l2 ==l3 || l3 == l1){
                    printf("Il triangolo è isoscele\n");
                }
                else{
                    printf("Il triangolo è scaleno\n");
                }
            }
        }
        else
            printf("i lati inseriti non compongono un triangolo");
    }
    return 0;
}

