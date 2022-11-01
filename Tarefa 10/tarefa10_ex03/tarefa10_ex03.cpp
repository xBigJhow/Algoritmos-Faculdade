/* 3. Fa�a um programa em C que l� 5 frases de, no m�ximo, 50 caracteres cada uma e 
armazene-as em um arquivo. Mas, antes de gravar cada frase no arquivo, � necess�rio 
converter todas as suas letras para mai�sculas. O nome do arquivo ser� fornecido, via 
teclado, pelo usu�rio. A fun��o que converte mai�scula para min�scula � o toupper(). 
A seguir, feche o arquivo e reabra para leitura exibindo todas as frases convertidas. 
Como cada texto pode ter tamanho diferente, ser� necess�rio gravar antes de cada 
frase o tamanho do texto a ser lido. logo ser�o necess�rios dois comandos de grava��o 
e leitura (um para o n�mero inteiro que indica a quantidade de caracteres da frase e 
outro para a frase com o tamanho lido) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	// variaveis
	FILE *arquivo;
	int tamanhoFrase[5];
	char frase[50];
	char c;
	// abrindo arquivo e lendo frase por frase, alem de armazenar o tamanho de cada frase
	arquivo = fopen("tarefa10_ex03.txt", "a");
	for(int i=0; i<5; i++) {
		printf("Digite a %d� frase: ", i+1);
		fflush(stdin);
		fgets(frase, 50, stdin);
		tamanhoFrase[i] = strlen(frase);
		// ja deixando as frases escritas em maiusculo...
		for(int j =0 ; j < strlen(frase); j++) {
			if(frase[j] != '\0' && '\n') {
				frase[j] = toupper(frase[j]);
				fprintf(arquivo, "%c", frase[j]);
			}	
		}
	}
	//se o arquivo digitado nao foi nulo, os dados foram guardados
	if(arquivo != NULL) {
		printf("\nDados guardados com sucesso!");
	}
	//arquivo fechado conforme solicitado pelo exercicio
	printf("\nArquivo fechado!");
	fclose(arquivo);
	//re-abrindo arquivo para leitura utilizando a 
	//variavel com o tamanho de cada frase
	arquivo = fopen("tarefa10_ex03.txt", "r");
	if(arquivo != NULL) {
		printf("\nArquivo aberto com sucesso para leitura!\n");
	}
	for(int i=0; i<5; i++) {
		for(int j=0; j< tamanhoFrase[i]; j++) {
			c = getc(arquivo);
			printf("%c", c);
		}
	}
	
}
