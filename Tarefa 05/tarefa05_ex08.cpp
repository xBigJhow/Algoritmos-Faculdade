/* 8. Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou N vezes. 
Dados os N resultados dos lançamentos, determinar o número de ocorrências de cada face. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vetor[6] = {0,0,0,0,0,0};
	int lado, n, i;
	
	printf("Quantidade de vezes que o dado foi lançado: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		printf("Rodada %d, lado: ", i);
		scanf("%d", &lado);
		vetor[lado-1]++;
	}
	for(i=1; i<=6;i++){
		printf("O lado %d caiu %d vezes\n", i, vetor[i-1]);
	}
	return 0;
}
