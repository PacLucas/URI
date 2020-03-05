#include <stdio.h>

int main(){
  int val, i;
  scanf("%d", &val);
  if(val % 2 == 0){
    for(i = val + 1; i <= val + 11; i += 2){
      printf("%d\n", i);
    }
  }
  else{
    for(i = val; i <= val + 10; i += 2){
      printf("%d\n", i);
    }
  }
  return 0;
}
