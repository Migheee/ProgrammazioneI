/*Scrivere un programma che chiede all’utente una velocità in km/h, la
converte e visualizza a schermo in m/s e miglia per ora (1 km/h= 0.64
Mph)*/
#include <stdio.h>
int main(){
    float km_h, mil_h, m_s;
    printf("Inserire la velocità in km h: ");
    scanf("%f", &km_h);
    m_s = km_h/3.6;
    printf("La velocità convertita in m/s è : %f\n", m_s);
    mil_h = km_h/1.609;
    printf("la velocità in mph è di: %f\n", mil_h);
    return 0;
}
