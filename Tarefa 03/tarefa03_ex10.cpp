// 10.Elaborar um algoritmo que l� 2 valores a e b e os escreve com a mensagem: "S�o m�ltiplos" ou "N�o s�o m�ltiplos".

#include <stdio.h>
#include <stdlib.h>

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
	return 0;
}
