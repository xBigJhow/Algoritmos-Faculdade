/* 7. Dada uma sequência de n números, imprimi-la na ordem inversa à da leitura. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int qtdNum;
	
	printf("Quantos numeros vai inserir: ");
	scanf("%d", &qtdNum);
	
	int vetor[qtdNum], contador;
	//solicitando valores no vetor
	for(contador = 0; contador <qtdNum; contador++) {
		printf("valor para a posicao %d: ", contador);
		scanf("%d", &vetor[contador]);
	}
	// imprimindo valores no vetor normal
	for(contador = 0; contador<qtdNum; contador++) {
		printf("%d ", vetor[contador]);
	}
	int i=0, j=(qtdNum-1), aux;
	while(i < j) {
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
		j--;
		i++;
	}
	printf("\n");
	//imprimindo valores no vetor inverso
	for(contador=0; contador<qtdNum; contador++) {
		printf("%d ", vetor[contador]);
	}
	return 0;
}
