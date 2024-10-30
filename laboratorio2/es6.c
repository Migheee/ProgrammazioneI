/*Scrivere un programma in C che chiede all’utente una
numero in virgola mobile. Il programma calcola e visualizza
su due righe separate la parte intera e quella decimale di tale
numero.
Ad esempio, nel caso in cui l’utente inserisce il numero 4.14, il
programma visualizzerà:
4
0.14*/

#include <stdio.h>

int main(){
    float numero;
    int parte_intera;
    printf("Inserisci numero: ");
    scanf("%f", &numero);
    parte_intera = numero/1;
    numero = numero - parte_intera;
    printf("Numero: %d\n", parte_intera);
    printf("Resto: %.3f\n", numero); //con 3.f indichi quante cifre (3) dopo la virgola
    return 0;
}
