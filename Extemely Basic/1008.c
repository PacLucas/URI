#include <stdio.h>

int main()
{
  int n, h;
  float val;
  scanf("%d%d", &n, &h);
  scanf("%f", &val);
  printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, h * val);
  return 0;
}
