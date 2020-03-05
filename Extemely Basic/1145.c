#include <stdio.h>

int main(){
  int x, y, i, p, count = 0;
  scanf("%d%d", &x, &y);
  if(x < y){
    for(i = 1; i <= y; i++){
      count++;
      if(count != x)  printf("%d ", i);
      else{
        printf("%d", i);
        count = 0;
        printf("\n");
      }
    }
  }
}
