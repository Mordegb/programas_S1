#include <stdio.h>
#include <stdlib.h>

int main() {
    float novo_valor, soma = 0.0, valor;
    FILE *arquivo;
    int existe_arquivo = 1;

    // Solicita o valor ao usuário
    printf("Digite um valor real: ");
    scanf("%f", &novo_valor);

    // Tenta abrir o arquivo em modo leitura/escrita binária
    arquivo = fopen("meuarquivo.bin", "rb+");
    
    // Se o arquivo não existir
    if (arquivo == NULL) {
        existe_arquivo = 0;
        // Cria um novo arquivo em modo escrita/leitura binária
        arquivo = fopen("meuarquivo.bin", "wb+");
        if (arquivo == NULL) {
            perror("Erro ao criar arquivo");
            return 1;
        }
    } else {
        // Lê e soma os valores existentes
        fseek(arquivo, 0 , SEEK_END);
        int tamanho = (int)ftell(arquivo) / sizeof(float);
         for (int i = 0; i < tamanho; i++)
        {
             fseek(arquivo, i * sizeof(float), SEEK_SET);
            fread(&valor, sizeof(float), 1, arquivo);
            soma += valor;
             printf("%.2f \n" ,valor);
        }
    }

    // Verifica se a soma ultrapassa 30.0
    if (soma > 30.0) {
        printf("Soma dos valores (%.2f) excede 30.0. Inserção cancelada.\n", soma);
        fclose(arquivo);
        return 0;
    }

    // Insere o valor conforme o cenário
    if (existe_arquivo) {
        // Arquivo existente: insere no final
        fseek(arquivo, 0, SEEK_END);
        fwrite(&novo_valor, sizeof(float), 1, arquivo);
    } else {
        // Novo arquivo: insere no início
        fwrite(&novo_valor, sizeof(float), 1, arquivo);
    }

    fclose(arquivo);
    printf("Valor %.2f inserido com sucesso!\n", novo_valor);
    return 0;
}
