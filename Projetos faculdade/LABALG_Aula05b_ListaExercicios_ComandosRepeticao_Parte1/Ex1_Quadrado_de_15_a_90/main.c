#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("----------Quadrado de 15 a 90----------\n\n");
	
	int i = 15;
	for(i = 15;i <= 90; i++){
		int quadrado = pow(i,2);
		printf("%d: %d\n", i, quadrado);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
