#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0, F = 0;
	
	printf("----------Conversao de graus----------\n\n");
	for(i=10;i<=100;i+=10){
		F = i * 1.8 + 32;
		printf("%d C - %d F\n",i, F);
	}
	
	
	printf("\n\n");
	system("pause");
	return 0;
}


