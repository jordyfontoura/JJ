#include <stdio.h>

int dobro(int x)
{
	return x * 2;
}

int main()
{
	int nun, i;

	for (i = 0; i < 3; i++)
	{
		printf("\nInforme um Numero: ");
		scanf("%d", &nun);
		printf("Dobro = %d", dobro(nun));
	}
}