/* 4. Escreva um algoritmo que preencha um vetor de 50 números inteiros e substitua todos os números primos 
por 0 (zero). Imprima o vetor antes e depois da substituição */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, c, nums[50], contDiv=0;
	
	for(i=0; i<50; i++) {
		
		nums[i] = i;
		printf("%d  ", nums[i]);
		// os 2 primeiros primos
		if(nums[i] == 1 || nums[i] == 2) {
			nums[i] = 0;
		}
		//do 2 pra frente, faço um loop e caso o numero for dividindo por i, vamos adicionando 1 em contDiv
		for(c=2; c<=nums[i]; c++) {
			if(nums[i] %c == 0) {
				contDiv++;
			}
		}
		// se o div for igual menor q 1, significa q o numero era primo, entao deixamos ele com 0 no vetor nums
		if(contDiv <=1) {
			nums[i] = 0;
		}
		// e resetamos a contagem de contDiv para o proximo loop
		contDiv=0;
	}
	printf("\n");
	//imprimindo
	for(i=0; i<50; i++) {
		printf("%d  ", nums[i]);
	}
}
