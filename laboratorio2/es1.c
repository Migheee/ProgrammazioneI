#include <stdio.h>
/*Scrivere un programma che riceve in ingresso un angolo in gradi e lo
converte in radianti (rad= gradi * π / 180°)*/
int main(){
    float gradi, rad;
    printf("Inserire gradi: ");
    scanf("%f", &gradi);
    rad = (gradi*3.14)/180;
    printf("In radianti: %f\n", rad);
    return 0;
}
