#include <stdio.h>

int main(){
  int n, m, i, som;
  while(1){
    scanf("%d%d", &n, &m);
    if(n < 1 || m < 1)  break;
    if(n > m){
      for(i = m, som = 0; i <= n; i++){
        printf("%d ", i);
        som += i;
      }
      printf("Sum=%d\n", som);
    }
    else{
      for(i = n, som = 0; i <= m; i++){
        printf("%d ", i);
        som += i;
      }
      printf("Sum=%d\n", som);
    }
  }
  return 0;
}
