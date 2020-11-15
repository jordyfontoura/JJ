#include <stdio.h>
#include <stdlib.h>
#include "atalho.h"
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
    printar("Digite o tamanho do vetor: ");
    ler("%d", &tamanho);
    printar("Digite um vetor:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printar("Digite o número[%d]: ", i);
        ler("%d", &entrada);
        vetor[i] = entrada;
    }
    #pragma endregion
    resultado = somaInterna(vetor, tamanho);
    printar("Resultado: %d", resultado);
}