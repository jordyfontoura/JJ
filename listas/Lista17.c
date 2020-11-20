#include <stdio.h>
#define rad 0.0174533


void converteRad(float x){
	float convertido;
	convertido = x*rad;
	printf("\n%.1f Graus em Radianos é igual a %f ", x, convertido);
}

int main(){
    float angulo;

    printf("informe o angulo ");
    scanf("%f", &angulo);

    converteRad(angulo);
}