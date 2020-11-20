/*
Faça um programa que leia uma matriz A 5x5 de reais e chame uma função que receba,
por parâmetro, a matriz A e retorna a média aritmética dos elementos abaixo da diagonal
principal. Imprima o valor retornado.
*/
#include <stdio.h>


float mediaMatriz(float matriz[5][5]){
    int linha, coluna, contador = 0;
    float media = 0.0;
    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < linha; coluna++)
        {
            media += matriz[linha][coluna];
            contador++;
        }
    }
    return media / contador;
}


int main(){
    float matriz[5][5];
    int linha, coluna;
    float media;
    printf("Preencha a matriz 5x5:\n");
    for (linha = 0; linha < 5; linha++)
        for (coluna = 0; coluna < 5; coluna++)
        {
            printf("matriz[%d][%d] = ", linha, coluna);
            scanf("%f", &matriz[linha][coluna]);
        }
    media = mediaMatriz(matriz);
    printf("A media abaixo da diagonal: %.2f", media);
}