/* 9. Dada uma sequência de N números reais, determinar os números que compõem a sequência e o número de vezes que cada um deles ocorre na mesma. 
a. Exemplo: n = 8 
Sequência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7 
Saída: -1.7 ocorre 3 vezes 
3.0 ocorre 1 vez 
0.0 ocorre 2 vezes 
1.5 ocorre 1 vez 
2.3 ocorre 1 vez
*/

#include <stdio.h>

int main() {
	
	int n;
	printf("Digite a quantidade de valores: ");
	scanf("%d", &n);
	
	float vetor[n];
	int i=0;
	
	for(i=0; i<n; i++) {
		printf("Valor real para a posicao %d: ", i);
		scanf("%f", &vetor[i]);
	}
	i=0;
	int j=0, vezes=0;
	
	while(i<n) {
		vezes = 1;
		j = i+1;
		
		while(j<n) 
			if(vetor[j] != vetor[i]) {
				j = j+1;
			} 
				else {
					vezes = vezes + 1;
					n = n-1;
					vetor[j] = vetor[n];
				}
			printf("%.1f ocorre %d vezes \n", vetor[i], vezes);
			i = i+1;
		}
	return 0;
}
