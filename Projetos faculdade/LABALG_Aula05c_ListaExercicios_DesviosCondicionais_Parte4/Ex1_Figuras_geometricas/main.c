#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float menorNum(float a, float b){
	if(a < b){
		return a;
	}else{
		return b;
	}
}

float maiorNum(float a, float b){
	if(a > b){
		return a;
	}else{
		return b;
	}
}

int main(int argc, char *argv[]) {
	float raioCirculo = 0;
	float ladoQuadrado = 0;
	float baseTriangulo = 0, alturaTriangulo = 0;
	float ladoARetangulo = 0, ladoBRetangulo = 0;
	float areaRetangulo = 0, areaTriangulo = 0, areaQuadrado = 0, areaCirculo = 0;
	float menorArea = 0, intermed1 = 0, intermed2 = 0, maiorArea = 0;
	char areaOrdenada[100] = "";
	
	printf("----------Area de formas geometricas----------\n\n");
	printf("Area do retangulo\n");
	printf("Digite o primeiro lado do retangulo: ");
	scanf("%f", &ladoARetangulo);
	printf("Digite o segundo lado do retangulo: ");
	scanf("%f", &ladoBRetangulo);
	
	printf("\n\nArea do triangulo\n");
	printf("Digite o tamanhoda base do triangulo: ");
	scanf("%f", &baseTriangulo);
	printf("Digite a altura do tringulo: ");
	scanf("%f", &alturaTriangulo);
	
	printf("\n\nArea do quadrado\n");
	printf("Digite o lado do quadrado: ");
	scanf("%f", &ladoQuadrado);
	
	printf("\n\nArea do circulo\n");
	printf("Digite o raio do circulo: ");
	scanf("%f", &raioCirculo);
	
	areaRetangulo = ladoARetangulo * ladoBRetangulo;
	areaTriangulo = baseTriangulo * alturaTriangulo / 2;
	areaQuadrado = ladoQuadrado * ladoQuadrado;
	areaCirculo = M_PI * pow(raioCirculo, 2);
	
	menorArea = menorNum(areaRetangulo, areaTriangulo);
	menorArea = menorNum(menorArea, areaQuadrado);
	menorArea = menorNum(menorArea, areaCirculo);
	
	maiorArea = maiorNum(areaRetangulo, areaTriangulo);
	maiorArea = maiorNum(maiorArea, areaQuadrado);
	maiorArea = maiorNum(maiorArea, areaCirculo);
	
	if(areaRetangulo > menorArea && areaRetangulo < maiorArea){
		intermed1 = areaRetangulo;
	}else if(areaTriangulo > menorArea && areaTriangulo < maiorArea){
		intermed1 = areaTriangulo;
	}else if(areaQuadrado > menorArea && areaQuadrado < maiorArea){
		intermed1 = areaQuadrado;
	}else if(areaCirculo > menorArea && areaCirculo < maiorArea){
		intermed1 = areaCirculo;
	}
	
	if(areaRetangulo > menorArea && areaRetangulo < maiorArea && areaRetangulo != intermed1){
		intermed2 = areaRetangulo;
	}else if(areaTriangulo > menorArea && areaTriangulo < maiorArea && areaTriangulo != intermed1){
		intermed2 = areaTriangulo;
	}else if(areaQuadrado > menorArea && areaQuadrado < maiorArea && areaQuadrado != intermed1){
		intermed2 = areaQuadrado;
	}else if(areaCirculo > menorArea && areaCirculo < maiorArea && areaCirculo != intermed1){
		intermed2 = areaCirculo;
	}else{
		intermed2 = intermed1;
	}
	
	
	float temp = intermed1;
	intermed1 = menorNum(intermed1, intermed2);
	intermed2 = maiorNum(temp, intermed2); 
	
	
	printf("\nArea retangulo: %.2f\n", areaRetangulo);
	printf("Area triangulo: %.2f\n", areaTriangulo);
	printf("Area quadrado: %.2f\n", areaQuadrado);
	printf("Area circulo: %.2f\n", areaCirculo);	
	printf("A menor area e: %.2f\n", menorArea);
	printf("A maior area e: %.2f\n", maiorArea);
	printf("Areas em ordem crescente: %.2f, %.2f, %.2f, %.2f", menorArea, intermed1, intermed2, maiorArea);
	
	
	printf("\n\n");
	system("pause");
	return 0;
}


