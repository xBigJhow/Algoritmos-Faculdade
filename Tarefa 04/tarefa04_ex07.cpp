/* 7. Construa um programa que para um conjunto de N números reais, determine o valor máximo e o valor mínimo digitados. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, qtd = 0;
	float maior, menor, numero = 0;
	
	printf("Quantos numeros quer digitar: ");
	scanf("%d", &qtd);
	i = 1;
	while(i<= qtd) {
		printf("Digite o %do valor: ", i);
		scanf("%f", &numero);
		
		if(i == 1) {
			maior = numero;
			menor = maior;
		} else if(numero > maior) {
			maior = numero;
		} else if(numero < menor) {
			menor = numero;
		}
		i++;
	}
	printf("\nMaior: %.1f", maior);
	printf("\nMenor: %.1f", menor);
}
