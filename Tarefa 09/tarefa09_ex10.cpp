/* 10. Faça um programa para simular uma agenda de telefones. Para cada pessoa deve-se ter os 
seguintes dados:
* Nome
* E-mail
* Endereço (contendo campos para Rua, número, complemento, bairro, cep, cidade,
estado, país).
* Telefone (contendo campo para DDD e número)
* Data de aniversário (contendo campo para dia, mês, ano).
* Observações: Uma linha (string) para alguma observação especial.
a. Definir a estrutura acima.
b. Declarar a variável agenda (vetor) com capacidade de agendar até 100 nomes.
c. Definir um bloco de instruções busca por primeiro nome: Imprime os dados da
pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
d. Definir um bloco de instruções busca por mês de aniversario: Imprime os dados de
todas as pessoas que fazem aniversário nesse mês.
e. Definir um bloco de instruções busca por dia e mês de aniversário: Imprime 
os dados de todas as pessoas que fazem aniversario nesse dia e mês.
f. Definir um bloco de instruções insere pessoa: Insere por ordem alfabética de 
nome.
g. Definir um bloco de instruções retira pessoa: Retira todos os dados dessa pessoa e
desloca todos os elementos seguintes do vetor para a posição anterior.
h. Definir um bloco de instruções imprime agenda com as opções:
* Imprime nome, telefone e e-mail */

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#define QTD 100

struct data_nascimento {
	int dia, mes, ano;
};

struct dados_telefone {
	int ddd, num_telefone;
};

struct dados_endereco {
	char rua[50], bairro[50], cidade[30], estado[30], pais[30];
	int numero_casa, cep;
};

struct dados_pessoais {
	char nome[50], email[50];
	struct dados_endereco Endereco;
	struct dados_telefone Telefone;
	struct data_nascimento Data;
	char obs[100];
};

void cadastraPessoas(struct dados_pessoais &Agenda, int &cadastrados) {
	printf("--------------- CADASTRANDO A %d° PESSOA ---------------\n", cadastrados+1);
	printf("Nome: ");
	fflush(stdin);
	fgets(Agenda.nome, 50, stdin);
	printf("Email: ");
	fflush(stdin);
	fgets(Agenda.email, 50, stdin);
	printf("----------------------  ENDEREÇO ----------------------\n");
	printf("Rua: ");
	fflush(stdin);
	fgets(Agenda.Endereco.rua, 50, stdin);
	printf("Bairro: ");
	fflush(stdin);
	fgets(Agenda.Endereco.bairro, 50, stdin);
	printf("Numero: ");
	scanf("%d", &Agenda.Endereco.numero_casa);
	printf("Cidade: ");
	fflush(stdin);
	fgets(Agenda.Endereco.cidade, 30, stdin);
	printf("CEP: ");
	scanf("%d", &Agenda.Endereco.cep);
	printf("Estado: ");
	fflush(stdin);
	fgets(Agenda.Endereco.estado, 20, stdin);
	printf("Pais: ");
	fflush(stdin);
	fgets(Agenda.Endereco.pais, 30, stdin);
	printf("----------------------  TELEFONE ----------------------\n");
	printf("DDD: ");
	scanf("%d", &Agenda.Telefone.ddd);
	printf("Telefone: ");
	scanf("%d", &Agenda.Telefone.num_telefone);
	printf("-------------------  DATA NASCIMENTO ------------------\n");
	printf("Dia: ");
	scanf("%d", &Agenda.Data.dia);
	printf("Mes: ");
	scanf("%d", &Agenda.Data.mes);
	printf("Ano: ");
	scanf("%d", &Agenda.Data.ano);
	cadastrados++;
	system("cls");
}

void imprimeDados(struct dados_pessoais Agenda, int i) {
	printf("Posição na Agenda: %d\n", i+1);
	printf("Nome: %s", Agenda.nome);
	printf("E-mail: %s", Agenda.email);
	printf("Telefone: (%d) %d\n", Agenda.Telefone.ddd, Agenda.Telefone.num_telefone);
	printf("-----------------------------------------------------\n");
	
}

