#include <stdlib.h>
#include <stdio.h>

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
    printf("Digite um número inteiro positivo:");
    scanf("%d", &numero);

    if (valorPerfeito(numero))
        printf("O número é perfeito.");
    else
        printf("O número é imperfeito.");
}