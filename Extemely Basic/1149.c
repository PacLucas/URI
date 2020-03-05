#include <stdio.h>

int main(){
  int A, N, i, count = 0;
  scanf("%d%d", &A, &N);
  while(N <= 0) scanf("%d", &N);
  for(i = 1; i <= N; i++){
    count += A;
    A++;
  }
  printf("%d\n", count);
}
