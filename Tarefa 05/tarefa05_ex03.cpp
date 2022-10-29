/* 3. Uma empresa vende N produtos diferentes. A empresa identifica cada produto por um código alfanumérico formado por 2 letras e 3 números. Dado um vetor com o nome dos produtos, gere um outro vetor com o código gerado pelo sistema. Exemplo:
a. Arroz Prato Fino ? AP001 
b. Arroz Prato Nobre ? AP002 
c. Arroz Agulinha ? AG001 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define TAM 50

int main() {
	int i, posPace=0;
	char nomeProduto[TAM], codigo[5];
	// este scanf vai ler até o pular linha (ENTER) do codigo...
	printf("Nome do Produto: ");
	scanf("%[^\n]", &nomeProduto);
	// quando achar o espaco, o posPace vai receber 1 posicao depois (primeira letra da segunda palavra)
	for(i=0; i<= strlen(nomeProduto); i++) {
		if(nomeProduto[i] == ' ') {
			posPace = i+1;
			break;
		}
	}
	codigo[0] = nomeProduto[0];
	codigo[1] = nomeProduto[posPace];
	codigo[2] = '0';
	codigo[3] = '0';
	codigo[4] = '1';
	printf("%s", codigo);
	
	return 0;
}
