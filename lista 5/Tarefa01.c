#include <stdio.h>
#include <stdlib.h>
/*
1) Escreva um programa que leia um vetor com 20 números inteiros. Logo após, crie funções que:
	a) Receba como parâmetro o vetor lido e o tamanho n e inverta a ordem dos elementos armazenados nesse vetor. 
	Retorne ponteiro para o início do vetor invertido. Imprima o vetor invertido na main(). 
	Protótipo: int *inverteVetor (int* vet, int n);
	b) Receba como parâmetro o vetor lido e o tamanho n, 
	conte os pares e ímpares e retorne quantos números pares estão armazenados no vetor. 
	Imprima os valores calculados na main(). 
	Protótipo: int paresVetor (int* vet, int n, int *impar);
*/

int* inverteVetor(int *vet, int n){
	int i, j=n-1;
	int *vetinv = (int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){ 
		*(vetinv+i)=*(vet+j);
		j--;
	}
	return vetinv;
}

int paresVetor(int* vet, int n, int *impar){
	int i, par=0;

	for(i=0;i<n;i++){
		if(*(vet+i)%2 == 0){
			par += 1;
		} 
		else{
			*impar += 1;
		}
	}
	return par;
}

int main(){
	int i, *vetor, tamanho = 5, npares, nimpares=0;

	for(i=0;i<5;i++) // Mudar para leitura do teclado
		vetor[i] = i;

	vetor = inverteVetor(vetor, tamanho);
	npares = paresVetor(vetor, tamanho, &nimpares);

	for(i=0;i<tamanho;i++){
		printf("%d, ", vetor[i]);
	}

	printf("\n\n");

	printf("Quantidade de Pares %d\nQuantidade de impares %d", npares, nimpares);
}
