#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor = 0;
	
	printf("----------Numero menor 3----------\n\n");
	printf("Digite o valor: ");
	scanf("%d", &valor);
	
	if(!(valor > 3)){
		printf("O valor e menor que 3\n\n");
	}else{
		printf("o valor e maior que 3\n\n");
	}
	
	system("pause");
	return 0;
}
