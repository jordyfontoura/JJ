#include <stdio.h>
#include <stdlib.h>
#include "atalho.h"
#define TAMANHO_MAXIMO 100
#define verdadeiro 1
#define falso 0

int main(){
    int resultado = 0, vetor[TAMANHO_MAXIMO], entrada, k = 0;
    #pragma region Leitura
    printar("Digite um vetor:\n");
    printar("Digite \"-1\" para terminar.\n");
    while(verdadeiro)
    {
        printar("Digite o número[%d]: ", k);
        ler("%d", &entrada);
        if (entrada == -1)
            break;
        vetor[k++] = entrada;
    }
    #pragma endregion
    #pragma region Soma
    for (int i = 0; i < k; i++)
    {
        resultado += vetor[i];
    }
    #pragma endregion
    printar("Resultado: %d", resultado);
}