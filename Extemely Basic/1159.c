#include <stdio.h>

int main(){
  int X, som = 0, j;
  scanf("%d", &X);
  while(X != 0){
    if(X % 2 != 0)  X++;
    for(j = 0; j < 5; j++){
      som += X;
      X += 2;
    }
    printf("%d\n", som);
    som = 0;
    scanf("%d", &X);
  }
}
