#include <stdio.h>

int main()
{
    {   
        printf("*******************************\n");
        printf("bem vindo ao jogo da advinhação\n");
        printf("*******************************\n \n");
    }   
    int valoroculto;
    
    valoroculto = 73;
    
    // jogo geral
    int i = 0;   
    int chute;
 while (chute != 73){
               i++;
               printf("tentativa %d: \n" , i);
     
               printf("digite um numero:");
                    scanf("%d", &chute);
               printf("\n");
               printf("seu chute foi %d \n", chute);
               int acertou;
                    acertou = (chute == valoroculto);
               if (chute < 0){
                    printf("considermos numeros negativos invalidos! \n");
               
                    continue; 
               }
               if (acertou){
                    printf("PARABENS VOCE DESCOBRIU O NUMERO SECRETO!, e com apenas %d tentativas.\n" , i);
               break; }

               if (chute > valoroculto) {
                    printf("tente um numero menor.\n \n");}
                    
               if (chute < valoroculto){
                    printf("tente um numero maior.\n \n");}
    }
     printf("Fim de jogo. \n");    
return 0;
}