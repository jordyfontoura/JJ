#include <stdio.h>
#define TAMANHO_MAXIMO 256
/*
Escreva um programa que leia uma string e um caractere qualquer e chame uma função que
recebe a string e o caractere lido conta o número de vezes que um determinado caractere
aparece numa string. Imprima o valor de retorno.
*/

int contarOcorrencia(char mensagem[], char letra){
    int ocorrencia = 0;
    for (int i = 0; i < TAMANHO_MAXIMO && mensagem[i] != '\0'; i++)
        if (mensagem[i] == letra)
            ocorrencia++;
    return ocorrencia;
}



int main(){
    char mensagem[TAMANHO_MAXIMO], letra;
    int ocorrencia;
    printf("Digite uma mensagem: ");
    gets(mensagem);
    printf("Digite uma letra:");
    scanf("%c", &letra);
    ocorrencia = contarOcorrencia(mensagem, letra);
    printf("A letra %c ocorre %d vezes na mensagem.", letra, ocorrencia);
}