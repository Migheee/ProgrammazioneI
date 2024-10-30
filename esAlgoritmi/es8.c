#include <stdio.h>
int main(){
	int seq_length, a=1, freq=1;
	float num,max;
	printf("Inserire lunghezza: ");
	scanf("%d", &seq_length);
	printf("Inserire numero: ");
	scanf("%f",&num);
	max=num;
	while(a<seq_length){
		printf("Inserire numero: ");
        	scanf("%f",&num);
		if(num>max){
			max=num;
			freq=1;
		}
		else if(num==max){
			freq+=1;
		}
		a+=1;
	}
	printf("num: %f e freq: %d\n", max, freq);
	return 0;
}

