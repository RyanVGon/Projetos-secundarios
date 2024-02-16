#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	int numeroInicial = 0, numeroFinal = 0;
	
	//Entrada
	printf("----------Par * 2, impar----------\n\n");
	printf("Digite o numero a ser testado: ");
	scanf("%d", &numeroInicial);
	
	//Processamento
	if(numeroInicial % 2){
		numeroFinal = numeroInicial - 3;
	}else{
		numeroFinal = numeroInicial * 2;
	}
	
	//Saida
	printf("\nO numero inicial e: %d", numeroInicial);
	printf("\nO numero final e: %d", numeroFinal);
	printf("\n\n");
	
	system("pause");
	return 0;
}
