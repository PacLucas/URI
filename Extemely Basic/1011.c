#include <stdio.h>

int main()
{
  double r, vol;
  scanf("%lf", &r);
  vol = (4.0/3.0) * 3.14159 * (r * r * r);
  printf("VOLUME = %.3f\n", vol);
  return 0;
}
