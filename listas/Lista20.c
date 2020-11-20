// Faça um programa que leia um vetor de inteiros positivos e um vetor de caracteres de
// mesmo tamanho e chame uma função que receba um vetor de inteiros positivos, um vetor de
// caracteres e o tamanho dos dois vetores. A função deve imprimir cada um dos caracteres do 2o
// vetor n vezes, onde n é o conteúdo da posição i correspondente no vetor de inteiros.
#include <stdio.h>
#define TAMANHO_MAXIMO 256

void multiplicadorLetras(int numeros[], char letras[], int tamanho){
    int i, j;
    for (i = 0; i < tamanho; i++)
        for (j = 0; j < numeros[i]; j++)
            printf("%c", letras[i]);
}


int main(){
    int vetorInt[TAMANHO_MAXIMO],i;
    char vetorLetras[TAMANHO_MAXIMO];
    int tamanho;
    scanf("%d", &tamanho);
    printf("Vetor de inteiros:\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("vetorInt[%d] = ", i);
        scanf("%d", &vetorInt[i]);
    }
    getc(stdin);
    printf("Vetor de letras:\n");
    for (i = 0; i < tamanho; i++)
    {
        printf("vetoLetras[%d] = ", i);
        scanf("%c", &vetorLetras[i]);
        getc(stdin);
    }
    multiplicadorLetras(vetorInt, vetorLetras, tamanho);
}