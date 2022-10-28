/* 5. Construa um programa que, para a progress�o geom�trica 3, 9, 27, 81, ... 6561, determine a soma de seus termos. 
Construa um algoritmo que obrigue o computador a gerar automaticamente cada um dos termos a ser somado. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, PG, valorInicial, termos, soma = 0;
	
	printf("Valor Inicial da Progress�o: ");
	scanf("%d", &valorInicial);
	printf("Quociente da Progress�o [*] -> ");
	scanf("%d", &PG);
	printf("Quantos termos deseja ver da Progress�o: ");
	scanf("%d", &termos);
	
	for(i=1; i<= termos; i++) {
		printf("%d  ", valorInicial);
		soma += valorInicial;
		valorInicial *= PG;
	}
	
	printf("\n A soma total eh de %d", soma);
	
	return 0;
}
