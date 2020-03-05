#include <stdio.h>

int main()
{
  int cod1, qua1, cod2, qua2;
  float val1, val2;
  scanf("%d%d%f", &cod1, &qua1, &val1);
  scanf("%d%d%f", &cod2, &qua2, &val2);
  val1 *= qua1;
  val2 *= qua2;
  printf("VALOR A PAGAR: R$ %.2f\n", val1 + val2);
  return 0;
}
