/* 6.Faça um programa em C que calcule o peso ideal de uma pessoa adulta, lendo do teclado seu peso e altura. Para cálculo do peso ideal utilize as seguintes fórmulas:
a.Homens   P = 72,7 * altura - 58
b.Mulheres   P = 62,1 * altura - 44,7
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float peso, altura, P;
	int escolha;
	printf("Digite seu peso [Kg] -> ");
	scanf("%f", &peso);
	printf("Digite sua altura [X.XX] -> ");
	scanf("%f", &altura);
	printf("------------------------------------------------\n");
	printf("Digite [1] para Homem ou [2] para Mulher: ");
	scanf("%d", &escolha);
	switch(escolha) {
		case 1:
			P = 72.7 * altura - 58;
			break;
		case 2:
			P = 62.1 * altura - 44.7;
			break;
		default:
			printf("Favor escolher [1] ou [2]");
			break;
	}
	printf("Para sua altura o peso ideal eh de %.2f Kg", P);
	return 0;
}

