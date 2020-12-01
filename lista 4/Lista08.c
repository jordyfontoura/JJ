#include <stdlib.h>
#include <stdio.h>
#define TAMANHO_MAXIMO 100

int produtoInterno(int vetor1[], int vetor2[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor1[i] * vetor2[i];
    }
    return soma;
}

int main(){
    int tamanho, vetor1[TAMANHO_MAXIMO], vetor2[TAMANHO_MAXIMO], entrada, resultado;
    printf("Digite o tamanho do vetor");
    scanf("%d", &tamanho);
    printf("Vetor 1:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um o número[%d] do primeiro vetor: ", i);
        scanf("%d", &entrada);
        vetor1[i] = entrada;
    }
    printf("Vetor 2:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um o número[%d] do primeiro vetor: ", i);
        scanf("%d", &entrada);
        vetor2[i] = entrada;
    }
    resultado = produtoInterno(vetor1, vetor2, tamanho);
    printf("O produto interno: %d", resultado);
}