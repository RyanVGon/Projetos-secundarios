#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double soma = 0;
	int i = 0;
	printf("----------Graos no tabuleiro----------\n\n");
	for(i = 0;i<64;i++){
		soma += pow(2,i);
	}
	
	printf("Foram colocado %.0f graos no tabuleiro", soma);
	printf("\n\n");
	system("pause");
	return 0;
}

