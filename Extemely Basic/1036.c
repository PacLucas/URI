#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, aux1, aux2, delta;
  scanf("%lf%lf%lf", &a, &b, &c);
  if(2*a == 0 || ((b * b) - 4 * a * c) < 0)
  {
    printf("Impossivel calcular\n");
    return 0;
  }
  else
  {
    delta = (b * b) - 4 * a * c;
    aux1 = (-b + sqrt(delta)) / (2 * a);
    aux2 = (-b - sqrt(delta)) / (2 * a);
    printf("R1 = %.5lf\n", aux1);
    printf("R2 = %.5lf\n", aux2);
  }
  return 0;
}
