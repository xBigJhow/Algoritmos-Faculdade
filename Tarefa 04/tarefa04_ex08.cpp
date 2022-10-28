// 8. Sem utilizar a operação de multiplicação, faça um programa que multiplique 2 números inteiros lidos do teclado

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2, soma, i =0 ;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	
	for(i=1; i <= n1; i++) {
		soma += n2;
	}
	
	printf("%d x %d = %d", n1, n2, soma);
	
	return 0;
}
