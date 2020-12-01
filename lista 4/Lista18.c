#include <stdio.h>
#define grau 57.2958


void converteGrau(float x){
	float convertido;
	convertido = x*grau;

	printf("\n%.f Radiano em Graus é igual a %.2f", x, convertido);
}

int main(){
    float radiano;

    printf("informe o angulo ");
    scanf("%f", &radiano);

    converteGrau(radiano);
}