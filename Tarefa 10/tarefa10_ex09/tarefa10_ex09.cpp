/* 9. Faça um programa que receba o nome de um arquivo de entrada e outro de saída. O
arquivo de entrada contém em cada linha o nome de uma cidade (ocupando 40 
caracteres) e o seu número de habitantes. O programa dever ´a ler o arquivo de 
entrada e gerar um arquivo de saída onde aparece o nome da cidade mais populosa 
seguida pelo seu número de habitantes */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	// variaveis
	char maisPessoasCidade[40];
	char cidades[40];
	char resposta = 's';
	int maisPessoas;
	int qtdHabitantes;
	//arquivos
	FILE *arquivo;
	FILE *cidadePopulosa;
	//abrindo arquivo
	arquivo = fopen("cidades.txt", "a");
	do {
		system("cls");
		//perguntas sobre cidade e qtd habitante
		printf("Nome da Cidade: ");
		fflush(stdin);
		fgets(cidades, 40, stdin);
		printf("Quantidade de Habitantes: ");		
		scanf("%d", &qtdHabitantes);
		//imprindo no arquivo as informacoes
		fprintf(arquivo, "%s", cidades);
		fprintf(arquivo, "%d", qtdHabitantes);
		fprintf(arquivo, "\n");
		//verificacao de cidade mais populosa
		if(qtdHabitantes > maisPessoas) {
			maisPessoas = qtdHabitantes;
			strcpy(maisPessoasCidade, cidades);
		}
		//pergunta para continuar adicionando cidades
		printf("\n\n\nDeseja adicionar outra cidade? [S] Sim [N] Nao\nEscolha:  ");
		fflush(stdin);
		scanf("%c", &resposta);		
	} while(resposta == 's' || resposta == 'S');
	fclose(arquivo);
	cidadePopulosa = fopen("Cidade Populosa.txt", "a");
	fprintf(cidadePopulosa, "%s", maisPessoasCidade);
	fprintf(cidadePopulosa, "%d", maisPessoas);
	fclose(cidadePopulosa);
}

