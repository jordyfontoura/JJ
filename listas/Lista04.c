#include <stdio.h>


void primo(int num){
	int i=2;
	
	if(num == 2){
		printf("E Primo");
		i = num;
	}
	else if (num == 1 || num == 0){
		printf("Nao e Primo");
		i = num;
	}else{
        while(i<num){
            if(num%i == 0){
                printf("Nao e Primo");
                break;
            }
            else{
                i++;
            }
        }
        if(num == i)
            printf("E Primo");
    }

}

int main(){
	int num;

	printf("Informe um inteiro positivo ");
	scanf("%d", &num);
	primo(num);
}