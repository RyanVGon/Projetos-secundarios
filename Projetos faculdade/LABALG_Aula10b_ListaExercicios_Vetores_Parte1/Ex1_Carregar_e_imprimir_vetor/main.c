#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idades[10], i = 0;
	
	for(i=0;i<10;i++){
		printf("Digite a idade: ");
		scanf("%d", &idades[i]);
	}
	
	for(i=0;i<10;i++){
		printf("%d idade = %d\n", (i+1), idades[i]);
	}
	
	system("pause");
	return 0;
}
