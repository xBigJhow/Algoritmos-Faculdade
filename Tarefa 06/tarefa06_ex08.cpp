// 8 Dada uma matriz real A com M linhas e N colunas e um vetor real V com N elementos, determinar o produto de A por V. 
#include <stdio.h>
#include <cstdlib>

int main(){
    // variaveis para matriz, loop e valor randomico
    int m, n, x, i, j;
    
    printf("Quantidade de Linhas: ");
    scanf("%d", &m);
    printf("Quantidade de Colunas: ");
    scanf("%d", &n);
    //criando matriz e vetor com valores passados
    int matriz[m][n], vetor[n];
    // alimentando e imprimindo matriz na tela;
    printf("Matriz: \n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
        	x = rand() % 5 + 1;
            matriz[i][j] = x; 
            x = 0;
            if(j==0){
            	printf("| ");
			}
            printf("%d  ", matriz[i][j]);
            if(j == (n-1)){
            	printf("| ");
			}
        }
        printf("\n");
    }
    // alimentando e imprimindo vetor;
    printf("\nVetor: \n");
    for(i=0; i<m; i++){
    	x = rand() % 5 + 1;
       	vetor[i] = x;
    	printf("| %d |\n", vetor[i]);
	}
    //criando vetor resultante e loop para calculo
    printf("\nResultado: ");
    int vetor_resultado[m], produto=0;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            produto += (matriz[i][j] * vetor[j]);
        }
        vetor_resultado[i] = produto;
        produto = 0;
        printf("%d   ", vetor_resultado[i]);
    }
}
