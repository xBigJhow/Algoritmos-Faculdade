/* 1. Construa um programa em C que para um grupo de 50 números inteiros lidos do teclado, determine: 
a. A soma dos números positivos 
b. A quantidade de números negativos 
c. A média dos números ímpares 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int somaPositivo = 0, somaNegativo =0, numero = 0, somaImpar = 0, contaImpar =0;
	float mediaImpar = 0;
	
	int i=0;
	for(i=1; i<=50; i++) {
		printf("Digite o %do valor: ", i);
		scanf("%d", &numero);
		if(numero >=0) {
			somaPositivo += numero;
		} else if(numero < 0) {
			somaNegativo += numero;
		}
		if(numero %2 == 1 || (numero *-1) % 2 == 1) {
			somaImpar = somaImpar + numero;
			contaImpar++;
		}
		numero = 0;
	}
	
	mediaImpar = somaImpar / contaImpar;
	printf("\nA soma dos numeros positivos foi de %d", somaPositivo);
	printf("\nA soma dos numeros negativos foi de %d", somaNegativo);
	printf("\nA media dos numeros impares foi de %.2f", mediaImpar);
}
