#include <stdio.h>
int main(){
	int n;
	do{
		printf("Inserisci numero: ");
		scanf("%d", &n);
	}while(n<=0);
	printf("%d\n", n-1);
	return 0;
}
