//1. Escreva uma função que recebe um número inteiro n>0 e devolve o número de dígitos de n e o primeiro dígito de n. 
#include <stdio.h>
#include <math.h>

int pegaPrimeiroDigito(int qtdDigito, int valor){
	int divisor, primeiroDigito;   
	divisor = pow(10, (qtdDigito-1)); 
	// divisor vai receber  "10 elevado a q
	primeiroDigito = valor / divisor;
	printf("\nPrimeiro digito: %d", primeiroDigito);
}

int contaDigitos(int &valor){
	int qtdDigito = 0;	// vai contar os digitos
	int x = valor;		// recebe o valor da variavel
	do{
		qtdDigito+=1;
		x /= 10;
		//enquanto x for diferente de 0
		// sera dividido de 10 em 10 para 
		//pegarmos todas as unidades.
	}while(x!=0);
	printf("Quantidade de digitos: %d", qtdDigito);
	return qtdDigito;
}

int main(void){
	int qtdDigito, primeiroDigito;
	int valor;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	qtdDigito = contaDigitos(valor);
	primeiroDigito = pegaPrimeiroDigito(qtdDigito, valor);
	
	return 0;
}




