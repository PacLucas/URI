#include <stdio.h>

int main()
{
  double a, b, c, ar;
  scanf("%lf%lf%lf", &a, &b, &c);
  if(a < b + c && b < a + c && c < a + b) printf("Perimetro = %.1lf\n", a + b + c);
  else{
    ar = ((a + b) * c) / 2;
    printf("Area = %.1lf\n", ar);
  }
  return 0;
}
