#include <stdio.h>

int main(){
  int x, i, count = 0;
  while(x != 0){
    scanf("%d", &x);
    if(x != 0){
      for(i = 1; i <= x; i++){
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
}
