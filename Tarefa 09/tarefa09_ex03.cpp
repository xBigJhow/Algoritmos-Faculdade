#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define QTD 5

struct dados_aluno {
	int matricula;
	char nome[50];
	float nota1, nota2, nota3;
};

int main() {
	setlocale(LC_ALL, "Portuguese"); // pt-br
	struct dados_aluno Aluno[QTD];
	//colhendo informacoes de cada aluno
	for(int i=0; i<QTD; i++) {
		printf("<:--- INSERINDO DADOS DOS ALUNOS ---:>\n");
		printf("%d° Aluno\n", i+1);
		printf("Matrícula: ");
		scanf("%d", &Aluno[i].matricula);
		printf("Nome: ");
		fflush(stdin);
		gets(Aluno[i].nome);
		printf("Nota da 1° prova: ");
		scanf("%f", &Aluno[i].nota1);
		printf("Nota da 2° prova: ");
		scanf("%f", &Aluno[i].nota2);
		printf("Nota da 3° prova: ");
		scanf("%f", &Aluno[i].nota3);
		system("cls");
	}
	// variaveis para uso em media e auxiliar
	printf("------------------ BOLETIM ESCOLAR --------------------\n");
	printf("Mat: \tNome: \tNota1:\tNota2:\tNota3:\tSituação:\n");
	int maiorNota, maiorMedia, menorMedia;
	float media, x=0, y=0; 
	for(int i=0; i<QTD; i++){
		//verificando maior nota da primeira prova
		y = Aluno[i].nota1;
		if(Aluno[i].nota1 > y) {
			maiorNota = i;
		}
		// calculando media
		x = (Aluno[i].nota1 + Aluno[i].nota2 + Aluno[i].nota3) / 3;
		// verificando maior e menor media
		if(i == 0) {
			media = x;
		} else if(x > media) {
			maiorMedia = i;
		} else if(x < media) {
			menorMedia = i;
		}
		printf("%i\t%s", Aluno[i].matricula, Aluno[i].nome);
		printf("\t %.1f \t %.1f \t %.1f \t", Aluno[i].nota1, Aluno[i].nota2, Aluno[i].nota3);
		if(x > 6) {
			printf("APROVADO\n");
		} else {
			printf("REPROVADO\n");
		}
	}
	printf("\n-------------------- INFORMAÇÕES ----------------------\n");
	printf("Maior Média = Matricula: %d nome: %s\n", Aluno[maiorMedia].matricula, Aluno[maiorMedia].nome);
	printf("Menor Média = Matricula: %d nome: %s\n", Aluno[menorMedia].matricula, Aluno[menorMedia].nome);
	printf("Maior Nota 1° Prova = Matricula: %d nome: %s", Aluno[maiorNota].matricula, Aluno[maiorNota].nome);
	return 0;
}
