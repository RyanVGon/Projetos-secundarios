#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

typedef struct {
	int ra;
	char curso;
	int periodo;
	char nome[20];
} Alunos;


Alunos vetor[30];
int TAMANHO = sizeof(vetor) / sizeof(Alunos);

int search(int ra);
void mostrarValor(Alunos valor);
int contarAlunos();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	srand(time(NULL)); 
	//Alunos tempAluno;
	int opcao = 0;
	int i = 0, sair = 9;
	int respInt = 0, temp = 0;
	char tempString[20];
	//int contador = 0;
	bool valido = false;-
	char linha[80];
	FILE *arquivo;
	
	arquivo = fopen("banco.txt", "r");
	
	if(arquivo == NULL){
		fclose(arquivo);
		arquivo = fopen("banco.txt", "w");		
		for(i=0;i<TAMANHO;i++){
			vetor[i].ra = -1;
			vetor[i].curso = ' ';
			vetor[i].periodo = 0;
			strcpy(vetor[i].nome, "");
			
			fprintf(arquivo, "%-20d%-20.20s%-20c%-20d\n", vetor[i].ra, vetor[i].nome, vetor[i].curso, vetor[i].periodo);
		}
	}else{
		fclose(arquivo);
		arquivo = fopen("banco.txt", "r");
		i = 0;
		while(fgets(linha, 80, arquivo) != NULL){
			if(linha[0] != ' '){	
				strcpy(tempString, "                    ");
				strncpy(tempString,linha,20);
				vetor[i].ra = atoi(tempString);
				
				strcpy(tempString, "                    ");
				strncpy(tempString,linha+20,20);
				strcpy(vetor[i].nome, tempString);
				
				strcpy(tempString, "                    ");
				strncpy(tempString,linha+40,20);
				vetor[i].curso = tempString[0];
				
				strcpy(tempString, "                    ");
				strncpy(tempString,linha+60,20);
				vetor[i].periodo = atoi(tempString);
				i++;
			}	
		}
			
		
		
	}
	
	fclose(arquivo);
	
	do{
		printf("\n");
		printf("..:: SORTEIO ALUNOS ::..\n");
		printf("1. Inserir              \n");
		printf("2. Alterar              \n");
		printf("3. Excluir(ra)          \n");
		printf("4. Pesquisar(ra)        \n");
		printf("5. Mostrar participantes\n");
		printf("6. Num. participantes   \n");
		printf("7. Sortear              \n");
		printf("%d. Sair                \n", sair);
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				temp = -1;
				valido = true;
				for(i=0;i<TAMANHO;i++){
					if(vetor[i].ra == -1){
						temp = i;
						break;
					}
				}
				if(temp == -1){
					printf("\nVetor lotado\n\n");
					system("pause");
				}else{
					printf("Digite o ra: ");
					scanf("%d", &respInt);
					for(i=0;i<TAMANHO;i++){
						if(respInt == vetor[i].ra){
							valido = false;
							break;
						}
					}
					
					if(valido){
						vetor[temp].ra = respInt;
						
						printf("Digite o nome: ");
						scanf("%s", vetor[temp].nome);
						printf("Digite o curso: ");
						scanf(" %c", &vetor[temp].curso);
						printf("Digite o periodo: ");
						scanf("%d", &vetor[temp].periodo);

					}else{
						printf("RA ja existe\n\n");
						system("pause");
					}
					
				}	
			break;
			
			case 2:
				valido = true;
				printf("Digite o RA: ");
				scanf("%d", &respInt);


				//verificar a validade do ra inserido e achar sua posi��o
				if(respInt < 0){
					temp = -1;
				}else{
					temp = search(respInt);
				}
				
				
				if(temp == -1){
					printf("RA nao encontrado\n\n");
					system("pause");
				}else{
					printf("VALOR ANTERIOR:\n");
					mostrarValor(vetor[temp]);
					
					printf("Digite o novo RA: ");
					scanf("%d", &respInt);
					if(respInt < 0){
						valido = false;
					}else{
						for(i=0;i<TAMANHO;i++){
							if((respInt == vetor[i].ra) && (i != temp)){
								valido = false;
								break;
							}
						}
					}
					
					if(valido){
						vetor[temp].ra = respInt;
						
						printf("Digite o novo nome: ");
						scanf("%s", vetor[temp].nome);
						printf("Digite o novo curso: ");
						scanf(" %c", &vetor[temp].curso);
						printf("Digite o novo periodo: ");
						scanf("%d", &vetor[temp].periodo);
	
					}else{
						printf("RA ja existe ou e invalido\n\n");
						system("pause");
					}

				}
				
			break;
			
			case 3:
				printf("Digite o RA: ");
				scanf("%d", &respInt);


				//verificar a validade do ra inserido e achar sua posi��o
				if(respInt < 0){
					temp = -1;
				}else{
					temp = search(respInt);
				}
				
				
				if(temp == -1){
					printf("RA nao encontrado\n\n");
					system("pause");
				}else{
					printf("ALUNO A SER DELETADO:\n");
					mostrarValor(vetor[temp]);
					
					printf("Digite 1 para deletar: ");
					scanf("%d", &respInt);
					if(respInt == 1){
						vetor[temp].ra = -1;
						vetor[temp].curso = ' ';
						vetor[temp].periodo = 0;
						strcpy(vetor[temp].nome, "");
						printf("Aluno deletado com sucesso!!\n\n");
						system("pause");
					}
				
				}
									
			break;
			
			case 4:
				printf("Digite o RA: ");
				scanf("%d", &respInt);


				//verificar a validade do ra inserido e achar sua posi��o
				if(respInt < 0){
					temp = -1;
				}else{
					temp = search(respInt);
				}
				
				
				if(temp == -1){
					printf("RA nao encontrado\n\n");
					system("pause");
				}else{
					printf("RA pesquisado:\n");
					mostrarValor(vetor[temp]);
				}
									
			break;
			
			case 5:
				//10 linhas ra espa�o, 20 linhas nome espa�o, 5 linha curso espa�o, 2 linhas periodo
				printf("\nRA        |NOME                |CURSO |PERIODO             \n");
				printf("----------|--------------------|------|-------\n");
				for(i=0;i<TAMANHO;i++){
					if(vetor[i].ra != -1){
						printf("%-10d|%-20.20s|%-6c|%-2d\n", vetor[i].ra, vetor[i].nome, vetor[i].curso, vetor[i].periodo);
					}
				}
				printf("\n");
				system("pause");
			break;
			
			case 6:
				temp = contarAlunos();
				printf("%d Alunos cadastrados\n", temp);
				system("pause");
			break;
			
			case 7:
				temp = -1;
				do{
					if(contarAlunos() == 0){
						break;
					}
					valido = true;
					temp = (rand() + 1) % 30;
					if(vetor[temp].ra == -1){
						valido = false;
					}
				}while(!valido);
				
				if(temp != -1){
					printf("ALUNO SORTEADO:\n");
					mostrarValor(vetor[temp]);
					system("pause");
				}else{
					printf("Nenhum aluno cadastrado\n");
					system("pause");
				}
				
			break;
			
			case 9:
				arquivo = fopen("banco.txt", "w");		
				printf("Salvando\n");
				for(i=0;i<TAMANHO;i++){
					fprintf(arquivo, "%-20d%-20.20s%-20c%-20d\n", vetor[i].ra, vetor[i].nome, vetor[i].curso, vetor[i].periodo);
				}
				fclose(arquivo);
			break;
		}
	}while(opcao != sair);
	
	
	
	
	return 0;
}

int search(int ra){
	int temp = -1;
	int i;
	for(i=0;i<TAMANHO;i++){
		if((ra == vetor[i].ra)){
			temp = i;
		}
	}
	return temp;
}

void mostrarValor(Alunos valor){
	printf("\nRA                  |NOME                |CURSO               |PERIODO             \n");
	printf("--------------------|--------------------|--------------------|--------------------\n");
	printf("%-20d|%-20s|%-20c|%-20d\n", valor.ra, valor.nome, valor.curso, valor.periodo);
}

int contarAlunos(){
	int cont = 0;
	int i;
	for(i=0;i<TAMANHO;i++){
		if(vetor[i].ra != -1){
			cont++;
		}
	}
	return cont;
}








