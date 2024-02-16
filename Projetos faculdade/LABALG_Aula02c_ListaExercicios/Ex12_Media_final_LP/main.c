#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis
	float NP1 = 0, atv1 = 0, ead1 = 0, av1 = 0;
	float NP2 = 0, atv2 = 0, ead2 = 0, av2 = 0, pluri = 0;
	float mediaFinal = 0;
	
	//Entrada
	printf("----------Calculado de media final----------\n\n");
	printf("NOTAS DA NP1\n");
	printf("Digite a nota de atividades: ");
	scanf("%f", &atv1);
	printf("Digite a nota do ead: ");
	scanf("%f", &ead1);
	printf("Digite a nota da avaliativa: ");
	scanf("%f", &av1);
	
	printf("\nNOTAS DA NP2\n");
	printf("Digite a nota de atividades: ");
	scanf("%f", &atv2);
	printf("Digite a nota do ead: ");
	scanf("%f", &ead2);
	printf("Digite a nota da avaliativa: ");
	scanf("%f", &av2);
	printf("Digite a nota da pluri: ");
	scanf("%f", &pluri);
	
	//Processamento
	NP1 = atv1 * 0.20 + ead1 * 0.20 + av1 * 0.60;
	NP2 = atv1 * 0.20 + ead1 * 0.20 + av1 * 0.40 + pluri * 0.20;
	mediaFinal = NP1 * 0.4 + NP2 * 0.6;
	
	//Saida
	printf("\nNota NP1: %.2f", NP1);
	printf("\nNota NP1: %.2f", NP2);
	printf("\nMedia final: %.2f", mediaFinal);
	printf("\n\n");
	
	system("pause");
	return 0;
}
