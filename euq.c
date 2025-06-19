#include <stdio.h>


int main()
{
  int m,n, soma;
  scanf("%d", &m);
  scanf("%d", &n);
  int matriz[m][n];
  
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("matriz[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  soma = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(!((i + j) % 2)){
        printf("%d", matriz[i][j]);
        soma = soma + matriz[i][j]; 
      }
    }
  }

  printf("soma = %d\n", soma );

  return 0;
}