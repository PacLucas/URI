#include <stdio.h>

int main()
{
  int dis;
  float com;
  scanf("%d%f", &dis, &com);
  printf("%.3f km/l\n", dis / com);
  return 0;
}
