#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define verdadeiro 1
#define falso 0

#define printar printf
#define ler scanf
/*
    Equivalente a:{
        printf("Arg1");
        scanf("%d", &Arg2);
    }
*/
int lerNumero(char *texto, int *resultado)
{
    printf(texto);
    scanf("%d", resultado);
}
void lerTexto(char *texto, char *resultado, int maximo)
{
    printf(texto);
    fgets(resultado, maximo, stdin);
}

void print(char *texto)
{
    printf(texto);
}