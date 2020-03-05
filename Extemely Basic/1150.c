#include <stdio.h>

int main(){
  int X, Z, som, count = 0, i;
  scanf("%d%d", &X, &Z);
  while(Z <= X)  scanf("%d", &Z);
  for(i = X,som = 0; som < Z; i++){
    som += i;
    count++;
  }
  printf("%d\n", count);
}
