#include <stdio.h>
int main(){
	int a;
	printf("Inserire numero: ");
	scanf("%d",&a);
	if(a>0){
		printf("positivo\n");
	}
	else{
		if(a<0){
			printf("negativo\n");
		}
		else{
			printf("zeerro\n");
		}
	}
	return 0;
}
