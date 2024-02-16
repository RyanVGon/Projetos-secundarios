#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeros[5] = {};
	int qtdPar = 0, qtdImpar = 0;
	
	printf("----------Quantidade de par e impar----------\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &numeros[0]);
	printf("Digite o segundo numero: ");
	scanf("%d", &numeros[1]);
	printf("Digite o terceiro numero: ");
	scanf("%d", &numeros[2]);
	printf("Digite o quarto numero: ");
	scanf("%d", &numeros[3]);
	printf("Digite o quinto numero: ");
	scanf("%d", &numeros[4]);
	
	int i = 0;
	for(i = 0;i < 5;i++){
		qtdPar += numPar(numeros[i]);
		qtdImpar += numImpar(numeros[i]);
	}
	
	printf("Foram digitados %d numeros par\n", qtdPar);
	printf("Foram digitados %d numeros impar\n", qtdImpar);
	if(qtdPar > qtdImpar){
		printf("e tinha mais numeros par entre eles\n\n");
	}else{
		printf("e tinha mais numeros impares entre eles\n\n");
	}
	
	system("pause");
	return 0;
}

int numPar(int a){
	if(a % 2 == 0){
		return 1;
	}
	return 0;
}

int numImpar(int a){
	if(a % 2 != 0){
		return 1;
	}
	return 0;
}
