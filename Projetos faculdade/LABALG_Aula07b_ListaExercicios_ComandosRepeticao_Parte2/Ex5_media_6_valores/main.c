#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soma = 0, valor = 0, media = 0;
	int i = 0;
	
	printf("----------Media 6 valores----------\n\n");
	for(i=0;i<6;i++){
		printf("Digite o %do numero: ", (i+1));
		scanf("%f", &valor);
		soma += valor;
	}
	media = soma / 6;
	printf("\nA soma foi de: %.2f\n", soma);
	printf("A media e de: %.2f", media);
	printf("\n\n");
	system("pause");
	return 0;
}
