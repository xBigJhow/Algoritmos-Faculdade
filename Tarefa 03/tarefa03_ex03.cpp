/* 3.Leia um número inteiro do teclado e determine se ele é par ou ímpar. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		printf("Numero PAR");
	} else {
		printf("Numero IMPAR");
	}
	
	return 0;
}
