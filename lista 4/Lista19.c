//Faça um programa um caractere e chame uma função que receba o carácter como parâmetro e retorne 1 caso seja uma vogal, minúscula ou maiúscula, e 0 em caso contrário.

#include <stdio.h>
#include <stdlib.h>

int vogalMaMi(char x){

switch(x){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'u':
	case 'U':
	case 'o':
	case 'O':
		return 1;
	default:
		return 0;
	}

}

int main(){
	int i;
    char Carac;

    printf("informe uma Letra ");
    scanf("%c", &Carac);
	fgetc(stdin);

    i = vogalMaMi(Carac);

    if(i == 1)
        printf("\nVogal");
    else if(i == 0)
        printf("\n Não Vogal");
}