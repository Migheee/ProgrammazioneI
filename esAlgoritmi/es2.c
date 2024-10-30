#include <stdio.h>
int main(){
	float a,b;
	printf("risoluzione di equazioni di primo grado del tipo ax+b = 0\n Inserisci a e b : ");
	scanf("%f %f", &a,&b);
	if(a==0){
		if(b==0){
			printf("equazione indeterminata\n");
		}
		else{
			printf("equazione impossibile\n");
		}
	}
	else{
		printf("la soluzione è %f\n", -b/a);
	}
	return 0;
}


	
