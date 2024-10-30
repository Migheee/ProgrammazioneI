#include <stdio.h>
int main(){
	int a; /*verrà dedicato dello spazio per la variabile intera a, 
                 dove verrà caricata (allocata) su un indirizzo*/
	int b; /*il nome di una variabile è una sequenza alfanumerica che inizia per una lettere 
	         (Può anche contenere il simbolo _)*/
	float media;
	int c;

	char t;
	t = '0';
	t = t + 1; // '1'

	//FINO AD ADESSO NON HO SCRITTO NULLA IN MEMORIA, HO SOLO ALLOCATO SPAZIO
	//Per scrivere in memoria ----> nome_variabile = valore

	b = 6; //vado a scrivere nello spazio di b il numero 6

	a = 7;
	media = (a + b)/2; /*viene prima calcolato il valore a destra e poi assegnato alla variabile c.
	L'espressione a destra viene calcolta, in questo caso, come un intero perchè a destra ho solo valori interi
	(6+7)/2 ==> 6.0*/

	media = (float)(a+b)/2; /*Si chiama casting esplicito delle variabili.  (a+b) viene reso float*/

	/*
	Come in algebra noti le parentesi. Le operazioni aritmetico/logiche vengono eseguite dall' ALU
	L'ALU ESEGUE (somma, sottrazione, moltiplicazione, resto della divisione intera)
	ANCHE IN FASE DI DICHIARAZIONE E' POSSIBILE  INIZIALIZZARE IL VALORE DELLA VARIABILE
	Per potere espressivo: char<int<float<double
	*/

	a += 1 //equivale a = a + 1

	var++;//var = var + 1
	var--; //var = var - 1
 
	return 0;
}
