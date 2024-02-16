#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 0, b = 0, c = 0, soma = 0, qtd = 0;
	int i = 0;
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	
	if(a > b){
		troca(&a,&b);
	}
	
	for(i = a;i<=b;i++){
		if((i%c) == 0){
			soma += i;
			qtd++;
		}
	}
	
	printf("%d numeros eram multiplos.\n", qtd);
	printf("e a soma foi: %d\n", soma);
	return 0;
}


void troca(float* xp, float* yp)
{
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}


