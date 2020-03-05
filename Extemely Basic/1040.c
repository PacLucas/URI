#include <stdio.h>

int main()
{
  double n1, n2, n3, n4, med, exa;
  scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
  med = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
  printf("Media: %.1lf\n", med);
  if(med >= 7.0)
    printf("Aluno aprovado.\n");
  else{
    if(med < 5.0)
      printf("Aluno reprovado.\n");
    else{
      printf("Aluno em exame.\n");
      scanf("%lf", &exa);
      printf("Nota do exame: %.1lf\n", exa);
      exa = (exa + med) / 2;
      if(exa >= 5.0)
        printf("Aluno aprovado.\n");
      else
        printf("Aluno reprovado.\n");
      printf("Media final: %.1lf\n", exa);
    }
  }
  return 0;
}
