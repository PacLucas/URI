#include <stdio.h>

int main(){
  int n, i, aux;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &aux);
    if(aux == 0)  printf("NULL\n");
    else  if(aux > 0 && aux % 2 == 0) printf("EVEN POSITIVE\n");
    else  if(aux > 0 && aux % 2 != 0) printf("ODD POSITIVE\n");
    else if(aux < 0 && aux % 2 == 0)  printf("EVEN NEGATIVE\n");
    else if(aux < 0 && aux % 2 != 0) printf("ODD NEGATIVE\n");
  }
  return 0;
}
