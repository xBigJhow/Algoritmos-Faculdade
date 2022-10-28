/* 4.Um hotel cobra R$ 262,50 a diária e uma taxa de serviços conforme:
a.R$ 17,50 por dia se a quantidade de diárias for maior que 15;
b.R$ 18,75 por dia se a quantidade de diárias for igual a 15;
c.R$ 21,05 por dia se a quantidade de diárias for menor que 15;
Construa um programa em Linguagem C que mostre a quantidade de diárias, o valor de diárias, 
o valor da taxa de serviços e o valor total a ser pago. */


#include <stdlib.h>
#include <stdio.h>
#define DIARIA 262.50

int main() {
	
	int qtDias;
	float taxa, custoTotal;
	printf("---------------------------------\n");
	printf("     Servicos de Hospedagem     \n");
	printf("---------------------------------\n");
	printf("=========== DIARIAS ============\n");
	printf("    Valor de R$262,50 por dia    \n");
	printf("===========  TAXAS  ============\n");
	printf("Menos de 15 dias -> R$21,05 por dia\n");
	printf("Igual a 15 dias -> R$18,75 por dia\n");
	printf("Mais de 15 dias -> R$17,50 por dia\n");
	printf("Dias hospedados -> ");
	scanf("%d", &qtDias);
	if(qtDias < 15) {
		taxa = qtDias * 21.05;
	} else if(qtDias == 15) {
		taxa = qtDias * 18.75;
	} else {
		taxa = qtDias * 17.50;
	}
	custoTotal = (qtDias * DIARIA) + taxa;
	printf("\n-------------------------------");
	printf("\n Voce ficou %d dias hospedado!", qtDias);
	printf("\nO custo foi de R$ %.2f", custoTotal);

	return 0;
}
