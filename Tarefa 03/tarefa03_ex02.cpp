/* 2.Uma empresa de vendas oferece para seus clientes um desconto em função do valor da compra realizada. 
Este desconto é de 20% se o valor da compra for maior ou igual a R$ 5.000,00 e de 15% de for menor. 
Faça um programa em linguagem C para exibir o valor da compra realizada, o valor do desconto e o total a ser pago pelo cliente. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float valorCompra;
	
	printf("Valor da Compra: ");
	scanf("%f", &valorCompra);
	
	float desconto20 = (valorCompra / 100) * 20;
	float desconto15 = (valorCompra / 100) * 15;
	
	if(valorCompra >= 5000) {
		valorCompra -= desconto20;
	} else {
		valorCompra -= desconto15;
	}
	
	printf("Valor Final da Compra: R$%.2f", valorCompra);
	
	return 0;
}
