/******************************************************************************
Scrivere un programma che chiede in input una stringa (senza
spazi) di al massimo 50 caratteri e verifica che la stringa sia
ben parentesizzata. Una stringa èben parentesizzata se le
parentesi (che possono essere solo tonde) sono chiuse
correttamente nell’ordine in cui vengono aperte. Esempio di
stringa ben parentesizzata: bla(bla)(bla(bla))(bla()(bla)()) 
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define N 50

int main() {
	char s1[N+1];
	scanf("%s", s1);
	int contparentesi = 0;
	for(int i=0; i<strlen(s1) && contparentesi>=0; i++){
		if(s1[i]=='(')
			contparentesi++;
		if(s1[i]==')')
			contparentesi--;
	}

	printf("%d\n", contparentesi==0 ? 1:0);
	return 0;
}