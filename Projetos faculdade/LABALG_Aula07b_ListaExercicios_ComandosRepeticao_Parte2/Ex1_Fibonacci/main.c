#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 0, b = 1, c = 0;
	int i = 0;
	
	printf("%d %d ", a, b);
	
	for(i=0;i<13;i++){
		c = a + b;
		troca(&a,&b);
		b = c;
		printf("%d ", c);
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}

int troca(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
