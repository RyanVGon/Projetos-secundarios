#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, i = 0, temp = 0, tamanho = 100, sair = 11;
	int resp = 0, resp2 = 0, contador = 0;
	int soma = 0;
	int valores[tamanho];
	
	for(i=0;i<tamanho;i++){
		valores[i] = -1;
	}
	
	do{
		printf("..:: IDADES ::..\n");
		printf("1. Adicionar                \n");
		printf("2. Adicionar na posicao     \n");
		printf("3. Imprimir posicao         \n");
		printf("4. Imprimir todas           \n");
		printf("5. Remover idade            \n");
		printf("6. Remover todas            \n");
		printf("7. Contar idades            \n");
		printf("8. Somar idades             \n");
		printf("9. Somar idades impares     \n");
		printf("10. Imprimir idades pares   \n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				resp = 0;
				temp = -1;
				for(i=0;i<tamanho;i++){
					if(valores[i] == -1){
						temp = i;
						break;
					}
				}
				if(temp == -1){
					printf("\nVetor lotado\n\n\n");
					system("pause");
				}else{
					printf("Digite a idade a inserir: ");
					scanf("%d", &resp);
					valores[i] = resp;
				}	
			break;
			
			case 2:
				resp = 0;
				resp2 = 0;
				printf("Digite a posicao que deseja inserir: ");
				scanf("%d", &resp);
				if((resp >= tamanho) || (resp < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else if(valores[resp] != -1){
					printf("Posicao ocupada!!\n");
					system("pause");
				}else{
					printf("Digite a idade desejada: ");
					scanf("%d", &resp2);
					valores[resp] = resp2;
				}
				printf("\n");
			break;
			
			case 3:
				resp = 0;
				printf("Digite a posicao que deseja ler: ");
				scanf("%d", &resp);
				if((resp >= tamanho) || (resp < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else{
					printf("Valor na posicao %d: %d\n", resp, valores[resp]);
					system("pause");
				}
				printf("\n");
			break;
			
			case 4:
				for(i=0;i<tamanho;i++){
					if(valores[i] != -1){
						printf("%dA idade: %d\n", (i+1), valores[i]);
					}
				}
				system("pause");
				printf("\n");
			break;
			
			case 5:	
				resp = 0;
				printf("Digite a posicao que deseja remover: ");
				scanf("%d", &resp);
				if((resp >= tamanho) || (resp < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else if(valores[resp] == -1){
					printf("Posicao vazia!!\n");
					system("pause");
				}else{
					valores[resp] = -1;
				}
			break;
			
			case 6:
				for(i=0;i<tamanho;i++){
					valores[i] = -1;
				}
			break;
			
			case 7:
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(valores[i] != -1){
						contador++;
					}
				}
				printf("%d Idades cadastradas\n", contador);
				system("pause");
				printf("\n");
			break;
			
			case 8:
				soma = 0;
				for(i=0;i<tamanho;i++){
					if(valores[i] != -1){
						soma+=valores[i];
					}
				}
				printf("Soma das idades igual a %d\n", soma);
				system("pause");
				printf("\n");
			break;
			
			case 9:
				soma = 0;
				for(i=0;i<tamanho;i++){
					if((valores[i] != -1) && ((valores[i] % 2) != 0)){
						soma+=valores[i];
					}
				}
				printf("Soma das idades impares igual a %d\n", soma);
				system("pause");
				printf("\n");
			break;
			
			case 10:
				soma = 0;
				printf("Idades par: ");
				for(i=0;i<tamanho;i++){
					if((valores[i] % 2) == 0){
						printf("%d ", valores[i]);
					}
				}
				printf("\n");
				system("pause");
				printf("\n");
			break;
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
