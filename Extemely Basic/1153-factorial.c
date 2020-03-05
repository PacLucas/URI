#include <stdio.h>

int fat(int N){
  if(N == 1)  return 1;
  return N * fat(N-1);
}

int main(){
  int N;
  scanf("%d", &N);
  printf("%d\n", fat(N));
}
