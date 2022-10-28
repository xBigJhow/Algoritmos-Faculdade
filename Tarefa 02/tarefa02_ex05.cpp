/* . Fa�a um programa em C que armazene um n�mero inteiro de at� 3 d�gitos (at� 999) 
e determine a soma de seus d�gitos. Ex: 397   3 + 9 + 7 = 19 */
#include <stdlib.h>
#include <stdio.h>

int main () {
	int numero, somaDigito;
	printf("Digite um valor [1 a 999] -> ");
	scanf("%d", &numero);
	somaDigito = 0;
	
	while(numero > 0) {
		somaDigito += numero % 10;
		numero /= 10;
	}
	
	printf("Soma dos digitos: %d", somaDigito);
	
	return 0;
}
