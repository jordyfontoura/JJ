/*
a) Função somaElem – recebe dois vetores de inteiros de mesmo tamanho, calcula e
retorna o valor da soma dos elementos entre os dois vetores;
b) Função produtoInt– função que recebe dois vetores de inteiros de mesmo
tamanho e calcula e retorna o valor do produto interno entre os vetores (Ex: Sejam
v={1,2,3} e w={4,5,6} então o prodint=14 + 25 + 3*6 = 4+10+18=32);
c) Função testaIgual – recebe um número inteiro n e os dois vetores de inteiros de
mesmo tamanho e retorna a quantidade de elementos que são iguais nos dois vetores.
d) Na main(), ler dois vetores com n elementos inteiros, chamar as funções e,
usando o retorno das funções, imprimir a soma dos elementos dos vetores, o valor do
produto interno entre os vetores e quantidade de elementos que são iguais nos dois
vetores.
*/
#include <stdio.h>
#define TAMANHO_MAXIMO 1024


int somaElem(int vetor1[], int vetor2[], int tamanho){
    // a) Função somaElem – recebe dois vetores de inteiros de mesmo tamanho, calcula e retorna o valor da soma dos elementos entre os dois vetores;
    int i, somaVetor=0;

    for(i=0;i<tamanho;i++){
        somaVetor = somaVetor + vetor1[i] + vetor2[i];
	}
    return somaVetor;
}

// [1,0,3] [0,1,2] = 2 || 0

int testaIgual2(int vetor1[], int vetor2[], int tamanho){
    int i,j,k,c=0, quantidade=0;
    int Dic[]={0,0,0,0,0,0};
    // [1,0,3] [0,1,2] = 2 || 0
    // [1,0,2] [1,1,4] = 1 / 2
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            if(vetor1[i] == vetor2[j]){
                for(k=0;k<tamanho;k++)
                    if(vetor2[j] == Dic[k]){
                        k=tamanho;
                    }else{
                        if (vetor2[j] != Dic[k] && k == tamanho - 1)
                        {
                            Dic[c] = vetor2[j];
                            c++;
                        }
                    }
            }
        }
    }
}

int testaIgual0(int vetor1[], int vetor2[], int tamanho){
    int i, quantidade=0;
    for(i=0;i<tamanho;i++)
        if(vetor1[i] == vetor2[i])
            quantidade++;
    return quantidade;
}
/*
Função produtoInt– função que recebe dois vetores de inteiros de mesmo
tamanho e calcula e retorna o valor do produto interno entre os vetores (Ex: Sejam
v={1,2,3} e w={4,5,6} então o prodint=14 + 25 + 3*6 = 4+10+18=32);
*/
int produtoInt(int vetor1[], int vetor2[], int tamanho){
    int resultado = 0, i;
    for (i = 0; i < tamanho; i++)
        resultado += vetor1[i] * vetor2[i];
    return resultado;
}

/*
Na main(), ler dois vetores com n elementos inteiros, chamar as funções e,
usando o retorno das funções, imprimir a soma dos elementos dos vetores, o valor do
produto interno entre os vetores e quantidade de elementos que são iguais nos dois
vetores.
*/

int main(){
    int vetor1[TAMANHO_MAXIMO], vetor2[TAMANHO_MAXIMO], tamanho=0, soma, prodInt, quantidadeElementosIguais;
    printf("Digite o número de elementos: ");
    scanf("%d", &tamanho);
    printf("Vetor 1:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Vetor1[%d] = ", i);
        scanf("%d", &vetor1[i]);
    }
    printf("Vetor 2:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("Vetor2[%d] = ", i);
        scanf("%d", &vetor2[i]);
    }
    soma = somaElem(vetor1, vetor2, tamanho);
    quantidadeElementosIguais = testaIgual0(vetor1, vetor2, tamanho);
    // quantidadeElementosIguais = testaIgual2(vetor1, vetor2, tamanho);
    prodInt = produtoInt(vetor1, vetor2, tamanho);
    printf("Soma = %d\n", soma);
    printf("Produto Interno = %d\n", prodInt);
    printf("Quantidade de Elementos Iguais = %d\n", quantidadeElementosIguais);
}