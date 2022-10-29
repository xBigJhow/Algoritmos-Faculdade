#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#define QTD 10

struct data_nascimento {
	int Mes;
	int Ano;
	int Dia;
};

struct dados_pessoais {
	char nome[50];
	int altura;
	struct data_nascimento Data;
};

void CriaData(struct data_nascimento &Data ) {
	Data.Dia = 1 + (rand() % 30);
	Data.Mes = 1 + (rand() % 12); 
	Data.Ano = 1950 + (rand() % 49);
}

void cadastraPessoa(int i, struct dados_pessoais &Pessoa) {
	printf("----- CADASTRANDO PESSOAS -----\n");
	printf(" === ESTA É A %d° PESSOA ===", i+1);
	printf("\nNome: ");
	fflush(stdin);
	fgets(Pessoa.nome, 50, stdin);
	printf("Altura (cm):");
	scanf("%i", &Pessoa.altura);
	CriaData(Pessoa.Data);
	system("cls");
}

void listaPessoas(int cadastrados, struct dados_pessoais Pessoa) {
	printf("\n %d° Pessoa Cadastrada\n", cadastrados+1);
	printf("Nome: %s", Pessoa.nome);
	printf("Altura: %d\n", Pessoa.altura);
	printf("Nascimento: %d/%d/%d\n", Pessoa.Data.Dia, Pessoa.Data.Mes, Pessoa.Data.Ano);
	printf("--------------------------------\n");
}

void listaSomenteData(int cadastrados, struct dados_pessoais Pessoa, int diaP, int mesP, int anoP) {
	if((Pessoa.Data.Mes <= mesP && Pessoa.Data.Ano <= anoP && Pessoa.Data.Dia <= diaP
			|| (Pessoa.Data.Ano < anoP)) ) {
				printf("Nome: %s", Pessoa.nome);
				printf("Altura: %d\n", Pessoa.altura);
				printf("Nascimento: %d/%d/%d\n", Pessoa.Data.Dia, Pessoa.Data.Mes, Pessoa.Data.Ano);
				printf("--------------------------------\n");
			}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	srand((unsigned) time(NULL)); // gerar valor aleatorio
	// inicializando as structs
	struct dados_pessoais Pessoa[QTD];
	struct data_nascimento Data;
	int cadastrados=0, menu;
	int diaProc, mesProc, anoProc;
	do {
		printf("=-=-=-=- MENU -=-=-=-=\n");
		printf("[1] Cadastrar Pessoas\n[2] Listar Pessoas Cadastradas\n");
		printf("[3] Consultar por Data\n[4] Sair\nEscolha: ");
		scanf("%d", &menu);
		system("cls");
		switch(menu) {
			case 1:
				cadastraPessoa(cadastrados, Pessoa[cadastrados]);
				cadastrados++;
				break;
			case 2:
				for(int i=0; i<cadastrados; i++) {
					listaPessoas(i, Pessoa[i]);	
				}
				break;
			case 3:
				printf("Digite a data procurada:\n");
				printf("Dia: ");
				scanf("%d", &diaProc);
				printf("Mes: ");
				scanf("%d", &mesProc);
				printf("Ano: ");
				scanf("%d", &anoProc);
				printf("Pessoas que nasceram antes da data: %d/%d/%d\n", diaProc, mesProc, anoProc);
				for(int i=0; i<cadastrados; i++) {
					listaSomenteData(cadastrados, Pessoa[i], diaProc, mesProc, anoProc);	
				}
				break;
			case 4:
				// para o programa!
				printf("Volte Sempre!");
				cadastrados = 10;
				break;
			default:
				printf(">> OPÇÃO INCORRETA! <<");
				break;	
		}
	} while	(cadastrados < QTD);
	return 0;
}
