#include <stdio.h>
#include <stdlib.h>

// Definição da struct Aluno
typedef struct {
    int codigo;
    char nome[50];
    float nota;
} Aluno;

int main() {
    // Vetor de 3 ponteiros para Aluno, inicialmente NULL
    Aluno *alunos[3] = {NULL, NULL, NULL};
    float somaNotas = 0.0;
    
    // Alocar memória e inserir dados para cada aluno
    for (int i = 0; i < 3; i++) {
        // Alocar memória para um novo aluno
        alunos[i] = (Aluno *)malloc(sizeof(Aluno));
        
        // Verificar se a alocação foi bem-sucedida
        if (alunos[i] == NULL) {
            printf("Erro na alocação de memória!\n");
            return 1;
        }
        
        // Preencher dados do aluno
        printf("\nAluno %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &alunos[i]->codigo);
        
        printf("Nome: ");
        scanf("%s", alunos[i]->nome);  // Nota: limita a 49 caracteres + '\0'
        
        printf("Nota: ");
        scanf("%f", &alunos[i]->nota);
        
        // Acumular nota para cálculo da média
        somaNotas += alunos[i]->nota;
    }
    
    // Imprimir os dados dos alunos
    printf("\nDados dos Alunos:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Código: %d\n", alunos[i]->codigo);
        printf("Nome: %s\n", alunos[i]->nome);
        printf("Nota: %.2f\n", alunos[i]->nota);
    }
    
    // Calcular e imprimir a nota média
    float media = somaNotas / 3;
    printf("\nNota média dos alunos: %.2f\n", media);
    
    // Liberar memória alocada
    for (int i = 0; i < 3; i++) {
        free(alunos[i]);
    }
    
    return 0;
}