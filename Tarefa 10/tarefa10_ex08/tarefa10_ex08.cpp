/* 8. Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo como conteúdo dos dois primeiros 
juntos (o conteúdo do primeiro seguido do conteúdo do segundo). */

#include <stdlib.h>
#include <stdio.h>

int main() {
	char c;
	FILE *arquivoUm;
	FILE *arquivoDois;
	FILE *arquivoTres;
	
	arquivoUm = fopen("tarefa10_ex08_1.txt", "a");
	arquivoDois = fopen("tarefa10_ex08_2.txt", "a");
	arquivoTres = fopen("tarefa10_ex08_3.txt", "a");
	
	
	printf("Digite algo para o primeiro arquivo: ");
	while(c != '\n') {
		scanf("%c", &c);
		fprintf(arquivoUm, "%c", c);
		fprintf(arquivoTres, "%c", c);
	}
	fflush(stdin);
	c = ' ';
	printf("Digite algo para o segundo arquivo: ");
	while(c != '\n') {
		scanf("%c", &c);
		fprintf(arquivoDois, "%c", c);
		fprintf(arquivoTres, "%c", c);
	}
    
}
