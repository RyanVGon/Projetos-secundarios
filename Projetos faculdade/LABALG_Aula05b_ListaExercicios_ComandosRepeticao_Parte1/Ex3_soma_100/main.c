#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int soma = 0, inicio = 1, fim = 100;
	/* 
		esse problema pode ser resolvido usando apenas matematica
		soma = (inicio + fim)*tamanho/2;
	*/
	
	printf("----------soma de 0 a 100----------\n\n");
	
	int i = 0;
	for(i = inicio;i <= fim;i++){
		soma += i;
	}
	
	printf("A soma e igual a: %d", soma);
	
	printf("\n\n");
	system("pause");
	return 0;
}
