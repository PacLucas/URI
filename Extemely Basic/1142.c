#include <stdio.h>

int main(){
  int N, i, count = 1;
  scanf("%d", &N);
  for(i = 1; i <= N; i++){
    printf("%d %d %d PUM\n", count, count + 1, count + 2);
    count += 4;
  }
}
