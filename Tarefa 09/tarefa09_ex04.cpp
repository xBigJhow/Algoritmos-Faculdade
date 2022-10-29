/* 4. Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: 
Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de até 10 alunos. 
Após ler todos os dados digitados, e depois de armazena-los em um vetor de estrutura, exibir na tela a listagem 
final dos alunos com as suas respectivas medias finais (use uma média ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define qtd 10

struct dados_aluno {
	int matricula, disciplina;
	char nome[50];
	float nota1, nota2, media;
};

void cadastraAluno(int i, struct dados_aluno &Aluno) {
		int peso1=1, peso2=2, somaPeso;
		float x, y;
		printf("<:--- INSERINDO DADOS DOS ALUNOS ---:>\n");
		printf("%d° Aluno\n", i+1);
		printf("Matrícula: ");
		scanf("%d", &Aluno.matricula);
		printf("Nome: ");
		fflush(stdin);
		gets(Aluno.nome);
		printf("[1]Port [2]Mat [3]Hist [4]Geo [5]Ed.Fis\n");
		printf("Disciplina: ");
		scanf("%d", &Aluno.disciplina);
		printf("Nota da 1° prova: ");
		scanf("%f", &Aluno.nota1);
		printf("Nota da 2° prova: ");
		scanf("%f", &Aluno.nota2);
		//calculando media ponderada
		x = Aluno.nota1 * peso1;			//fiz desta maneira
		y = Aluno.nota2 * peso2;			// para evitar erros
		somaPeso = peso1 + peso2;			// na hora de calcular
		Aluno.media = (x+y) / somaPeso; 	// a media...
		system("cls");
}

int main() {
	setlocale(LC_ALL, "Portuguese"); // pt-br
	struct dados_aluno Aluno[qtd];
	int menu, cadastrados=0;
	do {
		printf("=-=-=-=- MENU -=-=-=-=\n");
		printf("[1] Cadastrar Aluno\n[2] Listar Pessoas Cadastradas\n");
		printf("[3] Sair\nEscolha: ");
		scanf("%d", &menu);
		system("cls");
		switch(menu) {
			case 1:
				cadastraAluno(cadastrados, Aluno[cadastrados]);
				cadastrados++;
				break;
			case 2:
				printf("------------------ BOLETIM ESCOLAR --------------------\n");
				printf("Mat: \tNome: \tDisc:\tNota1:\tNota2:\tMédia:\n");
				for(int i=0; i<cadastrados; i++) {
					printf("%i\t%s", Aluno[i].matricula, Aluno[i].nome);
					printf("\t %d \t %.1f \t %.1f \t%.1f\n\n", Aluno[i].disciplina, Aluno[i].nota1, Aluno[i].nota2, Aluno[i].media);
				}
				break;
			case 3:
				// para o programa!
				printf("Volte Sempre!");
				cadastrados = 10;
				break;
			default:
				printf(">> OPÇÃO INCORRETA! <<");
				break;	
		}
	} while	(cadastrados < qtd);
	//colhendo informacoes de cada aluno
		
	return 0;
}
