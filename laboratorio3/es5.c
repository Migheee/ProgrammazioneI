/*Su una scacchiera 8x8 sono posizionati due pezzi: il Re
bianco e la Regina nera. Si scriva un programma in
linguaggio C che acquisisce le posizioni del Re e della
Regina in termini di coordinate (x,y) assumendo che la
posizione (1,1) sia situata in basso a sinistra rispetto
al giocatore. Il programma controlla prima che le
coordinate inserite siano valide; in particolare
entrambi i pezzi devono trovarsi all’interno della
scacchiera ed inoltre non possono trovarsi nella stessa
posizione. In seguito il programma determina se la
Regina è in posizione tale da poter mangiare il Re e
visualizza un apposito messaggio specificando anche
in che direzione e per quante posizioni deve muoversi
per mangiare. NB: La regina si può muovere in linee
rette verticalmente, orizzontalmente o in diagonale
per il numero di caselle non occupate che trova.*/

#include <stdio.h>

int main(){
    int distance,dx,dy,rex,rey,reginax,reginay;
    printf("Inserire coordinate re: \n");
    scanf("%d %d", &rex,&rey);
    printf("Inserire coordinate regina: \n");
    scanf("%d %d", &reginax,&reginay);
    if((rex <=0 || rex >=9 || rey <=0 || rey >=9 || reginax <=0 || reginax >=9 || reginay <=0 || reginay >=9) || (rex == reginax && rey == reginay))
        printf("coordinate non valide\n");
    else{
        if(rex == reginax){
            printf("La regina può mangiare\n");
            distance = rey-reginay;
            if(distance > 0)
                printf("La Regina deve spostarsi in alto di %d caselle\n", distance);
            else
                printf("La Regina deve spostarsi in basso di %d caselle\n", -distance);
        }
        else{
            if(rey==reginay){
                printf("La regina può mangiare\n");
                distance = rex-reginax;
                if(distance > 0)
                    printf("La Regina deve spostarsi a destra di %d caselle\n", distance);
                else
                    printf("La Regina deve spostarsi a sinistra di %d caselle\n", -distance);
            }
            else{
                dx= rex-reginax;
                dy=rey-reginay;
                if(dx== dy || -dx==dy || dx==-dy || -dx==-dy){
                    printf("La regina può mangiare\n");
                    if(dx > 0){
                        printf("la regina deve spostarsi a destra di %d caselle\n", dx);
                        if(dy>0)
                            printf("la regina deve spostarsi in alto di %d caselle\n", dy);
                        else
                            printf("la regina deve spostarsi in bassp di %d caselle\n", -dy);
                    }
                    else{
                         printf("la regina deve spostarsi a sinistra di %d caselle\n", -dx);
                         if(dy>0)
                             printf("la regina deve spostarsi in alto di %d caselle\n", dy);
                         else
                             printf("la regina deve spostarsi in bassp di %d caselle\n", -dy);
                    }
                }
            }
        }
    }
    return 0;
}
