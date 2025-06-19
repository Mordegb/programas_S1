#include <stdio.h>
int main(){
    int numr[12];
    int soma = 0;
   for(int i = 0; i < 12; i++){
      printf("diga o numero %d: " , i);
        scanf("%d" , &numr[i]);
      }
    for(int i = 2; i < 12; i++){
      if(i % 2 == 0){
        continue;
      }
      if (numr[i] % 2 == 0  && numr[i] > 0){
        continue;
      }
      soma = soma + numr[i];
    }
      printf("/n");
      printf("SOMA = %d" , soma);
  
  
  
  
  
  return 0;
}