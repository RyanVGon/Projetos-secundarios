#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, opcao1 = 0, i = 0, j = 0, tamanho = 60, sair = 6;
	int soma = 0, contador = 0, resp1 = 0, resp2 = 0, temp = 0;
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
		printf("4. Entre valores            \n");
		printf("5. Valores repetidos          \n");
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
				resp1 = 0;
				resp2 = 0;
				printf("Escolha o 1o valor para testar: ");
				scanf("%d", &resp1);
				printf("Escolha o 2o valor para testar: ");
				scanf("%d", &resp2);
				
				if(resp1 > resp2){
					temp = resp1;
					resp1 = resp2;
					resp2 = temp;
				}
				
				printf("Valores dentro do intervalo %d - %d: ", resp1, resp2);
				for(i=0;i<tamanho;i++){
					if((valores[i] > resp1) && (valores[i] < resp2)){
						printf("%d ", valores[i]);
					}
				}
				printf("\n\n");
			break;
			
			case 5:
				printf("Valores repetidos: \n");
				for(i=0;i<tamanho;i++){
					contador = 0;
					for(j=0;j<tamanho;j++){
						if(i == valores[j]){
							contador++;
						}
					}
					if(contador >= 2){
						printf("%d = %d\n", valores[i], contador);
					}
				}
				printf("\n\n");
			break;
				
			
			
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
