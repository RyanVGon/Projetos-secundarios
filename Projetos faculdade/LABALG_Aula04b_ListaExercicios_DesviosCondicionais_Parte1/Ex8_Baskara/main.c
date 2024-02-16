#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float a = 0, b = 0, c = 0, delta = 0, raiz1 = 0, raiz2 = 0;
	
	//Entrada
	printf("----------Calculadora baskara----------\n\n");
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	if(a == 0){
		printf("Nao e uma equacao do segundo grau valida");
		printf("\n\n");
		system("pause");
		return 0;
	}
	
	//Processamento
	delta = pow(b,2) - 4 * a * c;
	
	//Saida
	if(delta < 0){
		printf("Delta e negativo, nao ha raizes");
		printf("\n\n");
		system("pause");
		return 0;
	}
	
	delta = sqrt(delta);
	raiz1 = (-b + delta) / (2 * a);
	raiz2 = (-b - delta) / (2 * a);
	
	if (delta == 0){
		printf("Delta possui duas raizes reais e iguais de valor: %g", raiz1);
	} else{
		printf("\nPrimeira raiz: %.2f", raiz1);
		printf("\nSegunda raiz: %.2f", raiz2);
	}
	
	
	
	
	printf("\n\n");
	system("pause");
	return 0;
}
