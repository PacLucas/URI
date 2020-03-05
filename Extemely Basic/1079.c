#include <stdio.h>

int main(){
  int n, i;
  double aux, a, b, c, d;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%lf%lf%lf", &a, &b, &c);
    d = ((a / 5.0) + ((b * 3.0) / 10.0) + (c / 2.0));
    printf ("%.1lf\n", d);
  }
  return 0;
}
