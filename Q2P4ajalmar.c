#include <stdio.h>
#include <stdlib.h>

int main() {
    int *n;
    double *numeros;    // Ponteiro para o bloco de memória
    double *ptr;        // Ponteiro navegador
    double *menor;      // Ponteiro para o menor valor
    double *maior;      // Ponteiro para o maior valor

    // Solicita a quantidade de números
    printf("Quantos números? ");
    scanf("%d", n);

    // Aloca memória dinamicamente
    numeros = (double *)malloc(*n * sizeof(double));
    if (numeros == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    // Preenche o array com números digitados pelo usuário
    printf("Digite %d números reais:\n", *n);
    for (ptr = numeros; ptr < numeros + *n; ptr++) {
        scanf("%lf", ptr);
    }

    // Inicializa ponteiros menor e maior com o endereço do primeiro elemento
    menor = numeros;
    maior = numeros;

    // Encontra o menor e o maior valor usando apenas ponteiros
    for (ptr = numeros + 1; ptr < numeros + *n; ptr++) {
        // Comparação de valores através de desreferência de ponteiros
        if (*ptr < *menor) {
            menor = ptr;  // Atualiza para apontar para novo menor valor
        }
        if (*ptr > *maior) {
            maior = ptr;  // Atualiza para apontar para novo maior valor
        }
    }

    // Exibe os resultados usando desreferência
    printf("Menor número: %.2lf\n", *menor);
    printf("Maior número: %.2lf\n", *maior);

    // Libera a memória alocada
    free(numeros);

    return 0;
}