#include <stdio.h>

 int main(){
   int c , l;
   int soma = 0;
   printf("diga a quantidade de colunas:");
    scanf("%d" , &c);
   printf("diga a quantiodade de linhas: \n");
    scanf("%d" ,&l );
   
       //gerador da matriz
    int matriz[c][l];
   for(int i = 0; i < c; i++){
      for(int j = 0; j < l; j++){
         printf("matriz[%d][%d]:" , i , j );
          scanf("%d" , &matriz [i][j]);
      }
   } 
         //teste de conta
         int maior = matriz[0][0];
         int seg_maior = matriz[0][0];

         //maior numero
   for(int i = 0; i < c; i++){
      for(int j = 0; j < l; j++){
         if(matriz[i][j] > maior){
            maior = matriz[i][j];
         }
      }
   }
         //menor numero
   for(int i = 0; i < c; i++){
      for(int j = 0; j < l; j++){
         if(matriz[i][j] > seg_maior && matriz[i][j] != maior){
            seg_maior = matriz[i][j];
         }
   }
}
   printf("maior numero da matriz:%d \n", maior);
   printf("segundo maior numero : %d", seg_maior);
   return 0;
 }