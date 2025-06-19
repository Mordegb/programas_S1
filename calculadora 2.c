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
    if (somar){
        int Qn;
        double N;
        double resultado = 0;
        printf("quantos numros deseja somar? :\n");
         scanf("%d", &Qn); 
        
         for (int l=1; l <= Qn; l++)
         {printf("diga o n%d \n", l);
            scanf("%lf" , &N);
            resultado += N ;
         }
         
        printf("o resultado = %.2lf \n", resultado );
    return 0;
    }
    
    if (subtrair){
      int Qn;
      double N1;
      double N,N2 = 0;
      double resultado;
         printf("quantos numeros deseja subtrair? :\n");
          scanf("%d", &Qn);
         printf("diga o N1:");
          scanf("%lf" , &N1); 
      for (int l=2; l <= Qn; l++)
      {
         printf("diga o N%d:" , l);
          scanf("%lf" , &N);
          N2 += N;
      }
      resultado = (N1 - N2);
         printf("o resultado é = %.2lf \n" , resultado );
      return 0;
    }

    if (multiplicar){
       int Qn;
      double N1;
      double N,N2 = 0;
      double resultado;
         printf("quantos numeros deseja multiplicar? :\n");
          scanf("%d", &Qn);
         printf("diga o N1:");
          scanf("%lf" , &N1); 
      for (int l=2; l <= Qn; l++)
      {
         printf("diga o N%d:" , l);
          scanf("%lf" , &N);
          N2 += N;
      }
      resultado = (N1 * N2);
         printf("o resultado é = %.2lf \n" , resultado );
      return 0;
    }

    if (dividir){
       { printf("diga 2 numeros para dividir ");}
        double N1;
        double N2;
        double resultado4;
        printf("diga o n1: \n");
         scanf("%lf", &N1);
      
        printf("diga o n2: \n");
         scanf("%lf" , &N2);
       resultado4 = N1 / N2;
       printf("%.2lf / %.2lf = %.2lf" , N1 , N2 , resultado4 );
    return 0;
    }
    
    
     return 0;
}