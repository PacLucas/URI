#include <stdio.h>
#include <string.h>

int main(){
  int N, total = 0, ratos = 0, coelhos = 0, sapos = 0, i, aux;
  char c[4];
  scanf("%d", &N);
  for(i = 0; i < N; i++){
    scanf("%d%s", &aux, c);
    total += aux;
    if(strcmp(c, "C") == 0) coelhos += aux;
    if(strcmp(c, "S") == 0) sapos += aux;
    if(strcmp(c, "R") == 0) ratos += aux;
  }
  printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n", total, coelhos, ratos, sapos);
  printf("Percentual de coelhos: %.2f %\n", (float)coelhos * 100.0 / total);
  printf("Percentual de ratos: %.2f %\n", (float)ratos * 100.0 / total);
  printf("Percentual de sapos: %.2f %\n", (float)sapos * 100.0 / total);
  return 0;
}
