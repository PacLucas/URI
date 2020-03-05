#include <stdio.h>

int main(){
  double val, media = 0;
  int i, r = 0;
  for(i = 0; i < 6; i++){
    scanf("%lf", &val);
    if(val > 0){
      r++;
      media += val;
    }
  }
  printf("%d valores positivos\n%.1lf\n", r, media/r);
  return 0;
}
