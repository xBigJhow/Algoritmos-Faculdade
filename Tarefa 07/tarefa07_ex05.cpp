//5. Faça um procedimento que receba como entrada um vetor de números inteiros e imprima quantos elementos pares existem no vetor. 

#include <stdio.h>

void contaPares(int vetor[], int num){
	int i=0, cont=0;
	printf("Numeros pares: ");
	for(i=0; i<num; i++){
		if(vetor[i] % 2 == 0){
			cont++;
			printf("%d  ", vetor[i]);
		}
		
	}
	printf("\nNo total: %d numeros pares.", cont);
}

int main(){
	int num, i;
	printf("Quantos valores deseja passar: ");
	scanf("%d", &num);
	int vetor[num];
	for(i=0; i<num;i++){
		printf("Pos [%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	contaPares(vetor, num);
}

	
