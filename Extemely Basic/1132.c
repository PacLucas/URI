#include <stdio.h>

int main(){
  int x, y, z = 0, i;
  scanf("%d%d", &x, &y);
  if(x < y){
    for(i = x; i <= y; i++){
      if(i % 13 == 0) continue;
      z += i;
    }
  }
  else{
    for(i = y; i <= x; i++){
      if(i % 13 == 0) continue;
      z += i;
    }
  }
  printf("%d\n", z);
}
