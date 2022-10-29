/* 2. Considerando como dados, as notas de uma turma de 40 alunos, escreva um programa em C que exiba: 
a. A média das notas 
b. A quantidade de notas acima desta média  */

#include <stdio.h>
#include <stdlib.h>
#define NOTAS 40

int main() {
	//variaveis
	int qtdAcimaMedia=0, i;
	float vetor[NOTAS], media, valorTotal=0;
	//inserindo valores
	for(i=0; i<NOTAS; i++) {
		printf("Nota do %do aluno: ", i+1);
		scanf("%f", &vetor[i]);
		valorTotal += vetor[i];
	}
	//achando valor da media
	media = valorTotal / NOTAS;
	//percorrendo vetor para ver acima da media
	for(i=0; i<NOTAS; i++) {
		if(vetor[i] > media) {
			qtdAcimaMedia++;
		}
	}
	//printando resultado
	printf("A media foi de %.2f e %d alunos estavam acima da media", media, qtdAcimaMedia);
	
	return 0;
}

