/* 7. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int anos, meses, dias, somaDias =0;
	
	printf("Quantos anos voce tem? -> ");
	scanf("%d", &anos);
	printf("E meses? -> ");
	scanf("%d", &meses);
	printf("E dias? -> ");
	scanf("%d", &dias);
	
	somaDias += anos * 365;
	somaDias += meses * 30;
	somaDias += dias;
	
	printf("Voce ja viveu %d dias...", somaDias);
	
	return 0;
}
