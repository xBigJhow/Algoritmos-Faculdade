/* 6. O sistema de avaliação de uma disciplina é composto por 3 provas. A primeira prova tem peso 2, 
a segunda prova tem peso 4 e a terceira prova tem peso 6. Faça um programa em C para calcular a média final desta disciplina. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int pesoProva1 = 2, pesoProva2 = 4, pesoProva3 = 6;
	int prova1, prova2, prova3;
	float mediaFinal;
	// considerando as provas de valores inteiros (0 a 10)
	printf("Valor da primeira prova: ");
	scanf("%d", &prova1);
	printf("Valor da segunda prova: ");
	scanf("%d", &prova2);
	printf("Valor da terceira prova: ");
	scanf("%d", &prova3);
	
	mediaFinal = (pesoProva1 * prova1) + (pesoProva2 * prova2) + (pesoProva3 * prova3);
	mediaFinal = mediaFinal / (pesoProva1 + pesoProva2 + pesoProva3);
	
	printf("Media Final -> %.2f", mediaFinal);
	
	return 0;
}
