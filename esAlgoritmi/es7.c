#include <stdio.h>
int main(){
	float a;
	printf("Inserisci numero: ");
	scanf("%f", &a);
	if(a>0){
		printf("positivo\n");
	}else if(a<0){
		printf("negativo\n");
	}else{
		printf("zero\n");
	}
	return 0;
}
