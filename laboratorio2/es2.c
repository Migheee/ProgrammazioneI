/*Scrivere un programma che chiede all'utente il raggio di un cerchio.
L'algoritmo calcola e visualizza l'area di tale cerchio.*/
#include <math.h>
#include <stdio.h>

int main(){
    float radius, area;
    printf("Inserire raggio: ");
    scanf("%f", &radius);
    area = (radius*radius)*M_PI;
    printf("L'area della circonferenza con raggio: %f è di: %f\n", radius, area);
    return 0;
}
