#include <stdio.h>

int main(){
  int qnt,numb, i, j, aux, count = 0;
  scanf("%d", &qnt);
  for(i = 0; i < qnt; i++){
    scanf("%d", &numb);
    count = 0;
    aux = numb / 2;
    for(j = 1; j <= aux; j++){
      if(numb % j == 0) count += j;
    }
    if(count == numb) printf("%d eh perfeito\n", numb);
    else  printf("%d nao eh perfeito\n", numb);
  }
}
