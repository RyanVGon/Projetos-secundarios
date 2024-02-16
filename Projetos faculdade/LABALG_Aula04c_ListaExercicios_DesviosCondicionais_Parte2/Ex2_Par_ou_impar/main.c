#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero = 0;
	
	printf("----------Numero impar ou impar----------\n\n");
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("O numero %d e par\n\n", numero);
	}else{
		printf("O numero %d e impar\n\n", numero);
	}
	
	system("pause");
	return 0;
}
