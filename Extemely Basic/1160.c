#include <stdio.h>

int main(){
  int T, i, PA, PB;
  double CA, CB;
  int count = 0;
  scanf("%d", &T);
  for(i = 0; i < T; i++){
    count = 0;
    scanf("%d%d%lf%lf", &PA, &PB, &CA, &CB);
    while(PA <= PB){
      PA += (PA / 100.0) * CA;
      PB += (PB / 100.0) * CB;
      count++;
      if(count > 100) break;
    }
    if(count > 100) printf("Mais de 1 seculo.\n");
    else  printf("%d anos.\n", count);
  }
}
