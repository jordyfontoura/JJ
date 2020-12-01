#include <stdio.h>

void inverteVetor(int vet[], int n){
	int i, j=n-1;
	int T[n-1];
	for(i=0;i<n;i++){
		T[i]=*(vet+j);
		j--;
	}
	for(i=0;i<n;i++){
		printf("%d ", T[i]);
	}
}


int main(){
	int i, vetor[5], tamanho = 5;

	for(i=0;i<5;i++){ // Mudar para leitura do teclado
		vetor[i] = i;
	}

	for(i=0;i<5;i++){
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
	inverteVetor(vetor, tamanho);
}

