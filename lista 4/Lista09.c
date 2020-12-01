#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAXIMO 100
#define verdadeiro 1
#define falso 0


int somaInterna(int vetor[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

int main(){
    int vetor[TAMANHO_MAXIMO], entrada, tamanho, resultado;
    #pragma region Leitura
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("Digite um vetor:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o número[%d]: ", i);
        scanf("%d", &entrada);
        vetor[i] = entrada;
    }
    #pragma endregion
    resultado = somaInterna(vetor, tamanho);
    printf("Resultado: %d", resultado);
}