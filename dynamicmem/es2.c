/*
data una stringa costruire una stringa che contiene i suoi caratteri numerici e una che contiene i suoi caratteri non numerici
esempio: "abc123" -> "123" e "abc"
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

void conta(char*, int*, int*);

int main(){
    char s[100];
    int lnum=0, loth=0;
    char*s1, *s2;
    scanf("%s", s);
    conta(s, &lnum, &loth);
    s1=(char*) malloc((lnum+1)*sizeof(char));
    s2=(char*) malloc((loth+1)*sizeof(char));
    if(s1!=NULL && s2!=NULL){
        int a=0, b=0;
        for(int i=0; s[i]!='\0'; i++){
            if(isdigit(s[i])){
                s1[a]=s[i];
                a++;
            }
            else{
                s2[b]=s[i];
                b++;
            }
        }
        s1[lnum]='\0';
        s2[loth]='\0';
        printf("%s", s1);
        printf("%s", s2);
        free(s1);
        free(s2);
    }
    else printf("errore nell'allocazione");
    return 0;


}

void conta(char*s, int*lnum, int*loth){
    for(int i=0; s[i]!='\0'; i++){
        if(isdigit(s[i]))
            *lnum+=1;
        else  
            *loth+=1;
    }
}