#include <stdio.h>

int main()
{
int fat;
   printf("diga um numero para gerar o fatorial:");
    scanf("%d" ,&fat);
int num = fat;
   for (int i=(fat - 1);i >= 1;i--){
       fat = fat * i;
   }
   printf("o fatorial de %d = %d" , num, fat);

return 0;
}
