/* 5. Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário 
de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Código do Setor onde trabalha 
(0-99), Cargo que ocupa (string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário,
 armazenados na estrutura e exibidos na tela. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define qtd 100
struct data_nascimento {
	int Dia, Mes, Ano;
};
struct dados_funcionario {
	int idade, setor;
	char nome[50], cpf[11], sexo, cargo[30];
	float salario;
	struct data_nascimento Data;
};

void imprimirFunc(int i, struct dados_funcionario Funcionario) {
	printf("------ Funcionï¿½rio %d ------\n", i);
	printf("Nome: %s \nCPF: %s \nIdade: %i\n", Funcionario.nome, Funcionario.cpf, Funcionario.idade);
	printf("Sexo: %c\nSetor: %d\nCargo: %s\n", Funcionario.sexo, Funcionario.setor, Funcionario.cargo);
	printf("Salï¿½rio: R$%.2f\n", Funcionario.salario);
	printf("Data Nascimento: %d/%d/%d\n", Funcionario.Data.Dia, Funcionario.Data.Mes, Funcionario.Data.Ano);	
}

void cadastraFunc(int i, struct dados_funcionario &Funcionario) {
		printf("<:--- INSIRA OS DADOS DO FUNCIONARIO ---:>\n");
		printf("%dï¿½ Funcionario\n", i+1);
		printf("Nome: ");
		fflush(stdin);
		gets(Funcionario.nome);
		printf("CPF: ");
		fflush(stdin);
		fgets(Funcionario.cpf, 11, stdin);
		printf("Idade: ");
		scanf("%d", &Funcionario.idade);
		printf("Sexo [M] Masculino [F] Feminino: ");
		fflush(stdin);
		scanf("%c", &Funcionario.sexo);
		printf("Setor onde trabalha [0 - 99]: ");
		scanf("%d", &Funcionario.setor);
		printf("Cargo: ");
		fflush(stdin);
		gets(Funcionario.cargo);
		printf("Salï¿½rio: R$");
		scanf("%f", &Funcionario.salario);
		printf("Data de nascimento:\n");
		printf("Dia: ");
		scanf("%d", &Funcionario.Data.Dia);
		printf("Mes: ");
		scanf("%d", &Funcionario.Data.Mes);
		printf("Ano: ");
		scanf("%d", &Funcionario.Data.Ano);
		system("cls");
}

int main() {
	setlocale(LC_ALL, "Portuguese"); // pt-br
	struct dados_funcionario Funcionario[qtd];
	int menu, cadastrados=0;
	do {
		printf("=-=-=-=- MENU -=-=-=-=\n");
		printf("[1] Cadastrar Funcionario\n[2] Listar Funcionarios \n");
		printf("[3] Sair\nEscolha: ");
		scanf("%d", &menu);
		system("cls");
		switch(menu) {
			case 1:
				cadastraFunc(cadastrados, Funcionario[cadastrados]);
				cadastrados++;
				break;
			case 2:
				for(int i=0; i<cadastrados; i++) {
					imprimirFunc(i+1, Funcionario[i]);
				}
				break;
			case 3:
				// para o programa!
				printf("Volte Sempre!");
				cadastrados = 100;
				break;
			default:
				printf(">> OPï¿½ï¿½O INCORRETA! <<");
				break;	
		}
	} while	(cadastrados < qtd);	
	return 0;
}
