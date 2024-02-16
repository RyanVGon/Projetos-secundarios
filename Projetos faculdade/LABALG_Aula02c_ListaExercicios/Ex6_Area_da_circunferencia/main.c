#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//variaveis
	float raio = 0, area = 0;
	
	//entrada
	printf("----------Area da circunferencia----------\n\n");
	printf("Digite o raio da circunferencia: ");
	scanf("%f", &raio);
	
	//processamento
	area = M_PI * pow(raio,2);
	
	//saida
	printf("\nA area e: %.2f", area);
	printf("\n\n");
	
	system("pause");
	return 0;
}
