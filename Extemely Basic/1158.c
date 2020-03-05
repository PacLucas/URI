#include <stdio.h>

int main(){
  int N, X, Y, som, i, j;
  scanf("%d", &N);
  for(i = 0; i < N; i++){
    som = 0;
    scanf("%d%d", &X, &Y);
    if(X % 2 == 0)  X++;
    for(j = 0; j < Y; j++){
      som += X;
      X += 2;
    }
    printf("%d\n", som);
  }
}
