#include <stdio.h>

int main()
{
    double N1 ;
    double N2 ;
    double N3;
    double nota;
         printf("digite sua primeira nota\n");
           scanf("%lf" , &N1 );
          printf("digite sua segunda nota \n");
            scanf("%lf" , &N2);
          printf("digite sua terceira nota\n");
            scanf("%lf" , &N3);
nota = N1 + N2 + N3;
     if (nota > 30){
      printf("nota invalida, coloque os valores novamente! \n");
       return 0; }
double media;
media = nota / 3;
     if (media >= 7){
      printf("sua media de nota foi %.2lf \n" , media );
       printf("PARABENS, FOI APROVADO \n");
return 0;
}
     if (media <= 3){
       printf("sua media de nota foi %.2lf \n", media);
        printf("reprovado diretamente \n");
}
else{
    printf("sua media de nota foi %.2lf \n" , media);
     printf("o aluno deve fazer a prova final \n \n");
}
return 0;
}
