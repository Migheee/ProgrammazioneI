#include <stdio.h> /*includere la libreria di standard di input e output 
(contiene istruzione per richiedere e produrre dati). Non serve il ; */
//il compilatore non analizza le lineee di commento

int main(){
	//vengono inserite le istruzioni per risolvere problemi. Prima parte: dichiarazione varibili
	int n1, n2; //nomi simbolici di due variabili intere
	int somma;
	float media;  //Per ogni dichiariazione, in memoria viene allocato spazio per le variabili
	char car;
	somma = 0; //valuta l'espressione a destra dell'uguale e scrivi in memoria il valore

				/*%d è il formattatore per il tipo di variabile di tipo intero.
			    	 Il compilatore effettuerà una verifica di coerenza dei tipi */
	scanf("%d %d", &n1,&n2); //lettura di due valori nello stesso scanf
	somma = n1 + n2;
	printf("La somma è %d\n", somma); //stampare sullo standard output
	media = (float) somma/2; //casting esplicito dato che sia somma che 2 interi
	printf("Media %f\n", media);
	/*LISTA FORMATTATORI
	%d %i intero
	%f float
	%c char
	%g double (oppure) %lf
	*/
	scanf(" %c", &car);
	car = car - 'a' + 'A'; /*calcolo la distanza dal carattere minuscolo inserito da a e poi aggiungi 
				"A". Equivale a sommare  32 a il carattere. per info, 
inserire il comando man ascii* sul terminale/
	printf("carattere maiuscolo: %c\n:", car);
	return 0;


} //NOTA: le regole di indentazione rendono più leggibile il codice


