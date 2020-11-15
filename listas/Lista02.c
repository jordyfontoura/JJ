#include <stdio.h>

float fmedia(int v1, int v2, int v3)
{
    float x;

    x = (v1 + v2 + v3) / 3.0;
    return x;
}

int main()
{
    int notas[3], i;
    float media = 0.0;

    for (i = 0; i < 3; i++)
    {
        printf("\nNota da %d prova ", i + 1);
        scanf("%d", &notas[i]);
    }

    media = fmedia(notas[0], notas[1], notas[2]);

    printf("Média das notas = %.2f", media);
}