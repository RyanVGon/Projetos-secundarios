#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float nota1 = 0,nota2 = 0,nota3 = 0,nota4 = 0,media = 0;
	
	//Entrada
	printf("----------Calculadora de media semestral ponderada (10,20,30,40)----------\n");
	printf("Digite a nota de atividades presenciais: ");
	scanf("%f", &nota1);
	printf("Digite a nota de atividades online: ");
	scanf("%f", &nota2);
	printf("Digite a nota da prova1: ");
	scanf("%f", &nota3);
	printf("Digite a nota da prova2: ");
	scanf("%f", &nota4);
	
	//processamento
	media = nota1 * 0.1 + nota2 * 0.2 + nota3 * 0.3 + nota4 * 0.4;
	
	//saida
	printf("\nA media e: %.2f", media);
	printf("\n");
	
	system("pause");
	return 0;
}
