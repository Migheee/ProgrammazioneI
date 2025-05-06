/*
Es 3: Scrivere un programma C che legge da
tastiera una stringa s di massimo 30 caratteri e
invocando una funzione (opportunamente
definita) costruisce la stringa dinamica che
contiene i soli caratteri alfabetici di s (no
caratteri numerici, no caratteri speciali).
Ad esempio, se l’utente inserisce la stringa
«Ciao*3ciao!» a video verrà stampata la stringa
«Ciaociao» (della dimensione corretta per i soli
caratteri alfabetici).
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char * crea(char *);

int main(){
    char s[20];
    char *str;
    scanf("%s", s);
    str=crea(s);
    printf("%s", str);
    return 0;

}

char * crea(char * s){
    int dim=0;
    for(int i=0; s[i]!='\0'; i++){
        if(isalpha(s[i])){
            dim++;
        }
    }

    char * str=malloc((dim+1)*sizeof(char));
    int pos=0;
    for(int i=0; *(s+i)!='\0'; i++){
        if(isalpha(s[i])){
            str[pos]=s[i];
            pos++;
        }
    }
    str[pos]='\0';
    return str;

}