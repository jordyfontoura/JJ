#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAXIMO 100
#define verdadeiro 1
#define falso 0

int main(){
    int resultado = 0, vetor[TAMANHO_MAXIMO], entrada, k = 0;
    printf("Digite um vetor:\n");
    printf("Digite \"-1\" para terminar.\n");
    while(verdadeiro)
    {
        printf("Digite o número[%d]: ", k);
        scanf("%d", &entrada);
        if (entrada == -1)
            break;
        vetor[k++] = entrada;
    }
    for (int i = 0; i < k; i++)
    {
        resultado += vetor[i];
    }
    printf("Resultado: %d", resultado);
}