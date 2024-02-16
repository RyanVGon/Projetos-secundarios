#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float nota1 = 0,nota2 = 0,nota3 = 0,media = 0;
	
	//Entrada
	printf("----------Calculadora de media ponderada (20,30,50)----------\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	//processamento
	media = nota1 * 0.2 + nota2 * 0.3 + nota3 * 0.5;
	
	//saida
	printf("\nA media e: %.2f", media);
	printf("\n");
	
	system("pause");
	return 0;
}
