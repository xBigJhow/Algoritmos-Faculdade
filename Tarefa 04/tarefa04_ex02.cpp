/* 2. Fa�a um programa em C que imprima todos os n�meros pares compreendido entre 85 e 907. 
O programa tamb�m deve exibir a soma destes valores.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i, somaTudo;
	
	for(i=85; i <907; i++) {
		if(i %2 == 0) {
			printf("\n%d", i);
			somaTudo += i;
		}
	}
	printf("\nValor Total: %d", somaTudo);
	
	return 0;
}
