/* 1. Considerando A, B, C e D como vari�veis inteiras, crie um programa em Linguagem C para calcular o valor de X.
b) X = -(b -b� - 4ac + 2a�) / (2a / b+1)� */

#include <stdlib.h>
#include <stdio.h>

int main() {
	float A,B,C, parte1, parte2, X = 0;
	
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	printf("Digite o valor de B: ");
	scanf("%f", &B);
	printf("Digite o valor de C:");
	scanf("%f", &C);
	
	parte1 = (-1*B) - (B*B*B) - (4*A*C) + (2*(A*A));
	parte2 = (2*A) / ((B+1) * (B+1));
	X = parte1 / parte2;
	printf("O valor de X ficou: %.2f", X);
	
	return 0;
}
