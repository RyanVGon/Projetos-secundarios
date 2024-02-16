#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor = 0;
	
	printf("----------Verificar numero na faixa 1 a 9----------\n\n");
	printf("Digite o valor: ");
	scanf("%d", &valor);
	
	if(valor >= 1 && valor <= 9){
		printf("O valor esta na faixa permitida\n\n");
	}else{
		printf("O valor informado nao e permitido pois nao esta na faixa de 1 a 9\n\n");
	}
	
	system("pause");
	return 0;
}