void imprimeTodosDados(struct dados_pessoais Agenda, int i) {
	printf("Posicao na Agenda: %d\n", i+1);
	printf("Nome: %s", Agenda.nome);
	printf("E-mail: %s", Agenda.email);
	printf("Data nascimento: %d/%d/%d\n", Agenda.Data.dia,Agenda.Data.mes, Agenda.Data.ano);
	printf("Telefone: (%d) %d\n", Agenda.Telefone.ddd, Agenda.Telefone.num_telefone);
	printf("Endereço:");
	printf("Rua: %sN°%d", Agenda.Endereco.rua, Agenda.Endereco.numero_casa);
	printf("\nBairro: %s", Agenda.Endereco.bairro);
	printf("Cidade: %s", Agenda.Endereco.cidade);
	printf("CEP: %d", Agenda.Endereco.cep);
	printf("\nEstado: %s", Agenda.Endereco.estado);
	printf("País: %s", Agenda.Endereco.pais);
	printf("-----------------------------------------------------\n");
}

void removePosicao(struct dados_pessoais Agenda[], int posRemover, int &cadastrados) {
	// ESTA FUNCAO PEGA TODOS OS DADOS DA POSICAO Q VOCE REMOVEU E TROCA PELOS DADOS DA POSICAO SUBSEQUENTE
	// E DEPOIS REMOVE 1 DOS CADASTRADOS, 
	for(int i=posRemover; i<cadastrados; i++) {
		strcpy(Agenda[i].nome, Agenda[i+1].nome);
		strcpy(Agenda[i].email, Agenda[i+1].email);
		strcpy(Agenda[i].Endereco.rua, Agenda[i+1].Endereco.rua);
		strcpy(Agenda[i].Endereco.bairro, Agenda[i+1].Endereco.bairro);
		Agenda[i].Endereco.numero_casa = Agenda[i+1].Endereco.numero_casa;
		strcpy(Agenda[i].Endereco.cidade, Agenda[i+1].Endereco.cidade);
		Agenda[i].Endereco.cep = Agenda[i+1].Endereco.cep;
		strcpy(Agenda[i].Endereco.estado, Agenda[i+1].Endereco.estado);
		strcpy(Agenda[i].Endereco.pais, Agenda[i+1].Endereco.pais);
		Agenda[i].Telefone.ddd = Agenda[i+1].Telefone.ddd;
		Agenda[i].Telefone.num_telefone = Agenda[i+1].Telefone.num_telefone;
		Agenda[i].Data.dia = Agenda[i+1].Data.dia;
		Agenda[i].Data.mes = Agenda[i+1].Data.mes;
		Agenda[i].Data.ano = Agenda[i+1].Data.ano;
	}
	cadastrados--;
}

