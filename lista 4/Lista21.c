/*
Faça um programa que leia e imprima uma matriz M inteira 5x5 de inteiros. Logo após,
chame uma função que recebe a matriz e imprime todos os elementos que estão em linhas pares
e colunas ímpares.
*/
#include <stdio.h>

void imprimirMatrizIndexParImpar(int matriz[5][5]){
    int linha, coluna;
    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            if (linha%2==0 && coluna%2==1)
            {
                printf("%d, ", matriz[linha][coluna]);
            }
            
        }
        printf("\n");
    }
    
}

int main(){
    int matriz[5][5];
    int linha, coluna;
    printf("Preencha a matriz 5x5:\n");
    for (linha = 0; linha < 5; linha++)
        for (coluna = 0; coluna < 5; coluna++)
        {
            printf("matriz[%d][%d] = ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    printf("Matriz:");
    for (linha = 0; linha < 5; linha++){
        for (coluna = 0; coluna < 5; coluna++)
        {
            printf("matriz[%d][%d] = %d", linha, coluna, matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("-----\n");
    imprimirMatrizIndexParImpar(matriz);
}