#include <stdio.h>

int main(){
	
	int i, j, n=0;
	int contador1=1, contador2=1;
	printf("Matriz de ordem: ");
	scanf("%d", &n);
	
	int matriz[n][n];
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matriz[i][j] = contador1 * contador2;
			printf("%d ", matriz[i][j]);
			contador2++;
		}
		printf("\n");
		contador1++;
		contador2 = 1;
	}	
}


