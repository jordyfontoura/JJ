#include <stdio.h>
#include <math.h>

void cubos(int x){
	int i;
	printf("Sequencia de Cubos = ");
	for(i=1;i<x;i++){
		printf("%.0f, ", pow(i,3));
	}
}

int main(){
    int n;

    printf("informe 1 numeros ");
    scanf("%d", &n);

    cubos(n);
}