#include <stdio.h>

float maggiore (float, float);

int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b; &c );
    float s= maggiore(maggiore(a,b),c);
    printf("%f\n"  s); 
    return 0;



}


float maggiore(float a, float b){
    if(a>b)
        return a;
    else
        return b;
    return 0;
}
