#include <stdio.h>

int main()
{
  int tipo;
  //apresentação
  printf("================================\n");
  printf("seja bem vindo a calculadora \n");
  printf("================================\n \n");
  printf("digite um numero para o tipo de conta: \n");
  printf(" 1 = soma , 2  = subtração , 3 = multiplicar ,4 = dividir \n");
        scanf("%d" , &tipo);
        int somar = (tipo == 1);
        int subtrair = (tipo == 2);
        int multiplicar = (tipo == 3);
        int dividir = (tipo == 4);  
        
        if (multiplicar){
        
          {printf("diga 2 numeros para multiplicar \n");}
        double N1;
        double N2;
        double resultado3;
        printf("diga o n1: ");
         scanf("%lf", &N1);
       
        printf("diga o n2: ");
         scanf("%lf" , &N2);
       resultado3 = N1 * N2;
       printf("%.2lf x %.2lf = %.2lf" , N1 , N2 , resultado3 );
    return 0;
    }
}