#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, i = 0, tamanho = 10, sair = 9;
	int resp = 0, contador = 0;
	float soma = 0, resp2 = 0;
	float valores[tamanho];
	
	srand(time(NULL));
	
	for(i=0;i<tamanho;i++){
		valores[i] = 0;
	}
	
	do{
		printf("..:: ALTURAS ::..\n");
		printf("1. Adicionar                \n");
		printf("2. Ler                      \n");
		printf("3. Somar                    \n");
		printf("4. Contar                   \n");
		printf("5. Contar vazio             \n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha:         ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				resp = 0;
				resp2 = 0;
				printf("Digite a posicao que deseja inserir: ");
				scanf("%d", &resp);
				if((resp >= tamanho) || (resp < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else{
					printf("Digite a altura desejada: ");
					scanf("%f", &resp2);
					valores[resp] = resp2;
				}
				printf("\n");
				
			break;
			
			case 2:
				resp = 0;
				printf("Digite a posicao que deseja ler: ");
				scanf("%d", &resp);
				if((resp >= tamanho) || (resp < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else{
					printf("Valor na posicao %d: %.2f\n", resp, valores[resp]);
					system("pause");
				}
				printf("\n");
			break;
			
			case 3:
				soma = 0;
				for(i=0;i<tamanho;i++){
					soma += valores[i];
				}
				printf("A soma foi de: %d\n\n", soma);
				system("pause");
			break;
			
			case 4:	
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(valores[i] > 0){
						contador++;
					}
				}
				printf("%d Alturas armazenadas\n", contador);
				system("pause");
				printf("\n");
			break;
			
			case 5:
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(valores[i] = 0){
						contador++;
					}
				}
				printf("%d Posicoes vazias\n", contador);
				system("pause");
				printf("\n");
			break;

		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
