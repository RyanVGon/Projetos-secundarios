#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float peso = 0, altura = 0, imc = 0;
	
	printf("----------Calculadora de IMC----------\n\n");
	printf("Digite o peso: ");
	scanf("%f", &peso);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	imc = peso / pow(altura, 2);
	
	printf("O imc e igual a: %.2f\n", imc);
	
	if(imc < 18.5){
		printf("Abaixo do peso normal");
	}else if(imc <= 24.9){
		printf("Peso normal");
	}else if(imc <= 29.9){
		printf("Excesso de peso");
	}else if(imc <= 34.9){
		printf("Obesidade Clase I");
	}else if(imc <= 39.9){
		printf("Obesidade Classe II");
	}else if(imc >= 40){
		printf("Obesidade Classe III");
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
