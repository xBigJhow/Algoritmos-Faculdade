// 2. Escreva um programa que leia uma sequência de n inteiros positivos e imprime o número de dígitos e o primeiro dígito de cada um deles. 
#include <stdio.h>
#include <math.h>

int pegaPrimeiroDigito(int qtdDigito, int valor){
	int divisor, primeiroDigito;   
	divisor = pow(10, (qtdDigito-1)); 
	// divisor vai receber  "10 elevado a q
	primeiroDigito = valor / divisor;
	printf("\tPrimeiro digito: %d\n", primeiroDigito);
}

int contaDigitos(int valor){
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
	
	int qtdDigito, primeiroDigito, n;
	printf("Quantidade de numeros: ");
	scanf("%d", &n);
	// quantidade de valores inteiros digitados
	int valor[n];
	for(int i=0; i<n; i++){
		printf("Digite um valor: ");
		scanf("%d", &valor[i]);
	}
	//imprimindo todos valores com o primeiro digito e qtd de digitos
	for(int i=0; i<n; i++){
		printf("%d -> ", valor[i]);
		qtdDigito = contaDigitos(valor[i]);
		primeiroDigito = pegaPrimeiroDigito(qtdDigito, valor[i]);
	}
	return 0;
}




