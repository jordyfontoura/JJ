/*
Faça um programa que leia uma matriz A 5x5 de reais e chame uma função que receba,
por parâmetro, a matriz A e retorna a média aritmética dos elementos abaixo da diagonal
principal. Imprima o valor retornado.
*/
#include <stdio.h>


int somaMatriz(int matriz[6][6]){
    int linha, coluna, contador = 0, soma = 0;
    for (linha = 0; linha < 6; linha++)
    {
        for (coluna = 0; coluna < 6; coluna++)
        {
            soma += matriz[linha][coluna];
        }
    }
    return soma;
}


int main(){
    int matriz[6][6];
    int linha, coluna, soma;
    printf("Preencha a matriz 6x6:\n");
    for (linha = 0; linha < 6; linha++){
        for (coluna = 0; coluna < 6; coluna++){
           printf("matriz[%d][%d] = ", linha, coluna);
          scanf("%d", &matriz[linha][coluna]);
        }
				printf("\n");
    }
    soma = somaMatriz(matriz);
    printf("A soma dos elementos da Matriz: %d", soma);
}