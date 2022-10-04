#include <stdio.h>
#include <time.h>
int main(){
	// para gerar valor aleatorio mais pra frente
	srand((unsigned) time(NULL));
	//variaveis
	int l=20, c=10;
	int matriz[l][c];
	int vetor_soma[l], soma=0, confere_linha=0, maior_linha=0;
	int i, j, z, x;
	
	for(i=0; i<l; i++){
		for(j=0; j<c;j++){
			// alimentar a matriz com numeros de 0 a 99
			x = rand() % 100;
			matriz[i][j] = x;
			soma += matriz[i][j];
		}
		printf("Soma da Linha %d: %d \n", i, soma);
		vetor_soma[i] = soma;
		soma = 0;
	}
	for(z=0; z<l; z++){
		if(z == 0){
			confere_linha = vetor_soma[z];
		} else{
			if(vetor_soma[z] > confere_linha){
				confere_linha = vetor_soma[z];
				maior_linha = z;
			}
		}
	}
	printf("\n A maior soma esta na linha %d com valor %d", maior_linha, confere_linha);
	return 0;
}


