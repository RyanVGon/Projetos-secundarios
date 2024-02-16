#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float numero1 = 0, numero2 = 0, diferenca = 0;
	
	//Entrada
	printf("----------Diferenca de dois valores----------\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	//Processamento
	if(numero1 > numero2){
		diferenca = numero1 - numero2;
	}else{
		diferenca = numero2 - numero1;
	}
	
	//Saida
	printf("\nA diferenca entre os dois numeros e de: %.2f", diferenca);
	
	printf("\n\n");
	system("pause");
	return 0;
}
