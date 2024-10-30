/*Scrivere un programma in C che richiede
all’utente di inserire i coefficienti a, b, c di un
polinomio di secondo grado ax2 + bx + c = 0. Se a è
pari a zero, il programma informa che il polinomio
è di grado inferiore al secondo. In caso contrario, il
programma calcola il determinante (det)
dell’equazione di secondo grado e informa l’utente
se le soluzioni sono reali e distinte (det>0),
coincidenti (det=0) o complesse coniugate (det<0).*/

#include <stdio.h>

int main(){
    float det,a, b, c;
    printf("polinomio del tipo ax2+bx+c=0\n");
    printf("Inserire il coefficiente a: ");
    scanf("%f", &a);
    printf("Inserire il coefficiente b: ");
    scanf("%f", &b);
    printf("Inserire il coefficiente c: ");
    scanf("%f", &c);
    if(a==0)
        printf("Il polinomio  di primo grado\n");
    else{
        det = b*b-(4*a*c);
        if(det > 0)
            printf("Soluzioni reali e distinte\n");
        else{
            if(det==0)
                printf("Soluzioni coincidenti\n");
            else
                printf("Soluzioni complesse o coniugate\n");
        }
    }
    return 0;
}
