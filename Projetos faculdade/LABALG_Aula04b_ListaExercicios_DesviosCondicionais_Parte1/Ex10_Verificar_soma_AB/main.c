#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	int num1 = 0, num2 = 0, num3 = 0;
	int soma = 0;
	
	//Entrada
	printf("----------Verificar (A + B) > C----------\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num3);
	
	//Processamento
	soma = num1 + num2;
	
	if(soma > num3){
		printf("\nA soma de A + B e maior que C");
	}else if (soma == num3){
		printf("\nA soma de A + B e igual a C");
	}else{
		printf("\nA soma de A + B e menor que C");
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
