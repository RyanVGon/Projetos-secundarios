#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	char unidade = 'C', unidadeConvertida = 'F';
	float temperatura = 0, conversao = 0;
	
	//entrada
	printf("----------Conversao de temperatura Celsius/Fahrenheit----------\n\n");
	Inicio_entrada:
	printf("Qual a unidade sendo convertida?\nCelsiu(C) ou Fahrenheit(F): ");
	scanf("%c", &unidade);
	printf("\nDigite a temperatura: ");
	scanf("%f", &temperatura);
	
	//processamento
	if(tolower(unidade) == 'c'){
		conversao = (temperatura * 9 / 5) + 32;
		unidadeConvertida = 'F';
	}else if(tolower(unidade) == 'f'){
		conversao = (temperatura - 32) * 5 / 9;
		unidadeConvertida = 'C';
	}else{
		printf("Unidade invalida!!");
		system("pause");
		return 0;
	}
	
	
	//saida
	printf("%.2f", temperatura);
	printf(" %c", toupper(unidade));
	printf(" e igual a %.2f", conversao);
	printf(" %c", toupper(unidadeConvertida));
	printf("\n\n");
	
	system("pause");
	return 0;
}
