#include <stdio.h>

int main(){
  int val, par = 0, impar = 0, posi = 0, nega = 0, i;
  for(i = 0; i < 5; i++){
    scanf("%d", &val);
    if(val % 2 == 0)  par++;
    else  impar++;
    if(val < 0) nega ++;
    else if(val > 0) posi++;
  }
  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, posi, nega);
  return 0;
}
