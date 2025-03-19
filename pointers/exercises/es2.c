/*
Scrivere un sottoprogramma che calcola l'area e il
perimetro di un cerchio di raggio dato. Il
sottoprogramma riceve come parametri un
numero in virgola mobile che rappresenta il
raggio del cerchio e altri due parametri, sempre
in virgola mobile, in cui verranno salvati i due
risultati richiesti. Scrivere un programma che
chiede all'utente la lunghezza del raggio del
cerchio, calcola mediante la funzione sopra e
visualizza il perimetro e l'area del cerchio. In
seguito il programma chiede all'utente se vuole
continuare o meno (0 per continuare, qualsiasi
altro valore per terminare). 12

*/

#include <stdio.h>

void area_perimetro(float, float*, float*);

int main(){
    int cond;
    float raggio, area, perimetro;
    do{
        scanf("%f", &raggio);
        area_perimetro(raggio, &area, &perimetro);
        printf("L'area è %f, mentre il perimetro è %f \n", area, perimetro);
        printf("Si vuole continuare? 0 per continuare, qualsiasi altro valore per terminare ");
        scanf("%d", &cond);
    }while(cond==0);
    return 0;

}

void area_perimetro(float raggio, float*area, float*perimetro){
    *area=raggio*raggio*3.14;
    *perimetro=raggio*2*3.14;
}