int main(){
    int c,d;
    int *p1; // ---> Puntatore ad intero    
    int *p2; // ---> Puntatore ad intero
    int **p3; // ---> Puntatore a puntatore ad intero
    int **p4; // ---> Puntatore a puntatore ad intero

    c=54;
    d=10;
    p1=&c;
    p2=p1;
    c=20;
    printf("%d %d %d %d\n", c, d, *p1, *p2); //20 10 20 20
    
    p1=&d;
    *p1= *p1+ *p2;

    printf("%d %d %d %d\n", c, d, *p1, *p2); //20 30 30 20
    
    p3=&p1; //p3 contiene l'indirizzo di p1
    p4=&p2;
    *p3= *p4;
    printf("%d %d %d %d\n", c, d, *p1, *p2); //20 30 20 20


}