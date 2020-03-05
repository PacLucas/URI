#include <stdio.h>

int main(){
  for(float i = 0; i <= 2.01; i += 0.2){
    if(i == (int)i || i == 2.0) printf("%.0f\n",i);
    else  printf("%.2f\n", i);
    for(float j = 1; j <= 3; j++){
    /*  if(i == (int)i) printf("I=%.0f J=%.0f\n", i, j + i);
      else printf("I=%.1f J=%.1f\n", i, j + i); */
    }
  }
  return 0;
}
