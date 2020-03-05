#include <stdio.h>

float seq(float x, float y){
  if(x == 1)  return 1;
  return ((x / y) + seq(x - 2, y / 2));
}

int main(){
  printf("%.2f\n", seq(39, 524288));
}
