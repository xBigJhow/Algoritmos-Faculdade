#include <stdio.h>

int calculoMDC(int a, int b){
	
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

int main(){
	
	int num1, num2;
	
	printf("---- CALCULO MDC ----\n");
	printf("Primeiro numero: ");
	scanf("%d", &num1);
	printf("Segundo numero: ");
	scanf("%d", &num2);
	
	printf("O MDC de (%d, %d) e %d", num1, num2 ,calculoMDC(num1, num2));
	
	return 0;
}

