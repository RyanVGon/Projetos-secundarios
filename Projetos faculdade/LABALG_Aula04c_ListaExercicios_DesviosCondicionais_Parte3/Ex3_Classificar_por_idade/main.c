#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade = 0;
	
	printf("----------Classificar por idade----------\n\n");
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	if(idade >= 0 && idade <= 10){
		printf("ola crianca");
	}else if(idade >= 11 && idade <= 14){
		printf("ola, voce e um(a) pre-adolescente");
	}else if(idade >= 15 && idade <= 18){
		printf("Parabens, voce ja pode ser um eleitor");
	}else if (idade >= 19 && idade <= 21){
		printf("hummm, voce ja e um adulto");
	}else if(idade > 21){
		printf("Bem, ja esta na hora de sair de casa e segui sua vida");
	}else{
		printf("Idade invalida");
	}
	
	
	printf("\n\n");
	system("pause");
	return 0;
}
