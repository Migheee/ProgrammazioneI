/*Scrivere un programma in C che chiede all'utente un valore che
rappresenta una temperatura in gradi celsius, converte il valore in
gradi Fahrenheit e visualizza il risultato. NOTA: la formula per la
conversione è gradi_F = gradi_C x 1.8 + 32*/

#include <stdio.h>

int main(){
    float gradi_C, gradi_F;
    printf("Inserire gradi: ");
    scanf("%f",&gradi_C);
    gradi_F=gradi_C*1.8+32;
    printf("Gradi convertiti in fahrenheit: %f\n", gradi_F);
    return 0;
}
