/*Scrivere un programma che chiede all'utente di
inserire un numero intero che corrisponde ad un anno
e visualizza 1 se l'anno è bisestile, 0 altrimenti. NOTA:
un anno è bisestile se è divisibile per 4 ma non per 100
o se è divisibile per 400.*/

#include <stdio.h>

int main(){
	int anno;
	printf("Inserire anno: ");
	scanf("%d", &anno);
	int r = ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0);
    printf("%d\n", r);
	return 0;
}
