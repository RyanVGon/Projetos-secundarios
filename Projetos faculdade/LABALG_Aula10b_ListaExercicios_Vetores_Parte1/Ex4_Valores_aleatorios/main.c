#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, opcao1 = 0, i = 0, tamanho = 60, sair = 8;
	int soma = 0, contador = 0, resp = 0;
	int valores[tamanho];
	
	srand(time(NULL));
	
	for(i=0;i<tamanho;i++){
		valores[i] = 0;
	}
	
	do{
		printf("..:: VALORES ALEATORIOS ::..\n");
		printf("1. Zerar                    \n");
		printf("2. Carregar aleatorio       \n");
		printf("3. Imprimir                 \n");
		printf("4. Somar                    \n");
		printf("5. Valores impares          \n");
		printf("6. Maiores que              \n");
		printf("7. Quantos existem          \n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				for(i=0;i<tamanho;i++){
					valores[i] = -1;
				}
			break;
			
			case 2:
				for(i=0;i<tamanho;i++){
					valores[i] = rand() % 61;
				}
				printf("\n\n");
			break;
			
			case 3:
				for(i=0;i<tamanho;i++){
					printf("%do valor = %d\n", (i+1), valores[i]);
				}
				printf("\n");
			break;
			
			case 4:	
				soma = 0;
				for(i=0;i<tamanho;i++){
					soma += valores[i];
				}
				printf("A soma foi de: %d\n\n", soma);
			break;
			
			case 5:
				printf("Valores impares: ");
				for(i=0;i<tamanho;i++){
					if((valores[i] % 2) != 0){
						printf("%d ", valores[i]);
					}
				}
				printf("\n\n");
			break;
				
			case 6:
				resp = 0;
				printf("Escolha um valor para testar: ");
				scanf("%d", &resp);
				printf("Valores maiores que %d: ", resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] > resp){
						printf("%d ", valores[i]);
					}
				}
				printf("\n\n");
			break;
			
			case 7:
				resp = 0;
				contador = 0;
				printf("Escolha um valor para testar: ");
				scanf("%d", &resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] == resp){
						contador++;
					}
				}
				printf("Quantia de valores iguais a %d: %d\n\n", resp, contador);
			break;
			
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
