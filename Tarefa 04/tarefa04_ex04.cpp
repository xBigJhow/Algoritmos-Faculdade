/* 4. Faça um programa que calcule o valor de A, dado por:
A = N + ((N-1) / 2) + ((N-1) / 3) + ... + 1/N    */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, nValor, numero = 0 ;
	float soma, A = 0;
	printf("Digite a quantidade de valores a inserir: ");
	scanf("%d", &nValor);
	
	for(i=1; i <= nValor; i++) {
		printf("Digite o %do valor: ", i);
		scanf("%d", &numero);
		soma += numero;
	}
	
	A = soma / nValor;
	
	printf("Valor de A: %.2f", A);
	
	return 0;
}
