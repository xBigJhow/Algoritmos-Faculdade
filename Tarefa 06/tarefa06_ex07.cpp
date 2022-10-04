#include <stdio.h>
#include <cstdlib>

int main(){
	
	int soma=0, produto=1, n, i, j, x;
	
	printf("Matriz de Ordem: ");
	scanf("%d", &n);
	
	int matriz[n][n];
	// alimentando matriz com valores;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			x = (rand() % 10) + 1;
			matriz[i][j] = x;
		}
	}
	// soma da diagonal principal
	for(i=0; i<n;i++){
		for(j=0; j<n; j++){
			printf("%d \t", matriz[i][j]);
			if(i == j){
				soma += matriz[i][j];
			}
		}
		printf("\n");
	}
	
	i = 0;
	j=n-1;
	while(i<n){
		produto *= matriz[i][j];
		i++;
		j--;
		
	}
	
	printf("\nA - Soma da diagonal principal: %d", soma);
	printf("\nB - O produto da diagonal secundaria: %d", produto);
	
	return 0;
}

