#include <stdio.h>

int main(){
	int anno;
	printf("Inserire anno: ");
	scanf("%d", &anno);
	if((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0){
		printf("bisisi");
	}
	else{
		printf("non bsiis");
	}
	return 0;
}
