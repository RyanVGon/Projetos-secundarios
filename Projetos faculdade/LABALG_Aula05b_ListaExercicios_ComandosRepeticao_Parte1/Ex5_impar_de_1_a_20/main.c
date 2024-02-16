#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inicio = 1, fim = 20;
	
	printf("----------impares de 0 a 20----------\n\n");
	
	int i = 0;
	for(i = inicio;i <= fim;i += 2){
		printf("%d\n", i);
	}
	
	
	
	printf("\n\n");
	system("pause");
	return 0;
}
