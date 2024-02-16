#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inicio = 4, fim = 200;
	
	printf("----------Multiplos de 4 entre 1 e 200----------\n\n");
	
	int i = 0;
	for(i = inicio;i <= fim;i+=4){
		printf("%d\n", i);
	}
	
	
	
	printf("\n\n");
	system("pause");
	return 0;
}
