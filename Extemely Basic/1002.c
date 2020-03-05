#include <stdio.h>

int main()
{
  double a, raio;
  scanf("%lf", &raio);
  a = 3.14159 * (raio * raio);
  printf("A=%.4lf\n", a);
  return 0;
}
