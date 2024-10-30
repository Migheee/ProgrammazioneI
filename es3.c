//sequenza di numeri, il primo negativo termina la sequenza. per ogni numero strettamente positivi stampare una riga di asterischi  
//con lunghezza uguale al numero

#include <stdio.h>
int main(){
	int num;
	printf("inserisci numero. num negativo per uscire");
	scanf("%d",&num);
	while(num >= 0){
		for(int i=0; i<num; i++){
			printf("*");
		}
		printf("\n");
		printf("inserisci num, neg per uscire");
		scanf("%d", &num);
	}
	return 0;
}
