/* 1.Escreva um programa em Linguagem C que leia um número inteiro do teclado e determine se este é positivo ou negativo. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num > 0) {
		printf("Numero Positivo");
	} else if (num < 0) {
		printf("Numero negativo");
	} else {
		printf("Neutro");
	}
	return 0;
}
