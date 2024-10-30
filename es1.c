#include <stdio.h>
int main(){
  for(int i=1; i<=10; i++){
    for(int p=1; p<=10; p++){
       printf("%d ", (i*p));
    }
    printf("\n");

  }
  return 0;
}
