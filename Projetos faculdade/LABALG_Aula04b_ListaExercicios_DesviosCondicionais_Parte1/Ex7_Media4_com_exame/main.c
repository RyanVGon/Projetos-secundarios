#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variveis
	float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, media = 0, exame = 0;
	
	//Entrada
	printf("----------Calculadora de media de 4 notas----------\n\n");
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);
	
	//Processamento
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	//Saida
	if(media >= 7){
		printf("voce foi aprovado com a media: %.2f", media);
	}else{
		printf("Digite a nota do exame: ");
		scanf("%f", &exame);
		
		//Processamento
		media = (media + exame) / 2;
		
		//Saida
		if(media >= 5){
			printf("Aprovado em exame com a media: %.2f", media);
		}else{
			printf("Reprovado com a media: %.2f", media);
		}
	}
	
	printf("\n\n");
	system("pause");
	return 0;
}
