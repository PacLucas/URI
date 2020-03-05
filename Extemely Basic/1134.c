#include <stdio.h>

int main(){
  int gas, alc = 0, gsl = 0, dis = 0;
  while(1){
    scanf("%d", &gas);
    if(gas > 4 || gas < 1)  continue;
    if(gas == 4)  break;
    switch(gas){
      case 1:
        alc++;
        break;
      case 2:
        gsl++;
        break;
      case 3:
        dis++;
        break;
    }
  }
  printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gsl, dis);
}
