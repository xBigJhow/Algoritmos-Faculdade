/* 9. Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar que a 
média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.  */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int peso1 =2, peso2 = 3, peso3 = 5;
	int prova1, prova2, prova3;
	float mediaPonderada;
	
	printf("Valor da primeira prova: ");
	scanf("%d", &prova1);
	printf("Valor da segunda prova: ");
	scanf("%d", &prova2);
	printf("Valor da terceira prova: ");
	scanf("%d", &prova3);
	
	mediaPonderada = (peso1 * prova1) + (peso2 * prova2) + (peso3 * prova3);
	mediaPonderada = mediaPonderada / (peso1 + peso2 + peso3);
	
	printf("Media -> %.2f", mediaPonderada);
	
	return 0;
}
