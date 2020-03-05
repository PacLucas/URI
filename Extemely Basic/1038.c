#include <stdio.h>

int main()
{
  int cod, qua;
  scanf("%d%d", &cod, &qua);
  switch(cod)
  {
    case 1:
      printf("Total: R$ %.2f\n", 4.00 * qua);
      break;
    case 2:
      printf("Total: R$ %.2f\n", 4.50 * qua);
      break;
    case 3:
      printf("Total: R$ %.2f\n", 5.00 * qua);
      break;
    case 4:
      printf("Total: R$ %.2f\n", 2.00 * qua);
      break;
    case 5:
      printf("Total: R$ %.2f\n", 1.50 * qua);
      break;
  }
  return 0;
}
