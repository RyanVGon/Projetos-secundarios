#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, opcao1 = 0, i = 0, tamanho = 8, sair = 11;
	int soma = 0, contador = 0;
	
	
	
	do{
		printf("..:: IDADES ::..\n");
		printf("1. Zerar                    \n");
		printf("2. Carregar                 \n");
		printf("3. Imprimir                 \n");
		printf("4. Somar                    \n");
		printf("5.                          \n");
		printf("6.                          \n");
		printf("7.                          \n");
		printf("8.                          \n");
		printf("9.                          \n");
		printf("10.                         \n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				for(i=0;i<tamanho;i++){
					idades[i] = 0;
				}
			break;
			
			case 2:
				for(i=0;i<tamanho;i++){
					printf("Digite a %da idade: ", (i+1));
					scanf("%d", &idades[i]);
				}
				printf("\n\n");
			break;
			
			case 3:
				for(i=0;i<tamanho;i++){
					printf("%da Idade = %d\n", (i+1), idades[i]);
				}
				printf("\n");
			break;
			
			case 4:	
				soma = 0;
				for(i=0;i<tamanho;i++){
					soma += idades[i];
				}
				printf("A soma foi de: %d\n\n", soma);
			break;
			
			case 5:
				
			break;
				
			case 6:
				
			break;
			
			case 7:
				
			break;
			
			case 8:
				
			break;
			
			case 9:
				
			break;
			
			case 10:
				
			break;
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
