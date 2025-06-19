#include <stdio.h>

int main()
{
int metro;
int centimetro;
int decimetro;
int milimetro;
printf("digite o valor em metro que deseja transformar\n");
    scanf("%d" , &metro);
    decimetro = metro * 10;
    centimetro = metro * 100 ;
    milimetro = metro * 1000;
printf(" o valor de %d metros, em decimetro é de : %d \n", metro , decimetro);
printf(" o valor de %d metros, em centimetro é de : %d \n", metro , centimetro);
printf(" o valor de %d metros, em milimetro é de : %d \n", metro , milimetro);
return 0;
}