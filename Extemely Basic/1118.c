#include <stdio.h>

int main(){
  int FLAG = 1, i = 0, ver;
  float x, som;
  while(FLAG){
    scanf("%f", &x);
    if(x > 10.0 || x < 0.0) printf("nota invalida\n");
    else{
      som += x;
      i++;
    }
    if(i == 2){
      printf("media = %.2f\n", som / 2);
      i = 0;
      som = 0;
      while(1){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &ver);
        if(ver == 1 || ver == 2)  break;
      }
      if(ver == 2)  FLAG = 0;
    }
  }
}
