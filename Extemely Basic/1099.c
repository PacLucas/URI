#include <stdio.h>

int main(){
  int n, x, y, i, som = 0, j;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d%d", &x, &y);
    if(x - y == -1 || x - y == 0 || x - y == 1 || y - x == -1 || y - x == 0 || y - x == 1 )  printf("0\n");
    else if(x < y){
      for(j = x + 1, som = 0; j < y; j++){
        if(j % 2 != 0)  som += j;
      }
      printf("%d\n", som);
    }
    else{
      for(j = y + 1, som = 0; j < x; j++){
        if(j % 2 != 0)  som += j;
      }
      printf("%d\n", som);
    }
  }
  return 0;
}
