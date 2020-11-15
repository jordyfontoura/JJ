#include <stdio.h>

// Fat
int fat(int num)
{
    int i, x = 1;
    for (i = 1; i <= num; i++)
    {
        x = x * i;
    }
    return x;
}

int main()
{
    int num;

    printf("informe um numero ");
    scanf("%d", &num);

    printf("\nFatorial = %d", fat(num));
}