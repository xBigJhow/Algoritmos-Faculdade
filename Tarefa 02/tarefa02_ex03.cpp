/* Uma revenda de carros paga a seus vendedores um sal�rio de R$ 1800,00 fixo, mais R$ 75,00 para cada carro vendido 
e uma comiss�o de 5% sobre cada o total de suas vendas. Fa�a um programa em C que determine o sal�rio final de um vendedor. */

#include <stdlib.h>
#include <stdio.h>
#define SALARIO 1800.00

int main() {
	
	int vendaCarro;
	float vendaTotal, salarioTotal, comissao;
	printf("Quantos carros o funcionario vendeu este mes? ->");
	scanf("%d", &vendaCarro);
	
	vendaTotal = vendaCarro * 75;
	comissao = (vendaTotal / 100) * 5;
	
	salarioTotal = vendaTotal + comissao + SALARIO;
	
	printf("Salario Final: R$%.2f", salarioTotal);
	
	return 0;
}
