#include <stdio.h>
#define TAMANHO_MAXIMO 256
/*
Escreva um programa que leia e imprima um vetor de inteiros e chame uma função quereceba um vetor de inteiros e seu tamanho e retorne o menor dos elementos do vetor. Imprima ovalor de retorno da função.

*/
int menorElemento(int elementos[], int tamanho){
    int menor = elementos[0];
    for (int i = 0; i < tamanho; i++)
        if (menor > elementos[i])
            menor = elementos[i];
    return menor;
}
int main(){
    // vetor[]={1,2,3} <<
    int vetor[50], tamanho, entrada, menor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("Defina o vetor de inteiros:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("vetor[%d] = ", i);
        scanf("%d", &entrada);
        vetor[i] = entrada;
    }
    menor = menorElemento(vetor, tamanho);
    printf("O menor elemento: %d", menor);
}