int main () {
	setlocale(LC_ALL, "Portuguese"); // pt-br
	int j=0, i=0, contador=0;
	int posRemover;
	int cadastrados=0;
	int menu_escolha = 0;
	int menu2_escolha = 0;
	int procuraMes =0, procuraDia=0;
	char procuraNome[15];
	char meses[12][20] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
					"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	// inicializando a estrutura
	struct dados_pessoais Agenda[QTD];
	do {
		// variaveis para os 2 menus do programa;
		menu_escolha = 0;
		menu2_escolha = 0;
		//variaveis resetando sempre que voltar pro menu.
		procuraMes =0;
		procuraDia=0;
		printf("============== AGENDA TELEFONICA ==============\n");
		printf("[1] Cadastrar Pessoa\n[2] Buscar por Nome\n");
		printf("[3] Buscar por mês de aniversario\n[4] Buscar por mês e dia de aniversario\n");
		printf("[5] Retirar pessoa\n[6] Imprimir cadastrados...\n");
		printf("[7] Sair!\nEscolha: ");
		scanf("%d", &menu_escolha);
		system("cls");
		switch(menu_escolha) {
			case 1:
				//cadastrar
				cadastraPessoas(Agenda[cadastrados], cadastrados);
				printf("Cadastrado com Sucesso!\n");
				break;
			case 2:
				//buscar por primeiro nome
				printf("--------------- BUSCA POR PRIMEIRO NOME ---------------\n");
				printf("Digite o primeiro nome da pessoa que deseja encontrar: ");
				fflush(stdin);
				fgets(procuraNome, 15, stdin);
				system("cls");
				printf("------ Pessoas que começa com o nome pesquisado ------ \n");
				// loop para conferir strings, se for igual imprime o nome da pessoa...
				while(i < cadastrados) {
					while(Agenda[i].nome[j] != ' ') {
						if(Agenda[i].nome[j] == procuraNome[j]) {
							contador++;
						} 
						j++;
					}
					if(strlen(procuraNome) == contador+1) {
						imprimeTodosDados(Agenda[i], i);
						contador = 0;	 
					}
					i++;
					j = 0;
				}
				i=0;
				break;
			case 3:
				//buscar por mes de aniversario
				printf("--------------- BUSCA POR MES DE ANIVERSARIO ---------------\n");
				printf("Qual mes deseja procurar? [1 a 12]  -->");
				scanf("%d", &procuraMes);
				system("cls");
				printf("-------------- Pessoas do mês de %s ----------- \n", meses[procuraMes-1]);
				for(int i=0; i< cadastrados; i++) {
					if(Agenda[i].Data.mes == procuraMes) {
						imprimeTodosDados(Agenda[i], i);
					}
				}
				printf("\n-------------------- FIM DA LISTA ------------------- \n\n\n\n");
				break;
			case 4:
				//buscar por dia e mes de aniversario
				printf("--------------- BUSCA POR MES E DIA DE ANIVERSARIO ---------------\n");
				printf("Qual dia deseja procurar? [1 a 31]  -->");
				scanf("%d", &procuraDia);
				printf("Qual mes deseja procurar? [1 a 12]  -->");
				scanf("%d", &procuraMes);
				system("cls");
				printf("-------------- Pessoas do dia %d de %s ----------- \n", procuraDia, meses[procuraMes-1]);
				for(int i=0; i< cadastrados; i++) {
					if(Agenda[i].Data.mes == procuraMes && Agenda[i].Data.dia == procuraDia) {
						imprimeTodosDados(Agenda[i], i);
					}
				}
				printf("\n-------------------- FIM DA LISTA ------------------- \n");
				break;
			case 5:
				//Retirar pessoa
				printf("----------------- REMOVENDO CADASTRO  -------------------\n");
				printf("Qual posição deseja remover?   -->");
				scanf("%d", &posRemover);
				//passando a posicao menos 1, para valor logico no indice do vetor.
				removePosicao(Agenda, posRemover-1, cadastrados);
				
				break;
			case 6:
				//imprimir cadastrado
				printf("========== MENU SECUNDÁRIO ==========\n");
				printf("[1] Imprimir Nome, Telefone e E-mail\n");
				printf("[2] Imprimir Todos os dados!\nEscolha:");
				scanf("%d", &menu2_escolha);
				system("cls");
				switch(menu2_escolha) {
					case 1:
						//imprimir somente nome telefone e-mail
						printf("-------------- DADOS PESSOAIS PARCIAIS --------------\n");
						for(int i=0; i<cadastrados; i++) {
							imprimeDados(Agenda[i], i);
						}
						printf("\n\n-------------------- FIM DA LISTA ------------------- \n");
						break;
					case 2:
						//imprimir todos os dados
						printf("-------------- DADOS PESSOAIS COMPLETOS --------------\n");
						for(int i=0; i<cadastrados; i++) {
							imprimeTodosDados(Agenda[i], i);
						}
						printf("\n\n-------------------- FIM DA LISTA ------------------- \n\n\n\n");
						break;
					default:
						printf("<<< OPÇÃO INEXISTENTE! REDIRECIONADO AO MENU ANTERIOR! >>>\n");
						break;
				}
				break;
			case 7:
				printf("Obrigado por utilizar nossa agenda telefônica!");
				break;
			default:
				printf("<<< OPCAO INEXISTENTE! >>>\n");
				break;
		}
	} while(menu_escolha != 7);
}





















