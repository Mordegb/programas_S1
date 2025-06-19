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
        //int somar = (tipo == 1);
        int subtrair = (tipo == 2);
        //int multiplicar = (tipo == 3);
        //int dividir = (tipo == 4);
        if (subtrair){
            int Qn;
            double N1;
            double N;
            double resultado;
            printf("quantos numeros deseja subtrair? :\n");
             scanf("%d", &Qn);
            printf("diga o N1:");
             scanf("%lf" , &N1); 
             for (int l=2; l <= Qn; l++)
             {
               printf("diga o N%d:" , l);
                scanf("%lf" , &N);
                N += N;
             }
             resultado = (N1 - N);
             printf("o resultado é = %.2lf \n" , resultado );
          return 0;
          }
}