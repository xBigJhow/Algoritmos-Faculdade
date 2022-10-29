/* 6. Faça um programa que leia um vetor de caracteres de 20 posições e inverta a 1ª posição 
com a 20ª, a 2ª com a 19ª, e assim por diante. Imprima o vetor antes e depois da inversão; */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int aux, vetor[20];
	int i=0, j=19, c=0;
	
	for(i=0; i<20; i++) {
		printf("Valor para o vetor: ");
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<20; i++) {
		printf("%d  ", vetor[i]);
	}
	i = 0;
	printf("\n");
	while(i < j) {
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
		j--;
		i++;
	}
	for(c=0; c<20; c++) {
		printf("%d  ", vetor[c]);
	}
	return 0;
}
