#include <stdio.h>

int main(){
  double val;
  int i, r = 0;
  for(i = 0; i < 6; i++){
    scanf("%lf", &val);
    if(val > 0) r++;
  }
  printf("%d valores positivos\n", r);
  return 0;
}
