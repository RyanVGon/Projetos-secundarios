#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float raio = 0, volume = 0, altura = 0;
	
	//Entrada
	printf("----------Calculadora do volume de um cilindro----------\n\n");
	printf("Digite o raio: ");
	scanf("%f", &raio);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	//Processamento
	volume = M_PI * pow(raio, 2) * altura;
	
	//Saida
	printf("O volume e: %.2f", volume);
	printf("\n\n");
	
	system("pause");
	return 0;
}
