#include <stdio.h>
int main(){
	int n;
	printf("Inserire numero: ");
	scanf("%d", &n);
	if(n<0){
		n = -n;
	}
	printf("valore assoluto: %d\n", n);
	return 0;
}
