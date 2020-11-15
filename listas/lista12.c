#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "atalho.h"

int estaMaiusculo(char letra)
{
    return letra >= 'A' && letra <= 'Z';
}

// XD
int numeroLetrasMaiusuculas(char texto[])
{
    printf("%s", texto);
    int quantidade = 0;
    for (int i = 0; texto[i] != '\0'; i++)
        if (estaMaiusculo(texto[i]))
        {
            quantidade++;
        }
    return quantidade;
}

int main()
{
    int resultado;
    char entrada[50];
    fgets(entrada, 50, stdin);
    resultado = numeroLetrasMaiusuculas(entrada);
    printf("O texto tem %d letras maiusculas.", resultado);
}