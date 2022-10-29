/* 9.. Uma matriz D8x8 pode representar a posi��o atual de um jogo de damas (3), sendo que 0 indica uma casa vazia, 1 indica uma casa ocupada 
por uma pe�a branca e -1 indica uma casa ocupada por uma pe�a preta. Supondo que as pe�as pretas est�o se movendo no sentido crescente
 das linhas da matriz D, determinar as posi��es das pe�as pretas que: 
a)) podem tomar pe�as brancas; 
b)) podem mover-se sem tomar pe�as; 
c)) n�o podem se mover
*/
#include <stdio.h>
#include <cstdlib>
# define tam 8

int main(){
	// SUPONDO QUE DAMAS JOGA DE CASA EM CASA RETO.
	// variaveis pro tabuleiro
	unsigned int tabuleiro[tam][tam];
	int vetor[3] = {-1,0,1};
	int i, j, x;
	// alimentando tabuleiro com -1, 0 e 1.
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
		//printf("Tabuleiro [%d][%d]: ", i, j);
		//scanf("%d", &tabuleiro[i][j]);
		x = rand() % 3;
		tabuleiro[i][j] = vetor[x];
		}
	}
	printf(" ---------- TABULEIRO ----------\n");
	// imprimindo o tabuleiro.
	for(i=0; i<tam; i++){
		printf("|");
		for(j=0; j<tam; j++){
			if(tabuleiro[i][j] == -1){
				printf("%d |", tabuleiro[i][j]);
			} else{
			printf(" %d |", tabuleiro[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
	//determinando as pe�as pretas que tomam as brancas
	printf("Posicoes das pecas pretas que tomam as pecas brancas: \n");
	for(i=0; i<(tam); i++){
		for(j=0; j<tam; j++){
			if(tabuleiro[i][j] == 1 && tabuleiro[i+1][j] == -1 && tabuleiro[i-1][j] == 0){
				printf("[%d][%d]", i+1, j);
				printf("\n");
			}
		}
	}
	//determinando as pe�as pretas que andam sem tomar pe�as.
	printf("Posicoes das pecas pretas que andam sem tomar as pecas brancas: \n");
	for(i=0; i<(tam); i++){
		for(j=0; j<tam; j++){
			if(tabuleiro[i][j] == 0 && tabuleiro[i+1][j] == -1 && tabuleiro[i-1][j] == -1){
				printf("[%d][%d]", i+1, j);
				printf("\n");
			}
		}
	}
	//determinando as pe�as pretas que nao sem movem
	printf("Posicoes das pecas pretas que nao se movem: \n");
	for(i=0; i<(tam); i++){
		for(j=0; j<tam; j++){
			if(tabuleiro[i][j] == -1 && (tabuleiro[i-1][j] == 1 || tabuleiro[i-1][j] == -1  ) && (tabuleiro[i-2][j] == 1 || tabuleiro[i-2][j] == -1  )){
				printf("[%d][%d]", i, j);
				printf("\n");
			} 
		}
	}
}
	
