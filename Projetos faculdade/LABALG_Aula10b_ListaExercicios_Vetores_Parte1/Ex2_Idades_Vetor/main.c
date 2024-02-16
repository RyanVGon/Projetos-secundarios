#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, opcao1 = 0, i = 0;
	float mensalidades[10], soma = 0;
	
	
	for(i=0;i<10;i++){
		mensalidades[i] = 0;
	}
	
	
	do{
		printf("..:: MENSALIDADES ::..\n");
		printf("1. Zerar              \n");
		printf("2. Carregar           \n");
		printf("3. Imprimir           \n");
		printf("4. Somar              \n");
		printf("9. Sair               \n");
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                      \n");
		
		switch (opcao){
			case 1:
				for(i=0;i<10;i++){
					mensalidades[i] = 0;
				}
			break;
			case 2:
				for(i=0;i<10;i++){
					printf("Digite a %da mensalidade: ", (i+1));
					scanf("%f", &mensalidades[i]);
				}
			break;
			case 3:
				for(i=0;i<10;i++){
					printf("%da Mensalidade = %.2f\n", (i+1), mensalidades[i]);
				}
				printf("\n");
			break;
			case 4:	
				soma = 0;
				for(i=0;i<10;i++){
					soma += mensalidades[i];
				}
				printf("A soma foi de: %.2f\n\n", soma);
			break;
		}
		
		
	}while(opcao != 9);
	
	system("pause");
	return 0;
}
