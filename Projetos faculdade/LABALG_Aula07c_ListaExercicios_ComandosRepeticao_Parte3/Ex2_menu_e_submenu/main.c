#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int escolha = 0, escolha2 = 0;
	
	do{
		printf("...:: MENU SISTEMA CLIENTES ::...\n");
		printf("1.CLIENTES\n");
		printf("2.FORNECEDORES\n");
		printf("3.CIDADES\n");
		printf("9.SAIR\n");
		scanf("%d", &escolha);
		printf("\n\n\n\n\n\n\n\n\n\n");
		
		do{
			switch(escolha){
				case 1:
					printf("...:: MENU SISTEMA CLIENTES ::...\n");
					printf("1.CLIENTES\n");
					printf("	11. CADASTRAR CLIENTE\n");	
					printf("	12. ALTERAR CLIENTE\n");
					printf("	13. PESQUISAR CLIENTE\n");
					printf("	14. EXCLUIR CLIENTE\n");
					printf("	19. SAIR\n");	
					printf("2.FORNECEDORES\n");
					printf("3.CIDADES\n");
					printf("9.SAIR\n");
					scanf("%d", &escolha2);
					printf("\n\n\n\n\n\n\n\n\n\n");
					if(escolha2 == 19){
						escolha2 = -1;
					}else if(escolha2 >= 11 || escolha2 <= 14){
						printf("Foi pressionada a opcao %d", escolha2);
						escolha2 = -1;
						escolha = 9;
					}else{
						printf("\n\n\n\n\n\n\n\n\n\n");
					}
					
					break;
				case 2:
					printf("...:: MENU SISTEMA CLIENTES ::...\n");
					printf("1.CLIENTES\n");
					printf("2.FORNECEDORES\n");
					printf("	21. CADASTRAR FORNECEDOR\n");	
					printf("	22. ALTERAR FORNECEDOR\n");
					printf("	23. PESQUISAR FORNECEDOR\n");
					printf("	24. EXCLUIR FORNECEDOR\n");
					printf("	29. SAIR\n");	
					printf("3.CIDADES\n");
					printf("9.SAIR\n");
					scanf("%d", &escolha2);
					printf("\n\n\n\n\n\n\n\n\n\n");
					if(escolha2 == 29){
						escolha2 = -1;
					}else if(escolha2 >= 21 || escolha2 <= 24){
						printf("Foi pressionada a opcao %d", escolha2);
						escolha2 = -1;
						escolha = 9;
					}else{
						printf("\n\n\n\n\n\n\n\n\n\n");
					}
					break;
				case 3:
					printf("...:: MENU SISTEMA CLIENTES ::...\n");
					printf("1.CLIENTES\n");
					printf("2.FORNECEDORES\n");	
					printf("3.CIDADES\n");
					printf("	31. CADASTRAR CIDADE\n");	
					printf("	32. ALTERAR CIDADE\n");
					printf("	33. PESQUISAR CIDADE\n");
					printf("	34. EXCLUIR CIDADE\n");
					printf("	39. SAIR\n");
					printf("9.SAIR\n");
					scanf("%d", &escolha2);
					printf("\n\n\n\n\n\n\n\n\n\n");
					if(escolha2 == 39){
						escolha2 = -1;
					}else if(escolha2 >= 31 || escolha2 <= 34){
						printf("Foi pressionada a opcao %d", escolha2);
						escolha2 = -1;
						escolha = 9;
					}else{
						printf("\n\n\n\n\n\n\n\n\n\n");
					}
					break;
			
			
			}
		}while(escolha2 != -1);
		
		
	}while(escolha != 9);
	
	
	return 0;
}
