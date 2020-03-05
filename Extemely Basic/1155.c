#include <stdio.h>

float seq(float x){
  if(x == 1)  return 1;
  return ((1 / x) + seq(x - 1));
}

int main(){
  printf("%.2f\n", seq(100));
}
