#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float soma = 0, valor = 0, media = 0;
	int quantidade = 0;
	
	printf("----------Media de n valores----------\n\n");
	do{
		printf("Digite o proximo numero: ");
		scanf("%f", &valor);
		if(valor >= 0){
			soma += valor;
			quantidade++;
		}
	}while(valor >= 0);
		
	if(quantidade > 0){
		media = soma / quantidade;
		printf("\nA soma foi de: %.2f\n", soma);
		printf("A media e de: %.2f", media);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
