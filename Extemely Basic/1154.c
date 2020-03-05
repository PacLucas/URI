#include <stdio.h>

int main(){
  int y = 0;
  double f, count = 0.0, som = 0.0;
  while(y >= 0){
    scanf("%d", &y);
    if(y >= 0){
      som += y;
      count++;
    }
  }
  f = som / count;
  printf("%.2lf\n", f);
}
