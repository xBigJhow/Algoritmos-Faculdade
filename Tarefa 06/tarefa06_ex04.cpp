#include <stdio.h>

int main(){
	
	int n, i, j, soma=0;
	printf("Qual a ordem da matriz: ");
	scanf("%d", &n);
	
	int matriz[n][n];
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Linha[%d] Coluna[%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if( i == j){
				soma+= matriz[i][j];
				if(i <= n){
					soma+= matriz[i+1][j];
				}
			}
		}
	}
	printf("\nA soma dos elementos abaixo da diagonal");
	printf(" principal mais a diagonal principal: %d", soma);
}

