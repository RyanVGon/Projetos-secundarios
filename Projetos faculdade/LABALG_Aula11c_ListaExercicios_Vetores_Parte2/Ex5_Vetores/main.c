#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, i = 0, tamanho = 10, sair = 99, contador = 0;
	int resp = 0, maior = 0, menor = 0, media = 0;
	char maiorVet;
	int somaA = 0, somaB = 0;
	int contadorA = 0, contadorB = 0;
	float mediaA = 0, mediaB = 0, maiorMedia;
	int maiorA = 0, maiorB = 0;
	int menorA = 0, menorB = 0;
	int tempI = 0;
	int vetA[tamanho], vetB[tamanho];
	
	for(i=0;i<tamanho;i++){
		vetA[i] = -1;
		vetB[i] = -1;
	}
	
	do{
		printf("..:: VETORES A E B ::..     \n");
		printf("1. Adicionar vetor A        \n");
		printf("2. Adicionar vetor B        \n");
		printf("3. Remover A na pos. x      \n");
		printf("4. Remover B na pos. x      \n");
		printf("5. Imprimir A               \n");
		printf("6. Imprimir B               \n");
		printf("7. Contar valores A         \n");
		printf("8. Contar valores B         \n");
		printf("9. Somar valores e apresen. \n");
		printf("10. Maior vetor             \n");
		printf("11. Maior soma              \n");
		printf("12. Transferir par A -> B   \n");
		printf("13. Transferir impar B -> A \n");
		printf("14. Media valores A B       \n");
		printf("15. Maior media A B         \n");
		printf("16. Maior valor A B         \n");
		printf("17. Menor valor A B         \n");
		printf("18. Maior valor             \n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				resp = 0;
				tempI = -1;
				for(i=0;i<tamanho;i++){
					if(vetA[i] == -1){
						tempI = i;
						break;
					}
				}
				if(temp == -1){
					printf("\nVetor lotado\n\n\n");
					system("pause");
				}else{
					printf("Digite o valor a inserir: ");
					scanf("%d", &resp);
					vetA[tempI] = resp;
				}	
			break;
			
			case 2:
				resp = 0;
				tempI = -1;
				for(i=0;i<tamanho;i++){
					if(vetB[i] == -1){
						tempI = i;
						break;
					}
				}
				if(temp == -1){
					printf("\nVetor lotado\n\n\n");
					system("pause");
				}else{
					printf("Digite o valor a inserir: ");
					scanf("%d", &resp);
					vetB[tempI] = resp;
				}	
			break;
			
			case 3:
				resp = 0;
				
				printf("Digite a posicao que deseja remover(1-10): ");
				scanf("%d", &resp);
				resp--;
				if((resp >= tamanho) || (resp < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else if(vetA[resp] == -1){
					printf("Posicao vazia!!\n");
					system("pause");
				}else{
					vetA[resp] = -1;
				}
				printf("\n");
			break;
			
			case 4:
				resp = 0;
				
				printf("Digite a posicao que deseja remover(1-10): ");
				scanf("%d", &resp);
				resp--;
				if((resp >= tamanho) || (resp < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else if(vetB[resp] == -1){
					printf("Posicao vazia!!\n");
					system("pause");
				}else{
					vetB[resp] = -1;
				}
				printf("\n");
			break;
			
			case 5:
				for(i=0;i<tamanho;i++){
					if(vetA[i] != -1){
						printf("%dO Valor: %d\n", (i+1), vetA[i]);
					}
				}
				system("pause");
				printf("\n");
			break;
			
			case 6:
				for(i=0;i<tamanho;i++){
					if(vetB[i] != -1){
						printf("%dO Valor: %d\n", (i+1), vetB[i]);
					}
				}
				system("pause");
				printf("\n");
			break;
			
			case 7:
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(vetA[i] != -1){
						contador++;
					}
				}
				printf("O vetor A tem %d valores armazenados\n", contador);
				system("pause");
				printf("\n");
			break;
			
			case 8:
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(vetB[i] != -1){
						contador++;
					}
				}
				printf("O vetor B tem %d valores armazenados\n", contador);
				system("pause");
				printf("\n");
			break;
					
			case 9:
				somaA = 0;
				somaB = 0;
				for(i=0;i<tamanho;i++){
					if(vetA[i] != -1){
						somaA+=vetA[i];
					}
					if(vetB[i] != -1){
						somaB+=vetB[i];
					}
				}
				printf("Soma dos valores de A: %d\n", somaA);
				printf("Soma dos valores de B: %d\n", somaB);
				system("pause");
				printf("\n");
			break;
			
			case 10:
				maiorVet = 'X';
				maior = 0;
				contadorA = 0;
				contadorB = 0;
				for(i=0;i<tamanho;i++){
					if(vetA[i] != -1){
						contadorA++;
					}
					if(vetB[i] != -1){
						contadorB++;
					}
				}
				if(contadorA > contadorB){
					maior = contadorA;
					maiorVet = 'A';
				}else{
					maior = contadorB;
					maiorVet = 'B';
				}
				printf("Vetor %c e o maior, com %d valores\n", maiorVet, maior);
				system("pause");
				printf("\n");
			break;
			
			case 11:
				maiorVet = 'X';
				maior = 0;
				somaA = 0;
				somaB = 0;
				for(i=0;i<tamanho;i++){
					if(vetA[i] != -1){
						somaA+=vetA[i];
					}
					if(vetB[i] != -1){
						somaB+=vetB[i];
					}
				}
				if(somaA > somaB){
					maior = somaA;
					maiorVet = 'A';
				}else{
					maior = somaB;
					maiorVet = 'B';
				}
				printf("Vetor %c possui a maior soma: %d\n", maiorVet, maior);
				system("pause");
				printf("\n");
			break;
			
			case 12:
				for(i=0;i<tamanho;i++){
					if((vetA[i] % 2) == 0){
						vetB[i] = vetA[i];
					}
				}
			break;
			
			case 13:
				for(i=0;i<tamanho;i++){
					if((vetB[i] % 2) != 0){
						vetA[i] = vetB[i];
					}
				}
			break;
			
			case 14:
				mediaA = 0;
				mediaB = 0;
				contadorA = 0;
				contadorB = 0;
				somaA = 0;
				somaB = 0;
				for(i=0;i<tamanho;i++){
					if(vetA[i] != -1){
						somaA+=vetA[i];
						contadorA++;
					}
					if(vetB[i] != -1){
						somaB+=vetB[i];
						contadorB++;
					}
				}
				
				mediaA = somaA / contadorA;
				mediaB = somaB / contadorB;
				
				
				printf("Media vetor A: %.2f\n", mediaA);
				printf("Media vetor B: %.2f\n", mediaB);
				system("pause");
				printf("\n");
			break;
			
			case 15:
				maiorVet = 'X';
				maiorMedia = 0;
				mediaA = 0;
				mediaB = 0;
				contadorA = 0;
				contadorB = 0;
				somaA = 0;
				somaB = 0;
				for(i=0;i<tamanho;i++){
					if(vetA[i] != -1){
						somaA+=vetA[i];
						contadorA++;
					}
					if(vetB[i] != -1){
						somaB+=vetB[i];
						contadorB++;
					}
				}
				
				mediaA = somaA / contadorA;
				mediaB = somaB / contadorB;
				
				if(mediaA > mediaB){
					maiorMedia = mediaA;
					maiorVet = 'A';
				}else{
					maiorMedia = mediaB;
					maiorVet = 'B';
				}
				printf("Vetor %c possui a maior media: %d\n", maiorVet, maiorMedia);
				system("pause");
				printf("\n");
			break;
			
			case 16:
				maiorA = -1;
				maiorB = -1;
				for(i=0;i<tamanho;i++){
					if(vetA[i] > maiorA){
						maiorA = vetA[i];
					}
					if(vetB[i] > maiorB){
						maiorB = vetB[i];
					}
				}

				printf("Maior valor de A: %d\n", maiorA);
				printf("Maior valor de B: %d\n", maiorB);
				system("pause");
				printf("\n");
			break;
			
			case 17:
				menorA = -1;
				menorB = -1;
				for(i=0;i<tamanho;i++){
					if(vetA[i] != -1){
						if(vetA[i] < menorA){
							maiorA = vetA[i];
						}
					}
					if(vetB[i] != -1){
						if(vetB[i] < menorA){
							menorA = vetB[i];
						}
					}
					
					
				}

				printf("Menor valor de A: %d\n", menorA);
				printf("Menor valor de B: %d\n", menorA);
				system("pause");
				printf("\n");
			break;
			
			case 18:
				maior = 0;
				maiorVet = 'X';
				maiorA = -1;
				maiorB = -1;
				for(i=0;i<tamanho;i++){
					if(vetA[i] > maiorA){
						maiorA = vetA[i];
					}
					if(vetB[i] > maiorB){
						maiorB = vetB[i];
					}
				}
				
				if(maiorA > maiorB){
					maior = maiorA;
					maiorVet = 'A';
				}else{
					maior = maiorB;
					maiorVet = 'B';
				}
				
				printf("Maior valor pertence ao vetor %c: %d\n", maiorVet, maior);
				system("pause");
				printf("\n");
			break;
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
