/* 1.. Faça um programa que, dada uma matriz de ordem N, gere: 
a)) Matriz identidade 
*/

#include <stdio.h>

int main(){
	
	int n, i, j;
	
	printf("Qual o tamanho da matriz desejada -> ");
	scanf("%d", &n);
	
	int matriz[n][n];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matriz[i][j] = 1;
		printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

