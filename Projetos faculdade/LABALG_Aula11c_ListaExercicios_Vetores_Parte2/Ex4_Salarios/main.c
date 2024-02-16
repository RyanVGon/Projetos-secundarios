#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int opcao = 0, i = 0, tamanho = 100, sair = 99, contador = 0;
	float resp = 0, resp1 = 0, temp = 0, soma = 0, maior = 0, menor = 0, media = 0;
	int tempI = 0;
	int resp2 = 0;
	float valores[tamanho];
	
	for(i=0;i<tamanho;i++){
		valores[i] = -1;
	}
	
	do{
		printf("..:: Salarios ::..\n");
		printf("1. Adicionar                \n");
		printf("2. Remover na posicao       \n");
		printf("3. Imprimir todos           \n");
		printf("4. Pesquisar salario        \n");
		printf("5. Adicionar na posicao     \n");
		printf("6. Pesquisar salarios x     \n");
		printf("7. Somar salarios           \n");
		printf("8. Somar salarios x         \n");
		printf("9. Contar salarios          \n");
		printf("10. Contar salarios x       \n");
		printf("11. Contar maior que x      \n");
		printf("12. Maior salario           \n");
		printf("13. Menor salario           \n");
		printf("14. Media salarios          \n");
		printf("15. Remover salario x       \n");
		printf("16. Remover todos           \n");
		printf("17. Imprimir salario na pos.\n");
		printf("18. Imprimir menores que x  \n");
		printf("19. Aplicar acrescimo z     \n");
		printf("20. Acrescimo em maior que z\n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				resp = 0;
				tempI = -1;
				for(i=0;i<tamanho;i++){
					if(valores[i] == -1){
						tempI = i;
						break;
					}
				}
				if(temp == -1){
					printf("\nVetor lotado\n\n\n");
					system("pause");
				}else{
					printf("Digite o salario a inserir: ");
					scanf("%f", &resp);
					valores[tempI] = resp;
				}	
			break;
			
			case 2:
				resp2 = 0;
				
				printf("Digite a posicao que deseja remover: ");
				scanf("%d", &resp2);
				resp2--;
				if((resp2 >= tamanho) || (resp2 < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else if(valores[resp2] == -1){
					printf("Posicao vazia!!\n");
					system("pause");
				}else{
					valores[resp2] = -1;
				}
				printf("\n");
			break;
			
			case 3:
				for(i=0;i<tamanho;i++){
					if(valores[i] != -1){
						printf("%dO Salario: %.2f\n", (i+1), valores[i]);
					}
				}
				system("pause");
				printf("\n");
			break;
			
			case 4:
				resp = 0;
				printf("Digite o salario a pesquisar: ");
				scanf("%f", &resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] == resp){
						printf("O salario escolhido aparece na posicao %d\n",(i+1));
						system("pause");
						break;
					}
				}
				
				
				printf("\n");
			break;
			
			case 5:
				resp = 0;
				resp2 = 0;
				printf("Digite a posicao que deseja insirir: ");
				scanf("%d", &resp2);
				resp2--;
				if((resp2 >= tamanho) || (resp2 < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else if(valores[resp2] != -1){
					printf("Posicao ocupada!!\n");
					system("pause");
				}else{
					printf("Digite o valor que deseja insirir: ");
					scanf("%f", &resp);
					valores[resp2] = resp;
				}
				printf("\n");
			break;
			
			case 6:
				resp = 0;
				contador = 0;
				printf("Digite o salario a pesquisar: ");
				scanf("%f", &resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] == resp){
						contador++;
					}
				}
				printf("O valor escolhido aparece %d vezes\n", contador);
				system("pause");
				printf("\n");
			break;
			
			case 7:
				soma = 0;
				for(i=0;i<tamanho;i++){
					if(valores[i] != -1){
						soma+=valores[i];
					}
				}
				printf("Soma dos salarios: %.2f\n", soma);
				system("pause");
				printf("\n");
			break;
			
			case 8:
				soma = 0;
				resp = 0;
				printf("Digite o salario a pesquisar: ");
				scanf("%f", &resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] == resp){
						soma+=valores[i];
					}
				}
				printf("Soma dos salarios de valor %.2f: %.2f\n", resp, soma);
				system("pause");
				printf("\n");
			break;			
			
			case 9:
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(valores[i] != -1){
						contador++;
					}
				}
				printf("%d Salarios cadastrados\n", contador);
				system("pause");
				printf("\n");
			break;
			
			case 10:
				contador = 0;
				resp = 0;
				printf("Digite o salario a pesquisar: ");
				scanf("%f", &resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] == resp){
						contador++;
					}
				}
				printf("%d salarios iguais a %.2f\n", contador, resp);
				system("pause");
				printf("\n");
			break;	
			
			case 11:
				contador = 0;
				resp = 0;
				printf("Digite o salario a pesquisar: ");
				scanf("%f", &resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] > resp){
						contador++;
					}
				}
				printf("%d salarios maiores que %.2f\n", contador, resp);
				system("pause");
				printf("\n");
			break;
			
			case 12:
				maior = -1;
				tempI = 0;
				for(i=0;i<tamanho;i++){
					if(valores[i] > maior){
						maior = valores[i];
						tempI = i;
					}
				}
				printf("Maior salario: %.2f\n", maior);
				printf("Posicao: %d\n", (tempI+1));
				system("pause");
				printf("\n");
			break;
			
			case 13:
				menor = 999999;
				tempI = 0;
				for(i=0;i<tamanho;i++){
					if((valores[i] < menor) && (valores[i] != -1)){
						menor = valores[i];
						tempI = i;
					}
				}
				printf("Menor salario: %.2f\n", menor);
				printf("Posicao: %d\n", (tempI+1));
				system("pause");
				printf("\n");
			break;
			
			case 14:
				soma = 0;
				contador = 0;
				for(i=0;i<tamanho;i++){
					if(valores[i] != -1){
						soma+=valores[i];
						contador++;
					}
				}
				media = soma / contador;
				printf("Media: %.2f\n", media);
				system("pause");
				printf("\n");
			break;	
			
			case 15:
				resp = 0;
				printf("Digite o salario a remover: ");
				scanf("%f", &resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] == resp){
						valores[i] = -1;
					}
				}
				printf("\n");
			break;
			
			case 16:
				for(i=0;i<tamanho;i++){
					valores[i] = -1;
				}
			break;
			
			case 17:
				resp2 = 0;
				
				printf("Digite a posicao que deseja ler: ");
				scanf("%d", &resp2);
				resp2--;
				if((resp2 >= tamanho) || (resp2 < 0)){
					printf("Posicao invalida!!\n");
					system("pause");
				}else if(valores[resp2] == -1){
					printf("Posicao vazia!!\n");
					system("pause");
				}else{
					printf("Salario: %.2f\n", valores[resp2]);
					system("pause");
				}
				printf("\n");
			break;
			
			case 18:
				resp = 0;
				printf("Digite o salario a pesquisar: ");
				scanf("%f", &resp);
				printf("Salarios menor que %.2f: ", resp);
				for(i=0;i<tamanho;i++){
					if((valores[i] < resp) && (valores[i] != -1)){
						printf("%.2f ", valores[i]);
					}
				}
				printf("\n");
				system("pause");
				printf("\n");
			break;
			
			case 19:
				resp = 0;
				printf("Digite o acrescimo desejado: ");
				scanf("%f", &resp);
				for(i=0;i<tamanho;i++){
					if(valores[i] != -1){
						valores[i] += valores[i] * resp/100;
					}
				}
			break;
			
			case 20:
				resp = 0;
				printf("Digite o acrescimo desejado: ");
				scanf("%f", &resp);
				printf("Digite o valor minimo para o acrescimo: ");
				scanf("%f", &resp1);
				for(i=0;i<tamanho;i++){
					if(valores[i] > resp1){
						valores[i] += valores[i] * resp/100;
					}
				}
			break;
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
