/* Exercícios:
1. Seja X uma lista contendo os nomes de clientes de um banco e Y uma lista contendo o 
saldo destes clientes, escreva um programa em C que gere um arquivo texto com os 
nomes e respectivos saldos em ordem alfabética */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <ctype.h>

int main() {
	// PT BR
	setlocale(LC_ALL, "Portuguese");
	
	int qtd; // qtd usada para quantia de clientes,
	printf(" ============= BANCO ===============\n");
	printf("Quantos clientes deseja inserir? -> ");
	scanf("%d", &qtd);
	system("cls");
	// variaveis
	char nomeCliente[qtd][40];
	char auxiliarNome[40];
	float saldoCliente[qtd];
	float auxiliarSaldo;
	
	//loop para inserir os dados;
	for(int i=0; i<qtd; i++) {
		printf("============ CADASTRO DO %d° CLIENTE ============\n", i+1);
		printf("Nome do Cliente: ");
		fflush(stdin);
		fgets(nomeCliente[i], 40, stdin);
		printf("Saldo do Cliente: ");
		scanf("%f", &saldoCliente[i]);
		system("cls");
	}
	// ORDENANDO NOMES E SALARIOS 
    for(int x=0; x < qtd; x++) {
        for(int y= x+1; y < qtd; y++) {
            //CONFERE SE PRECISA FAZER A TROCA
            if (strcmp(nomeCliente[x], nomeCliente[y]) > 0) {
            	// COLOCANDO EM ORDEM ALFABETICA OS CLIENTES
            	strcpy(auxiliarNome, nomeCliente[x]);
            	strcpy(nomeCliente[x], nomeCliente[y]);
            	strcpy(nomeCliente[y], auxiliarNome);
            	// E CONSEQUENTEMENTE OS SALDOS...
            	auxiliarSaldo = saldoCliente[x];
            	saldoCliente[x] = saldoCliente[y];
            	saldoCliente[y] = auxiliarSaldo;
            }
        }
    }
    
    // CRIANDO ARQUIVO.
	FILE *arquivo;
	
	arquivo = fopen("cadastro_clientes.txt", "a");
	for(int i =0; i< qtd; i++) {
		fprintf(arquivo, "%s", nomeCliente[i]);
		fprintf(arquivo, "%.2f", saldoCliente[i]);
		fprintf(arquivo, "\n");
	}
	fclose(arquivo);
	return 0;
}

