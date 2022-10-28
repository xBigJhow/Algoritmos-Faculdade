/* 1. Considerando A, B, C e D como vari�veis inteiras, crie um programa em Linguagem C para calcular o valor de X.

a) X = (B / (A+C) + 4A) / D - (2A) / (3+C) */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float A,B,C,D,X, parte1, parte2 = 0;
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	printf("Digite o valor de B: ");
	scanf("%f", &B);
	printf("Digite o valor de C: ");
	scanf("%f", &C);
	printf("Digite o valor de D: ");
	scanf("%f", &D);
	parte1 = (B / (A + C)) + (4 * A);
	parte2 = (D - (2 * A)) / (3 + C);
	X = parte1 / parte2;
	/* separei tudo por par�nteses para mudar a regra de prioridade...
		Na primeira parte, B � dividido pelo resultado de A mais C, e isso � somado a 4 vezes o A.
		Na segunda parte, D menos 2 vezes o A � dividido por 3 mais C
		Depois pegamos a primeira parte, dividimos pela segunda parte e damos este resultado ao X (float) */
	printf("O valor de X: %.2f", X);
	/* Professor fazendo o teste sendo A=1, B=2, C=3, D=4, a parte1 me retornava 4 e a parte 2 me retornava 0 ent�o o x ficava "4/0" dando valor == 1
	S� que ao fazer o teste em m�os ou em Python, a parte1 me retornava 4,5 e a parte2 me retornava 0,3333 ai o X fica 4,5/0,3 que � aproximadamente 13,5
	N�o sei se est� certo mas preferi fazer com float para dar o resultado certo ao inv�s de Inteiros */
	
	return 0;
}
