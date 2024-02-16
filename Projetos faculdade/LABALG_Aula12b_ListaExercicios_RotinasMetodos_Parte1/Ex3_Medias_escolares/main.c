#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void aprovado(float media){
	if(media >= 5){
		printf("\nAluno aprovado!!\n");
	}else{
		printf("\nAluno reprovado!!\n");
	}
}

float media1(float provaA, float provaB){
	return (provaA + provaB)/2;
}

float media2(float provaA, float provaB, float provaC){
	return (provaA + provaB + provaC)/3;
}

float media3(float provaA, float provaB, float atividadeC){
	return provaA*0.4 + provaB*0.4 + atividadeC*0.2;
}

float media4(float provaA, float provaB, float atividadeC, float pluri){
	return provaA*0.3 + provaB*0.3 + atividadeC*0.2 + pluri*0.2;
}

float media5(float provaA, float provaB, float atividade1, float atividade2, float atividade3, float pluri){
	float mediaAtv = media2(atividade1,atividade2,atividade3);
	return media4(provaA,provaB,mediaAtv,pluri);
}

float media6(float provaA, float provaB, float atividadeA, float atividadeB1, float atividadeB2, float pluri){
	float mediaAtvNp2 = media1(atividadeB1, atividadeB2);
	float np1 = provaA*0.7 + atividadeA*0.3;
	float np2 = provaB*0.6 + mediaAtvNp2*0.2 + pluri*0.2;
	
	return media1(np1,np2);
}

int main(int argc, char *argv[]) {
	int opcao = 0, i = 0, j = 0, sair = 9;
	float resposta1 = 0, resposta2 = 0, resposta3 = 0, resposta4 = 0, resposta5 = 0, resposta6 = 0, resultado = 0;
	do{
		printf("\n..:: MEDIAS ESCOLARES ::..\n");
		printf("1. Media simples(A,B)             \n");
		printf("2. Media simples(A,B,C)           \n");
		printf("3. Media 3(40%,40%,20%)     \n");
		printf("4. Media 4(30%,30%,20%,20%) \n");
		printf("5. Media 5(30%,30%,20%,20%) \n");
		printf("6. Media semestral          \n");
		printf("%d. Sair                    \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                            \n");
		
		switch (opcao){
			case 1:
				resposta1 = 0;
				resposta2 = 0;
				resultado = 0;
				
				printf("Digite a primeira nota: ");
				scanf("%f", &resposta1);
				printf("Digite a segunda nota: ");
				scanf("%f", &resposta2);
				resultado = media1(resposta1, resposta2);
				
				aprovado(resultado);
				printf("media igual a: %.2f\n\n", resultado);
				system("pause");
			break;
			
			case 2:
				resposta1 = 0;
				resposta2 = 0;
				resposta3 = 0;
				resultado = 0;
				
				printf("Digite a primeira nota: ");
				scanf("%f", &resposta1);
				printf("Digite a segunda nota: ");
				scanf("%f", &resposta2);
				printf("Digite a terceira nota: ");
				scanf("%f", &resposta3);
				resultado = media2(resposta1, resposta2, resposta3);
				
				aprovado(resultado);
				printf("media igual a: %.2f\n\n", resultado);
				system("pause");
			break;
			
			case 3:
				resposta1 = 0;
				resposta2 = 0;
				resposta3 = 0;
				resultado = 0;
				
				printf("Digite a primeira nota de prova: ");
				scanf("%f", &resposta1);
				printf("Digite a segunda nota de prova: ");
				scanf("%f", &resposta2);
				printf("Digite a nota de atividade: ");
				scanf("%f", &resposta3);
				resultado = media3(resposta1, resposta2, resposta3);
				
				aprovado(resultado);
				printf("media igual a: %.2f\n\n", resultado);
				system("pause");
			break;
			
			case 4:
				resposta1 = 0;
				resposta2 = 0;
				resposta3 = 0;
				resposta4 = 0;
				resultado = 0;
				
				printf("Digite a primeira nota de prova: ");
				scanf("%f", &resposta1);
				printf("Digite a segunda nota de prova: ");
				scanf("%f", &resposta2);
				printf("Digite a nota de atividade: ");
				scanf("%f", &resposta3);
				printf("Digite a nota da pluridisciplinar: ");
				scanf("%f", &resposta4);
				resultado = media4(resposta1, resposta2, resposta3, resposta4);
				
				aprovado(resultado);
				printf("media igual a: %.2f\n\n", resultado);
				system("pause");
			break;
			
			case 5:
				resposta1 = 0;
				resposta2 = 0;
				resposta3 = 0;
				resposta4 = 0;
				resposta5 = 0;
				resposta6 = 0;
				resultado = 0;
				
				printf("Digite a primeira nota de prova: ");
				scanf("%f", &resposta1);
				printf("Digite a segunda nota de prova: ");
				scanf("%f", &resposta2);
				printf("Digite a primeira nota de atividade: ");
				scanf("%f", &resposta3);
				printf("Digite a segunda nota de atividade: ");
				scanf("%f", &resposta4);
				printf("Digite a terceira nota de atividade: ");
				scanf("%f", &resposta5);
				printf("Digite a nota da pluridisciplinar: ");
				scanf("%f", &resposta6);
				resultado = media5(resposta1, resposta2, resposta3, resposta4, resposta5, resposta6);
				
				aprovado(resultado);
				printf("media igual a: %.2f\n\n", resultado);
				system("pause");
			break;
				
			case 6:
				resposta1 = 0;
				resposta2 = 0;
				resposta3 = 0;
				resposta4 = 0;
				resposta5 = 0;
				resposta6 = 0;
				resultado = 0;
				
				printf("Digite a primeira nota de prova: ");
				scanf("%f", &resposta1);
				printf("Digite a segunda nota de prova: ");
				scanf("%f", &resposta2);
				printf("Digite a nota de atividade da np1: ");
				scanf("%f", &resposta3);
				printf("Digite a primeira nota de atividade da np2: ");
				scanf("%f", &resposta4);
				printf("Digite a segunda nota de atividade da np2: ");
				scanf("%f", &resposta5);
				printf("Digite a nota da pluridisciplinar: ");
				scanf("%f", &resposta6);
				resultado = media6(resposta1, resposta2, resposta3, resposta4, resposta5, resposta6);
				
				aprovado(resultado);
				printf("media igual a: %.2f\n\n", resultado);
				system("pause");
			break;
			
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
