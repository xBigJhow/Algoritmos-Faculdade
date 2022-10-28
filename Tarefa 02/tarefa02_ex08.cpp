/* 8. Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int diasVividos, anos, meses, dias;
	
	printf("Quantos dias voce já viveu? -> ");
	scanf("%d", &diasVividos);
	
	anos = diasVividos / 365;
	meses = (diasVividos % 365) / 30;
	dias = (diasVividos % 365) % 30;
	
	printf("Voce tem %d anos %d meses e %d dias.", anos, meses, dias);
	
	return 0;
}
