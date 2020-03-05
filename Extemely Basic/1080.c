#include <stdio.h>

int main(){
  int n, val = 0, pos, i;
  for(i = 1; i <= 100; i++){
    scanf("%d", &n);
    if(n > val){
      val = n;
      pos = i;
    }
  }
  printf("%d\n%d\n", val, pos);
  return 0;
}
