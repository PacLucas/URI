#include <stdio.h>

int main(){
  int FLAG = 1, i = 0;
  float x, som;
  while(FLAG){
    scanf("%f", &x);
    if(x > 10.0 || x < 0.0) printf("nota invalida\n");
    else{
      som += x;
      i++;
    }
    if(i == 2)  FLAG = 0;
  }
  printf("media = %.2f\n", som / 2);
  return 0;
}
