#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, opcao1 = 0, i = 0, tamanho = 8, sair = 11;
	int idades[tamanho], soma = 0, contador = 0;
	
	
	for(i=0;i<tamanho;i++){
		idades[i] = 0;
	}
	
	
	do{
		printf("..:: IDADES ::..\n");
		printf("1. Zerar                    \n");
		printf("2. Carregar                 \n");
		printf("3. Imprimir                 \n");
		printf("4. Somar                    \n");
		printf("5. Pares                    \n");
		printf("6. Contar pares             \n");
		printf("7. Somar pares              \n");
		printf("8. Menores idades           \n");
		printf("9. Contar maiores idades    \n");
		printf("10. Somar maiores idades    \n");
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
				printf("Idades par: ");
				for(i=0;i<tamanho;i++){
					if(((idades[i] % 2) == 0) && (idades[i] != 0)){
						printf("%d ", idades[i]);
					}
				}
				printf("\n\n");
			break;
				
			case 6:
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(((idades[i] % 2) == 0) && (idades[i] != 0)){
						contador++;
					}
				}
				printf("%d idades eram par\n\n", contador);
			break;
			
			case 7:
				soma = 0;
				for(i=0;i<tamanho;i++){
					if((idades[i] % 2) == 0){
						soma += idades[i];
					}
				}
				printf("A soma das idades e: %d\n\n", soma);
			break;
			
			case 8:
				printf("Idades menor de 18: ");
				for(i=0;i<tamanho;i++){
					if(idades[i] < 18){
						printf("%d ", idades[i]);
					}
				}
				printf("\n\n");
			break;
			
			case 9:
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(idades[i] >= 18){
						contador++;
					}
				}
				printf("Numero de idades maior de 18: %d\n\n", contador);
			break;
			
			case 10:
				soma = 0;
				for(i=0;i<tamanho;i++){
					if(idades[i] >= 18){
						soma += idades[i];
					}
				}
				printf("Soma das idades maior de 18: %d\n\n", soma);
			break;
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
