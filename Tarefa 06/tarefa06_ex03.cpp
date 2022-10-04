#include <stdio.h>

int main(){
	int l, c;
	// definindo quantidade de linhas e colunas para matriz
	printf("Quantidade de Linhas: ");
	scanf("%d", &l);
	printf("Quantidade de Colunas: ");
	scanf("%d", &c);
	//variaveis
	unsigned int matriz_a[l][c], matriz_b[l][c],matriz_c[l][c] ;
	int i, j;
	// inserindo valores na matriz A
	printf("--- Valores da Matriz A ---\n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("Linha [%d] e Coluna[%d]: ", i, j);
			scanf("%d", &matriz_a[i][j]);	
		}
	}
	// inserindo valores para a matriz B
	printf("\n--- Valores da Matriz B ---\n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("Linha [%d] e Coluna[%d]: ", i, j);
			scanf("%d", &matriz_b[i][j]);
		}
	}
	// mostrando matriz A
	printf("--- Matriz A ---\n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("%d ", matriz_a[i][j]);
		}
		printf("\n");
	}
	// mostrando matriz B
	printf("--- Matriz B ---\n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			printf("%d ", matriz_b[i][j]);
		}
		printf("\n");
	}
	// somando e mostrando na tela a matriz C
	printf("--- Matriz C ---\n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
			printf("%d ", matriz_c[i][j]);
		}
		printf("\n");
	}
}

