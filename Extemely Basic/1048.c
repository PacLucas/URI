#include <stdio.h>

int main(){
  double sal, newsal;
  scanf("%lf", &sal);
  if(sal <= 400){
    newsal = sal * 0.15 + sal;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", newsal, newsal-sal);
  }
  else if(sal <= 800){
    newsal = sal * 0.12 + sal;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", newsal, newsal-sal);
  }
  else if(sal <= 1200){
    newsal = sal * 0.10 + sal;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", newsal, newsal-sal);
  }
  else if(sal <= 2000){
    newsal = sal * 0.07 + sal;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", newsal, newsal-sal);
  }
  else if(sal > 2000){
    newsal = sal * 0.04 + sal;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", newsal, newsal-sal);
  }
  return 0;
}
