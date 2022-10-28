// 7.Faça um programa em C que leia 3 valores inteiros e os imprima na ordem crescente.

#include <stdlib.h>
#include <stdio.h>

int main() {
	// Supondo que os 3 valores inseridos serão diferentes.
	int A, B, C, meio, menor, maior; //inicio meio e fim
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &A);
	printf("Digite o segundo valor: ");
	scanf("%d", &B);
	printf("Digite o terceiro valor: ");
	scanf("%d", &C);
	if(A > B && A > C) {
		maior = A;
		if(B>C) {
			meio = B;
			menor = C;
		} else {
			meio = C;
			menor = B;
		}
	} else if(B>C && B > A) {
		maior = B;
		if(A>C) {
			meio = A;
			menor = C;
		} else {
			meio = C;
			menor = A;
		}
	} else {
		maior = C;
		if(A>B) {
			meio = A;
			menor = B;
		} else {
			meio = B;
			menor = A;
		}
	}
	printf("Maior: %d  | Meio: %d  | Menor: %d", maior, meio, menor);
	
	return 0;
}
