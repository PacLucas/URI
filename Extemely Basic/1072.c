#include <stdio.h>

int main(){
  int n, aux, i, in = 0, out = 0;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &aux);
    if(aux > 9 && aux < 21) in++;
    else out++;
  }
  printf("%d in\n%d out\n", in, out);
  return 0;
}
