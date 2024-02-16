#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void retangulo(){
	float a = 0, b = 0, resultado = 0;
	printf("Digite o primeiro lado: ");
	scanf("%f", &a);
	printf("Digite o segundo lado: ");
	scanf("%f", &b);
	resultado = a * b;
		
	printf("Area do retangulo: %.2f\n\n", resultado);
	system("pause");
}

void triangulo(){
	float b = 0, h = 0, resultado = 0;
	printf("Digite a base: ");
	scanf("%f", &b);
	printf("Digite a altura: ");
	scanf("%f", &h);
	resultado = b * h / 2;
		
	printf("Area do triangulo: %.2f\n\n", resultado);
	system("pause");
}

void quadrado(){
	float lado = 0, resultado = 0;
	printf("Digite o lado: ");
	scanf("%f", &lado);
	resultado = lado * lado;
		
	printf("Area do quadrado: %.2f\n\n", resultado);
	system("pause");
}

float circulo(){
	float raio = 0, resultado = 0;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	resultado = M_PI * raio * raio;
		
	printf("Area do circulo: %.2f\n\n", resultado);
	system("pause");
}

void paralelepipedo(){
	float lado1 = 0, lado2 = 0, lado3 = 0, resultado = 0;
	printf("Digite o primeiro lado: ");
	scanf("%f", &lado1);
	printf("Digite o segundo lado: ");
	scanf("%f", &lado2);
	printf("Digite o terceiro lado: ");
	scanf("%f", &lado3);
	resultado = lado1 * lado2 * lado3;
		
	printf("Area do paralelepipedo:%.2f \n\n", resultado);
	system("pause");
}

void losango(){
	float lado1 = 0, lado2 = 0, resultado = 0;
	printf("Digite o primeiro lado: ");
	scanf("%f", &lado1);
	printf("Digite o segundo lado: ");
	scanf("%f", &lado2);
	resultado = lado1 * lado2 / 2;
		
	printf("Area do losango: %.2f\n\n", resultado);
	system("pause");
}

void cone(){
	float raio = 0, geratriz = 0, resultado = 0;
	printf("Digite o raio: ");
	scanf("%f", &raio);
	printf("Digite a geratriz: ");
	scanf("%f", &geratriz);
	resultado = (M_PI * raio * geratriz) + (M_PI * raio * raio);
		
	printf("Area do cone: %.2f\n\n", resultado);
	system("pause");
}

void trapezio(){
	float menor = 0, maior = 0, altura = 0, resultado = 0;
	printf("Digite a base menor: ");
	scanf("%f", &menor);
	printf("Digite a base maior: ");
	scanf("%f", &maior);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	resultado = (menor + maior) * altura / 2; 
		
	printf("Area do trapezio: %.2f\n\n", resultado);
	system("pause");
}




int main(int argc, char *argv[]) {
	int opcao = 0, sair = 9;
	
	do{
		printf("\n..:: AREA FIGURAS ::..\n");
		printf("1. Retangulo                  \n");
		printf("2. Triangulo                  \n");
		printf("3. Quadrado                   \n");
		printf("4. Circulo                    \n");
		printf("5. Paralelepipedo             \n");
		printf("6. Losango                    \n");
		printf("7. Cone                       \n");
		printf("8. Trapezio                   \n");
		printf("%d. Sair                      \n", sair);
		printf("Digite a sua escolha: ");
		scanf("%d", &opcao);
		printf("                              \n");
		
		switch (opcao){
			case 1:
				retangulo();
			break;
				
			case 2:
				triangulo();
			break;
			
			case 3:
				quadrado();
			break;
			
			case 4:
				circulo();
			break;
			
			case 5:
				paralelepipedo();
			break;
				
			case 6:
				losango();
			break;
			
			case 7:
				cone();
			break;
			
			case 8:
				trapezio();
			break;
			
			
		}
		
		
	}while(opcao != sair);
	
	system("pause");
	return 0;
}
