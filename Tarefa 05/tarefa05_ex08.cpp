/* 8. Tentando descobrir se um dado era viciado, um dono de cassino honesto o lan�ou N vezes. 
Dados os N resultados dos lan�amentos, determinar o n�mero de ocorr�ncias de cada face. 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vetor[6] = {0,0,0,0,0,0};
	int lado, n, i;
	
	printf("Quantidade de vezes que o dado foi lan�ado: ");
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
