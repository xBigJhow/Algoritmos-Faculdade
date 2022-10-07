#include <stdio.h>

int conferePrimo(int a){
	int i = 0, cont=0;
	// se o numero for 1 e 2 e diferente de 0 é primo
	if(a==1 || a==2 && a!=0){
		return 1;
	} else{
		for(i=2; i < a; i++){
			if(a % i == 0){
				cont++;
			}
		}
		if(cont < 1 && a != 0){
			return 1;
		} else{
			return 0;
		}
	}
}

int main(){
	
	int valor, valor_atual=0, x;
	printf("Valor: ");
	scanf("%d", &valor);
	printf("Numeros primos de 0 a %d sao: \n", valor);
	while(valor_atual <= valor){
		x = conferePrimo(valor_atual);
		if(x == 1){
			printf("%d, ", valor_atual);
		}
		valor_atual++;
	}
	printf("Fim.");
	return 0;
}
	
