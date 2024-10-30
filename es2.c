#include <stdio.h>
int main(){
	int num, max;
	printf("inserisci un numero, -1 per uscire: ");
	scanf("%d",&num);
	max=num;
	while(num!=-1){
		printf("Inserisci un numero, -1 per uscire: ");
		scanf("%d",&num);
		if(num>max){
			max=num;
		}
	}
	printf("num: %d\n", max);
	return 0;
}
		
