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
  int flag = 1;
  int cont1=0, cont2=0;

  for (int i=0; *(s1+i)!='\0'; i++){
      cont1++;
  }
  for (int i=0; *(s2+i)!='\0'; i++){
      cont2++;
  }
  if(cont1!=cont2){
      flag=0;
  }
  
   
  for(int i=0; *(s1+i)!='\0'&&flag==1; i++) // scorro stringa s1
   {
      cont1=0;
      cont2=0;
      for(int j =0; *(s1+j)!='\0' && flag == 1;j++ ){ //conto quante volte in s1 c'è s1[i]
          if(*(s1+i)==*(s1+j))
              cont1++;
      }
      for(int j=0; *(s2+j)!='\0' && flag==1; j++){//conto quante volte in s2 c'è s1[i]
          if(*(s1+i)==*(s2+j))
              cont2++;
      }
      if(cont2!=cont1)
          flag=0;


   }
   return flag;
}

int dimmianagrammi(char *str1){
	FILE *fi;
	int cont=0;
	char str2[DIM+1];
	
	fi=fopen("dizionario.txt","r");
	if(fi==NULL)
		return -1;
	else{
		fscanf(fi,"%s",str2);
		while(!feof(fi)){
			if(anagramma(str1,str2))
			cont++;		
			fscanf(fi,"%s",str2);
		}
		return cont;
	}
}