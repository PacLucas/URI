#include <stdio.h>
#include <math.h>

int main(){
  int n, i, aux;
  scanf("%d", &n);
  if(n % 2 == 0){
    for(i = 2; i <= n; i += 2){
      aux = pow(i, 2);
      printf("%d^2 = %d\n", i, aux);
    }
  }
  else{
    for(i = 2; i < n; i += 2){
      aux = pow(i, 2);
      printf("%d^2 = %d\n", i, aux);
    }
  }
  return 0;
}
