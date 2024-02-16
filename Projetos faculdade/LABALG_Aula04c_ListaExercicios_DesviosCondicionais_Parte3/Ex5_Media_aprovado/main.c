#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;
	
	printf("----------Calculadora media----------\n\n");
	printf("Digite a nota da avaliacao1: ");
	scanf("%f", &nota1);
	printf("Digite a nota da avaliacao2: ");
	scanf("%f", &nota2);
	printf("Digite a nota do trabalho: ");
	scanf("%f", &nota3);
	
	media = nota1 * 0.3 + nota2 * 0.4 + nota3 * 0.3;
	
	if(media >= 0 && media <= 4.99){
		printf("Reprovado\n\n");
	}else if (media >= 5 && media < 7.49){
		printf("Aprovado\n\n");
	}else if (media >= 7.5){
		printf("Aprovado com excelencia!\n\n");
	}
	
	system("pause");
	return 0;
}
