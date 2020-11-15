#include <stdlib.h>
#include <stdio.h>
#include "atalho.h"

int valorPerfeito(int valor)
{
    int soma = 0;
    for (int i = 1; i < valor; i++)
        if (i % valor == 0)
            soma += i;
    if (soma == valor)
        return 1;
    else
        return 0;
}
int main()
{
    int numero;
    ler("Digite um número inteiro positivo:", &numero);
    printf("Entrada: %d", numero);
    if (valorPerfeito(numero))
        print("O número é perfeito.");
    else
        print("O número é imperfeito.");
}