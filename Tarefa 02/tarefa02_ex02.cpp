// Faça um programa em C para calcular o volume de uma esfera de raio R.

#include <stdlib.h>
#include <stdio.h>
#define PI 3.1415

int main() {
	
	float r, V = 0;
	printf("Qual o valor do Raio -> ");
	scanf("%f", &r);
	V = (4 * PI * (r * r * r)) / 3;
	printf("Volume: %.4f", V);
	
	return 0;
}
