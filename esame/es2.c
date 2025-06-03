#include <stdio.h>
#define DIM 25

/*prototipi delle funzioni*/
int anagramma(char*, char*);
int dimmianagrammi(char*);

int main(){
	char str[DIM+1];
	int num;
	
	scanf("%s",str);
	num=dimmianagrammi(str);
	printf("%d",num);
}


int anagramma(char *s1, char *s2){
    int cond=1, cont;
    int i=0;
    while(cond && *(s1+i)!='\0'){
        cont=0;
        for(int j=0; *(s1+j)!='\0'; j++){
            if(*(s1+j)==*(s1+i))
                cont+=1;
        }
        for(int j=0; *(s2+j)!='\0'; j++){
            if(*(s2+j)==*(s1+i))
                cont-=1;
        }
        if(cont)
            cond=0;
        i++;
    }
    return cond;
  

}

int dimmianagrammi(char *str1){
    FILE *fp;
    int cont=0;
    char str2[DIM +1];
    fp=fopen("dizionario.txt", "r");
    if(fp){
        fscanf(fp, "%s", str2);
        while(!feof(fp)){
            cont+=anagramma(str1, str2);
            fscanf(fp, "%s", str2);
        }
    }
    return cont;


}