// 8.Construa um programa em C que leia dois valores inteiros e determine se um é múltiplo do outro.

#include <stdlib.h>
#include <stdio.h>

int main() {
	int num1, num2;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("Digite o segundo valor: ");
	scanf("%d", &num2);
	
	if(num1 > num2) {
		if(num1 % num2 == 0) {
			printf("Os valores sao multiplos entre si");
		} else {
			printf("Os valores nao sao multiplos entre si");
		}
	} else {
		if(num2 % num1 == 0) {
			printf("Os valores sao multiplos entre si");
		} else {
			printf("Os valores nao sao multiplos entre si");
		}
	}
}

