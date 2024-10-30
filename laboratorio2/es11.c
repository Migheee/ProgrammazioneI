#include <stdio.h>

int main(){
    char c;
    printf("Inserire carattere: ");
    scanf(" %c", &c);
    if(c>= 'A' && c<= 'Z'){
        printf("Maiuscolo\n");
    }
    else if(c>= 'a'&& c<= 'z'){
        printf("Minuscolo\n");
    }
    else if(c>='0' && c<='9'){
        printf("numero\n");
    }
    return 0;
}
