/* 9. Crie um algoritmo que o usu�rio entre com v�rios n�meros inteiros e positivos e
imprima o produto dos n�meros �mpares e a soma dos n�meros pares. */
 
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, qtd, num = 0;
	int impar = 1;
	int par = 0;
	
	printf("Quantos numeros vai inserir: ");
	scanf("%d", &qtd);
	
	for(i=1; i <= qtd; i++) {
		printf("Digite o %do valor: ", i);
		scanf("%d", &num);
		
		if(num %2 == 0) {
			par += num;
		} else if( num %2 == 1) {
			impar *= num;
		}
	}
	
	printf("\nSoma dos Pares: %d", par);
	printf("\nProduto dos Impares: %d", impar);
	
	return 0;
}
