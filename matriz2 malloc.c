#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("diga o numero de colunas: ");
     int *c = malloc(sizeof(int));
      scanf("%d" , c);
    printf("diga o numero de linhas: ");
     int *l = malloc(sizeof(int));
      scanf("%d" , l);

            //gerador da matriz
    int **matriz = (int**)malloc(*c * sizeof(int**));
    for (int i = 0; i < *c; i++) {
        matriz[i] = malloc(*l * sizeof(int));
    }

            //alocação numerica;
    for (int i = 0; i < *c; i++){
        for (int j = 0; j < *l; j++) {
            printf("matriz[%d][%d]: " , i , j );
             scanf("%d" , &matriz[i][j]);
        }
        }

        //liberando a memoria

        for (int i = 0; i < *c; i++) {
            free(matriz[i]);
        }
        free(matriz);
        free(c);
        free(l);


    return 0;
}
