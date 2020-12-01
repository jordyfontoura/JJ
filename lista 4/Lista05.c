#include <stdio.h>

void testa_divisivel(int x,int y){
    if(x%y == 0)
        printf("\nDivisivel");
    else
        printf("\nNão divisivel");    
}

int main(){
    int x, y;

    printf("informe 2 numeros ");
    scanf("%d,%d", &x,&y);

    testa_divisivel(x,y);
}