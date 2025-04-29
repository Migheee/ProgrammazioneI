#include <stdio.h>
#define LINE_SIZE 255

int main(){
    FILE *fi;
    char line[LINE_SIZE];

    fi=fopen("out.txt". "r");
    if(fi!=NULL){
        fgets(line, LINE_SIZE, fi);
        while(!feof(fi)){
            if(line[0]>='a' && line[0]<='z')
                line[0]=line[0]-'a'+'A';
            printf("%s", line);
            fgets(line, LINE_SIZE, fi);

        }
        fclose(fi);
    }
    else printf("Errore apertura");
    return 0;
}