#include <stdio.h>

int main() {

    int qn;    // cria o vetor
    printf("informe a quantidade de numero do array: ");
        scanf("%d" , &qn);
    float vetor[qn];

    for (int i = 0; i < qn; i++) {  //aloca os numero no array
        printf("vetor[%d]: " , i);
        scanf("%f", &vetor[i]);
        printf("\n");

    }
    float tst = vetor[0];

    for (int i = 0; i < qn - 1; i++) {  //ordena os valores em forma decrescente (infuncional)
        for (int j = 0; j < qn - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                tst = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = tst;
            }
        }
    }

    printf("\nValores ordenados (decrescente):\n");
    for (int i = 0; i < qn; i++) {
        printf(" %d - %.2f\n",i , vetor[i]);
    }

    
    return 0;
}