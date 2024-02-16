#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int soma = 0, inicio = 2, fim = 500;
	/* 
		esse problema pode ser resolvido usando apenas matematica
		inicio = 2;
		fim = 500;
		tamanho = 250; <- o tamanho se deve por pedir apenas os numeros pares
		soma = (inicio + fim)*tamanho/2;
	*/
	
	printf("----------soma de pares entre 1 e 500----------\n\n");
	
	int i = 0;
	for(i = inicio;i <= fim;i+=2){
		soma += i;
	}
	
	printf("A soma e igual a: %d", soma);
	
	printf("\n\n");
	system("pause");
	return 0;
}
