/* 3.Leia um n�mero inteiro do teclado e determine se ele � par ou �mpar. */

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
