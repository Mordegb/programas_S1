#include <stdio.h>
#include <math.h>
int main()
{
  // variaveis
    double a;
    double b;
    double c;
    double delta;
    double realpart , imagpart;
    // apresentação
    printf("================================\n");
    printf("resolvendo os problemas da Jorge \n");
    printf("================================\n \n");
    printf("diga o valor de A:");
    scanf("%lf" , &a);
    printf("diga o valor de b:");
    scanf("%lf" , &b);
    printf("diga o valor de c:");
    scanf("%lf" , &c);
    
    double b2 =  b * b ;
    double _b = b * (-b);
    delta = (b2 -  4 * a * c );
   
    printf(" delta = %lf \n \n", delta);
     
    // Raiz real dulpa
    if (delta == 0){
      double x1 = _b / (2 * a);
      printf("o valor de delta gera uma raiz real dupla, por ser igual a zero. \n");
      printf(" X = %.2lf \n" , x1);
      return 0;
    }
     
     // Raizes distintas
    if (delta > 0){
      printf("o valor de delta gera duas raizes reais distintas, por ser maior que zero. \n");
      double raiz_delta;
      double x1 , x2;
      raiz_delta = sqrt (delta);
      x1 = (_b + raiz_delta / 2 * a);
      x2 = (_b - raiz_delta / 2 * a);
      printf(" X = %lf \n" , x1);
      printf(" X = %lf" , x2);
      return 0;
     }
     
     //Raiz complexa
    if (delta < 0){
      double raiz_delta;
      raiz_delta = sqrt (delta);
      
      printf("o valor de delta gera duas raizes complexas conjugadas, por ser menor que zero. \n");
     realpart = _b / (2 * a);
     imagpart = raiz_delta / (2 * a);
     printf("x1 = %.2lf + %lf \n" , realpart , imagpart);
     printf("x1 = %.2lf - %lf \n" , realpart , imagpart);
     return 0;
    }

 return 0;
}