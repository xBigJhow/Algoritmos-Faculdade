/* 5.Faça um programa que leia 3 valores reais e verifique se eles permitem formar um triângulo. 
Caso seja possível, especificar o tipo de triângulo que será formado. Para que os valores possam 
representar os lados de um triângulo, é necessário que um dos lados seja menor que a soma dos 
outros 2 lados. Um triângulo pode ser classificado como equilátero, quando todos os lados são
iguais; isósceles, quando apenas 2 lados são iguais; e escaleno, quando todos os lados são diferentes. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int A,B,C;
	
	printf("Digite o lado A: ");
	scanf("%d", &A);
	printf("Digite o lado B: ");
	scanf("%d", &B);
	printf("Digite o lado C: ");
	scanf("%d", &C);
	
	if((A+B) > C || (A+C) > B || (B+C) > A) {
		printf("Eh possivel fazer um triangulo ");
		if(A == B && B == C) {
			printf("equilatero");
		} else if( A != B && B!= C && C != A) {
			printf("escaleno");
		} else {
			printf("isoceles");
		}
	} else {
		printf("Nao eh possivel fazer um triangulo");
	}
	return 0;
} 
