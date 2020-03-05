#include <stdio.h>

int main()
{
  int hours, velocity;
  float fuel;
  scanf("%d%d", &hours, &velocity);
  fuel = ( (hours * velocity) / 12.0);
  printf("%.3f\n", fuel);
  return 0;
}
