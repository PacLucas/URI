#include <stdio.h>

int main(){
  int val, i, r = 0;
  for(i = 0; i < 5; i++){
    scanf("%d", &val);
    if(val % 2 == 0)  r++;
  }
  printf("%d valores pares\n", r);
  return 0;
}
