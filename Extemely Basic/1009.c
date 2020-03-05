#include <stdio.h>

int main()
{
  char nome;
  float sal, vend, tot;
  scanf("%s%f%f", &nome, &sal, &vend);
  tot = sal + (15*vend)/100;
  printf("TOTAL = R$ %.2f\n", tot);
  return 0;
}
