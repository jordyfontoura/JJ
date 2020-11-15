#include <stdlib.h>
#include <stdio.h>
#include "atalho.h"
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
    lerNumero("Digite o tamanho do vetor", &tamanho);
    printar("Vetor 1:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printar("Digite um o número[%d] do primeiro vetor: ", i);
        ler("%d", &entrada);
        vetor1[i] = entrada;
    }
    printar("Vetor 2:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printar("Digite um o número[%d] do primeiro vetor: ", i);
        ler("%d", &entrada);
        vetor2[i] = entrada;
    }
    resultado = produtoInterno(vetor1, vetor2, tamanho);
    printar("O produto interno: %d", resultado);
}