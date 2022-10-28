// 12.Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.

#include <stdlib.h>
#include <stdio.h>

int main() {
	int a, b, c, maior;
	printf("Primeiro numero: ");
	scanf("%d", &a);
	printf("Segundo numero: ");
	scanf("%d", &b);
	printf("Terceiro numero: ");
	scanf("%d", &c);
	
	if(a > b && a > c) {
		maior = a;
	} else if(b > c && b > a) {
		maior = b;
	} else {
		maior = c;
	}
	
	printf("O maior numero eh o %d", maior);
	return 0;
}
