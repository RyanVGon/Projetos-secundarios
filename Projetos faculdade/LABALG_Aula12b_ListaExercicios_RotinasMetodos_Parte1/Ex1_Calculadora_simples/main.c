#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float somar(float a, float b){
	return a + b;
}

float subtrair(float a, float b){
	return a - b;
}

float multiplicar(float a, float b){
	return a * b;
}

float dividir(float a, float b){
	return a / b;
}

float quadrado(float a){
	return a * a;
}

float raizQ(float a){
	return sqrt(a);
}






int main(int argc, char *argv[]) {
	int opcao = 0, i = 0, j = 0, sair = 9;
	float resposta1 = 0, resposta2 = 0, resultado = 0;
	
	do{
		printf("\n..:: CALCULADORA SIMPLES ::..\n");
		printf("1. Somar                    \n");
		printf("2. Subtrair                 \n");
		printf("3. Multiplicar              \n");
		printf("4. Dividir                  \n");
		printf("5. Quadrado                 \n");
		printf("6. Raiz quadrada            \n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				resposta1 = 0;
				resposta2 = 0;
				resultado = 0;
				
				printf("Digite o primeiro valor: ");
				scanf("%f", &resposta1);
				printf("Digite o segundo valor: ");
				scanf("%f", &resposta2);
				resultado = somar(resposta1,resposta2);
				
				printf("%.2f + %.2f = %.2f\n\n", resposta1, resposta2, resultado);
				system("pause");
			break;
			
			case 2:
				resposta1 = 0;
				resposta2 = 0;
				resultado = 0;
				
				printf("Digite o primeiro valor: ");
				scanf("%f", &resposta1);
				printf("Digite o segundo valor: ");
				scanf("%f", &resposta2);
				resultado = subtrair(resposta1,resposta2);
				
				printf("%.2f - %.2f = %.2f\n\n", resposta1, resposta2, resultado);
				system("pause");
			break;
			
			case 3:
				resposta1 = 0;
				resposta2 = 0;
				resultado = 0;
				
				printf("Digite o primeiro valor: ");
				scanf("%f", &resposta1);
				printf("Digite o segundo valor: ");
				scanf("%f", &resposta2);
				resultado = multiplicar(resposta1,resposta2);
				
				printf("%.2f * %.2f = %.2f\n\n", resposta1, resposta2, resultado);
				system("pause");
			break;
			
			case 4:
				resposta1 = 0;
				resposta2 = 0;
				resultado = 0;
				
				printf("Digite o primeiro valor: ");
				scanf("%f", &resposta1);
				printf("Digite o segundo valor: ");
				scanf("%f", &resposta2);
				resultado = dividir(resposta1,resposta2);
				
				printf("%.2f / %.2f = %.2f\n\n", resposta1, resposta2, resultado);
				system("pause");
			break;
			
			case 5:
				resposta1 = 0;
				resultado = 0;
				
				printf("Digite o primeiro valor: ");
				scanf("%f", &resposta1);
				
				resultado = quadrado(resposta1);
				
				printf("%.2f^2 = %.2f\n\n", resposta1, resultado);
				system("pause");
			break;
				
			case 6:
				resposta1 = 0;
				resultado = 0;
				
				printf("Digite o primeiro valor: ");
				scanf("%f", &resposta1);
				
				resultado = raizQ(resposta1);
				
				printf("sqrt(%.2f) = %.2f\n\n", resposta1, resultado);
				system("pause");
			break;
			
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
