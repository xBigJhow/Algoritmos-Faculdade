#include <stdio.h>

int produtoDoisValores(int a, int b){
	int div_inteira=0, mult, soma=0;
	if(a % 2 == 1){
		soma += b;
		printf("%d\t%d -> +%d Somou\n", a, b, b);
	} else{
		printf("%d\t%d\n", a, b);
	}
	while(div_inteira != 1){
		div_inteira = a / 2;
		mult = b * 2;
		b = mult;
		a = div_inteira;
		if(div_inteira % 2 == 1){
			soma+=b;
			printf("%d\t%d -> +%d Somou\n", a, b, b);
		} else{
			printf("%d\t%d\n", a, b);
		}
	}
	printf("--------------------------------\n");
	printf("Total -> %d", soma);
}

int main(){
	
	int a, b;
	
	printf("Primeiro valor: ");
	scanf("%d", &a);
	printf("Segundo valor: ");
	scanf("%d", &b);
	produtoDoisValores(a, b);	
}


