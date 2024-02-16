#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*
 *a) Sal�rio mensal do professor (considere que cada m�s � composto por 4 semanas); 
 *b) Valor do vale alimenta��o que corresponde a 10% do sal�rio mensal; Valor do aux�lio transporte que corresponde a 6% do sal�rio mensal;
 *c) Sal�rio total bruto que corresponde ao sal�rio mensal acrescido do vale alimenta��o e aux�lio transporte;
 *d) Valor de desconto de INSS que corresponde a 3% do sal�rio mensal e desconto de IR que corresponde a 4% do sal�rio mensal;
 *e) Valor do sal�rio l�quido, que corresponde ao sal�rio bruto mensal deduzido os descontos
 */


int main(int argc, char *argv[]) {
	//variaveis
	float salarioAula = 25.00, duracaoAula = 0, qtdAula = 0;
	
	float salarioMensal = 0, valeAlimentacao = 0, auxilioTransporte = 0, salarioBruto = 0, descontoINSS = 0, descontoIR = 0, salarioLiquido = 0;
	
	//entrada
	printf("----------INFORMACOES SALARIAIS----------\n\n");
	printf("Qual a duracao das aulas(min): ");
	scanf("%f", &duracaoAula);
	printf("Qual a quantidade de aulas semanais: ");
	scanf("%f", &qtdAula);
	
	//processamento
	salarioMensal = salarioAula * duracaoAula / 60 * qtdAula * 4;
	valeAlimentacao = salarioMensal * 0.10;
	auxilioTransporte = salarioMensal * 0.06;
	salarioBruto = salarioMensal + valeAlimentacao + auxilioTransporte;
	descontoINSS = salarioMensal * 0.03;
	descontoIR = salarioMensal * 0.04;
	salarioLiquido = salarioBruto - descontoIR - descontoINSS;
	
	//saida
	printf("\nSalario Mensal: %f", salarioMensal);
	printf("\nVale alimentacao: %f", valeAlimentacao);
	printf("\nAuxilio transporte: %f", auxilioTransporte);
	printf("\nSalario bruto: %f", salarioBruto);
	printf("\nDesconto de INSS: %f", descontoINSS);
	printf("\nDesconto de IR: %f", descontoIR);
	printf("\nSalario liquido: %f", salarioLiquido);
	printf("\n\n");
	
	system("pause");
	return 0;
}
