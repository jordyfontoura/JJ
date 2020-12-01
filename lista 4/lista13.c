// Escreva um programa que leia uma string e chame uma função que recebe uma string e
// conta quantos caracteres uma string possui. (Não é para usar a função strlen()).
#include <stdio.h>

#define TAMANHO_MAXIMO 256

int tamanhoMensagem(char mensagem[]){
    int i;
    for (i = 0; i < TAMANHO_MAXIMO && mensagem[i] != '\0'; i++)
    {
    }
    return i;
}

int main(){
    int tamanho;
    char entrada[TAMANHO_MAXIMO];
    printf("Digite uma mensagem:");
    gets(entrada);
    tamanho = tamanhoMensagem(entrada) - 1; // -1 por conta do caracter LF (10 ASCII <=> break line) que é lido
    printf("O tamanho da mensagem: %d", tamanho);
}