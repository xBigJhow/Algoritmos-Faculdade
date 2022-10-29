/* 5. Dado um vetor de 30 n�meros inteiros, exiba: 
a. A localiza��o do primeiro n�mero negativo 
b. A quantidade de n�meros pares 
c. A m�dia dos n�meros �mpares 
d. O maior n�mero primo 
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vetor[30];
	int contador, posNegativo=30, qtdPares=0, qtdImpar;
	float mediaImpar, valorTotalImpar;
	int i, j, maiorPrimo, verificaPrimo, aux, contDiv=0;
	//pegando todos os numeros
	for(j=0; j<30; j++) {
		printf("Valor da posicao %d: ", j);
		scanf("%d", &vetor[j]);
	}
	//verifica posicao negativo
	for(contador=0; contador <30; contador++) {
		if(vetor[contador] < 0 && contador > 0 && contador < posNegativo) {
			posNegativo = contador;
		}
		if(vetor[contador] % 2 == 0 || (vetor[contador] * -1) %2 == 0) {
			qtdPares++;
		} else {
			qtdImpar++;
			valorTotalImpar += vetor[contador];
		}
		printf("%d \n", vetor[contador]);
		aux = vetor[contador];
		if(aux < 0) {
			aux = aux * -1;
		}
		if(aux > 2) { // 3
			for(i=2; i<=aux; i++) {
				if(aux % i == 0) {
					contDiv = contDiv + 1;
				}
			}
			if(contDiv == 1) {
				if(aux > maiorPrimo) {
					contDiv = 0;
					maiorPrimo = aux;
				}
			} else {
				contDiv=0;
			}
		}
	}
	mediaImpar = valorTotalImpar / qtdImpar;
	printf("O primeiro numero negativo esta na posicao %d", posNegativo);
	printf("\nMedia Impar: %.2f", mediaImpar);
	printf("\nMaior Primo: %d", maiorPrimo);
	
	return 0;
}
