//  Faça um programa que leia uma matriz B 6x6 de reais e chame uma função que receba, por
//parâmetro, a matriz B e retorna a soma dos elementos da matriz B. Imprima o valor retornado.
#include<stdio.h>
#define TAMANHO_MAXIMO 256


void recebe_v(int Vetor[], int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("\n%d", Vetor[i]);
	}
}

int main(){
	int t, i, V[TAMANHO_MAXIMO];

	printf("Informe o tamanho do vetor ");
	scanf("%d", &t);

	for(i=0;i<t;i++){
		printf("Informe valores do vetor %d/%d\n", i,t);
		scanf("%d", &V[i]);
	}

	recebe_v(V,t);	
}