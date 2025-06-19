#include <stdio.h>
int main()
{
     //variaveis
int numero;
int par = 0;
int impar = 0;
int resultado;
 
    //geral

    printf("diga o numero:");
     scanf("%d" , &numero);

     while (numero > 0)
     {
         resultado = numero % 10;
         if (resultado % 2 == 0)
            par++;
         else
            impar++;
        numero = numero / 10;
     }

   printf("seu numero tem %d pares e %d impares \n" , par , impar);
   
     return 0;
}