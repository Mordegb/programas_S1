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
    
    int chute;
 for(int i = 1; i <=11; i++) {
          printf("tentativa %d de 11 \n" , i);    
               printf("digite um numero\n");
                    scanf("%d", &chute);
               printf("seu chute foi %d \n", chute);
               int acertou;
                    acertou = (chute == valoroculto);
               if (chute < 0){
                    printf("considermos numeros negativos invalidos! \n");
                    i--;
                    continue; 
               }

               if (acertou){
                    printf("PARABENS VOCE DESCOBRIU O NUMERO SECRETO!, so nao conte a ninguem em kkkkkkk \n");
               break; }

               if (chute > valoroculto) {
                    printf("tente um numero menor\n \n");}
                    
               if (chute < valoroculto){
                    printf("tente um numero maior\n \n");}
    }
     printf("Fim de jogo \n");    
return 0;
}