#include <stdlib.h>
#include <stdio.h>

int ler(char *texto, int *resultado)
{
    printf(texto);
    scanf("%d", resultado);
}
void lerTexto(char *texto, char *resultado)
{
    printf(texto);
    scanf("%s", resultado);
}
void print(char *texto)
{
    printf(texto);
}