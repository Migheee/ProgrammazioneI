/*
Definire la funzione ricorsiva int cifre(int) che restituisce il numero di
cifre del numero >=0 passato come parametro
*/

#include <stdio.h>

int cifre(int);

int main(){
    int num=105;
    printf("%d\n", cifre(num));

}

int cifre(int num){
    if(num==0)
        return 0;
    return 1+cifre(num/10);
}