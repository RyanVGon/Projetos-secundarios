#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i = 0, tamanho = 10, resp = 0, temp = 0, sair = 6, opcao = 0, contador = 0;
	int ra[tamanho];
	
	srand(time(NULL));
	
	for(i=0;i<tamanho;i++){
		ra[i] = -1;
	}
	
	
	do{
		printf("..:: RA Alunos ::..         \n");
		printf("1. Adicionar                \n");
		printf("2. Remover                  \n");
		printf("3. Imprimir posicao         \n");
		printf("4. Imprimir todos           \n");
		printf("5. Contar                   \n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				resp = 0;
				temp = -1;
				for(i=0;i<tamanho;i++){
					if(ra[i] == -1){
						temp = i;
						break;
					}
				}
				
				if(temp != -1){
					printf("Digite o RA a inserir: ");
					scanf("%d", &resp);
					ra[temp] = resp;
					break;
				}
				else{
					printf("\nVetor lotado\n\n\n");
					system("pause");
				}
				
				
				
			break;
			
			case 2:
				resp = 0;
				printf("Digite o RA a ser deletado: ");
				scanf("%d", &resp);
				for(i=0;i<tamanho;i++){
					if(ra[i] == resp){
						ra[i] = -1;
					}
				}
				printf("\n");
			break;
			
			case 3:
				resp = 0;
				temp = 1;
				printf("Digite o RA a ser procurado: ");
				scanf("%d", &resp);
				for(i=0;i<tamanho;i++){
					if(ra[i] == resp){
						printf("O RA esta na posicao %d\n", i);
						temp = 0;
					}
				}
				if(temp == 1){
					printf("O RA nao existe\n");
				}
				system("pause");
				printf("\n");
			break;
			
			case 4:	
				for(i=0;i<tamanho;i++){
					printf("%do RA = %d\n", (i+1), ra[i]);
				}
				system("pause");
				printf("\n");
			break;
			
			case 5:
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(ra[i] != -1){
						contador++;
					}
				}
				printf("%d RA no vetor\n", contador);
				system("pause");
				printf("\n\n");
			break;
		
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
