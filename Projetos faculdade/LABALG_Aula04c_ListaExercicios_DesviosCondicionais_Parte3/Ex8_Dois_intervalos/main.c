#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, numero = 0;
	int lowIntervalo1 = 0, lowIntervalo2 = 0, lowIntervalo3 = 0, highIntervalo1 = 0, highIntervalo2 = 0, highIntervalo3 = 0;
	
	printf("----------Verificar numero em dois intervalos----------\n\n");
	printf("Digite o primeiro numero do primeiro intervalo: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero do primeiro intervalo: ");
	scanf("%d", &n2);
	printf("Digite o primeiro numero do segundo intervalo: ");
	scanf("%d", &n3);
	printf("Digite o segundo numero do segundo intervalo: ");
	scanf("%d", &n4);
	printf("Digite o valor verificado: ");
	scanf("%d", &numero);
	
	if(n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4){
		printf("nao e permitido duplicata entre os intervalos!\n\n");
		system("pause");
		return 0;
	}
	
	lowIntervalo1 = menorNum(n1,n2);
	highIntervalo1 = maiorNum(n1,n2);
	lowIntervalo2 = menorNum(n3,n4);
	highIntervalo2 = maiorNum(n3,n4);
	
	if(lowIntervalo1 <= numero && numero <= highIntervalo1){
		printf("O numero %d esta entre o intervalo %d e %d\n\n", numero, lowIntervalo1, highIntervalo1);
	}
	if(lowIntervalo2 <= numero && numero <= highIntervalo2){
		printf("O numero %d esta entre o intervalo %d e %d\n\n", numero, lowIntervalo2, highIntervalo2);
	}
	//if()
	
	
	
	system("pause");
	return 0;
}

int maiorNum(int a, int b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}

int menorNum(int a, int b){
	if(a < b){
		return a;
	}else{
		return b;
	}
}
