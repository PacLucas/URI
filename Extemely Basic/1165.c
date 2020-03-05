#include <stdio.h>
#include <math.h>

int prim(int x){
  int i, rt;
  if(x < 2)  return 0;
  if(x == 2)  return 1;
  if(x % 2 == 0) return 0;
  rt = sqrt(x);
  for(i = 3; i <= rt; i += 2)  if(x % i == 0)  return 0;
  return 1;
}


int main(){
  int qnt, numb, i;
  scanf("%d", &qnt);
  for(i = 0; i < qnt; i++){
    scanf("%d", &numb);
    if(prim(numb) == 1)  printf("%d eh primo\n", numb);
    else  printf("%d nao eh primo\n", numb);
  }
}
