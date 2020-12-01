#include <stdio.h>
#include <string.h>
#define TAMANHO_MAXIMO 256


int testePalindromo(char mensagem[]){
    int i, f = strlen(mensagem) - 1;
    for (int i = 0; i < f; i++)
        if (mensagem[i] != mensagem[f--])
            return 0; // False
    return 1;         // True
}
int main(){
    char mensagem[TAMANHO_MAXIMO];
    printf("Digite um mensagem: ");
    gets(mensagem);
    if (testePalindromo(mensagem))
        printf("Sua mensagem é um palindromo.");
    else
        printf("Sua mensagem não é um palindromo.");
}