#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float numero = 0;
	
	printf("----------Tabuada----------\n\n");
	printf("Digite o numero que deseja: ");
	scanf("%f", &numero);
	
	float produto = 0;
	int i = 0;
	for(i = 1;i <= 10;i++){
		produto = numero * i;
		printf("%d x %.2f = %.2f\n", i, numero, produto);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
