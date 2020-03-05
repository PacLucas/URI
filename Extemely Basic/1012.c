#include <stdio.h>

int main()
{
  float a, b, c;
  float tri, cir, tra, qua, ret;
  scanf("%f%f%f", &a, &b, &c);
  tri = (a * c) / 2;
  cir = 3.14159 * (c * c);
  tra = ((a + b) * c) / 2;
  qua = b * b;
  ret = a * b;
  printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", tri, cir, tra, qua, ret);
  return 0;
}
