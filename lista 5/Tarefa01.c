#include <stdio.h>
/*
1) Escreva um programa que leia um vetor com 20 números inteiros. Logo após, crie funções que:
	a) Receba como parâmetro o vetor lido e o tamanho n e inverta a ordem dos elementos armazenados nesse vetor. 
	Retorne ponteiro para o início do vetor invertido. Imprima o vetor invertido na main(). 
	Protótipo: int inverteVetor (int vet, int n);
	b) Receba como parâmetro o vetor lido e o tamanho n, 
	conte os pares e ímpares e retorne quantos números pares estão armazenados no vetor. 
	Imprima os valores calculados na main(). 
	Protótipo: int paresVetor (int* vet, int n, int *impar);
*/

int* inverteVetor(int *vet, int n){
	int i, j=n-1;
	int *vetinv = (int*)malloc(4 * n);
	for(i=0;i<n;i++){ 
		*(vetinv+i)=*(vet+j);
		j--;
	}
	return vetinv;
}

int paresVetor(int* vet, int n, int *impar){
	return 0;
}

int main(){
	int i, vetor[5], tamanho = 5, npares, nimpares;

	for(i=0;i<5;i++) // Mudar para leitura do teclado
		vetor[i] = i;

	inverteVetor(vetor, tamanho);
	npares = paresVetor(vetor, tamanho, &nimpares);
}