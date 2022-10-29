/*10. Escreva um programa que leia um inteiro positivo n e uma sequência de n inteiros
 não-negativos e imprime o mdc de todos os números da sequência.  */
#include <stdio.h>

int euclidesMDC(int a, int b){
	
	int dividendo, divisor, resto=1;
	if(a > b){
		dividendo = a;
		divisor = b;
	} else{
		dividendo = b;
		divisor = a;
	}
	while(resto != 0){
		resto = dividendo % divisor;
		dividendo = divisor;
		if(resto!=0){
			divisor = resto;
		}
	}
	return divisor;
}

int calculoMDC(int vetorMDC[], int n){
	int resultado = vetorMDC[0];
	for(int i=1; i<n; i++){
		resultado = euclidesMDC(resultado, vetorMDC[i]);
	}
	return resultado;
	
}

int main(){
	int n, x;
	printf("---- CALCULO MDC VARIOS NUMEROS ----\n");
	printf("Quantidade de valores: ");
	scanf("%d", &n);
	
	int vetorMDC[n];
	
	for(int i=0; i<n; i++){
		printf("%do valor: ", i+1);
		scanf("%d", &vetorMDC[i]);
		
	}
	printf("MDC entre {");
	for(int i=0; i<n; i++){
		printf(" %d ", vetorMDC[i]);
	}
	x = calculoMDC(vetorMDC, n);
	printf("} -> %d", x);
	
	return 0;
}

