/******************************************************************************
Scrivere un programma che acquisisce una stringa s di al più
30 caratteri (senza spazi). Stampare 1 se è formata da 2
sottostringhe identiche, 0 in caso contrario. Ad esempio
«ciaociao» è formata da due sottostringhe identiche.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define N 30

int main() {
	char s1[N+1];
	scanf("%s", s1);
	int is_uguale=0;
	if(strlen(s1)%2==0){
	    is_uguale=1;
    	for(int i=0; i<strlen(s1)/2 && is_uguale; i++) {
    		if(s1[i]!=s1[i+strlen(s1)/2])
    			is_uguale=0;
    	}
	}
	printf("is_uguale: %d\n", is_uguale);
	return 0;
}