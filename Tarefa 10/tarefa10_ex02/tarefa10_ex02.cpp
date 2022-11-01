/* 2. Utilizando o mesmo algoritmo do programa anterior, escreva um programa que 
busque um cliente existente no arquivo e atualize seu saldo conforme:
a. Digitando D, deposita um novo valor que é somado ao saldo já existente
b. Digitando S, saca um novo valor que é subtraído do saldo já existente
c. Digitando Z, saca todo valor, zerando o saldo existente
d. Digitando E, encerra a conta, removendo o registro do arquivo*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <ctype.h>
#include <stdbool.h>

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
    //MOVIMENTANDO SALDO
    int x;
    char continuar = 's';
    char attCliente[40], auxiliarProcura[40];
    char opcaoBanco;
    float dep, saque, zerarConta;
    do {
    	printf("======== MOVIMENTACAO DE CONTAS =========\n");
    	printf("Qual cliente deseja movimentar? ->");
    	fflush(stdin);
    	fgets(attCliente, 40, stdin);
    	for(int i=0; i<qtd; i++ ) {
    		strcpy(auxiliarProcura, nomeCliente[i]);
    		for(int j=0; j < 40; j++) {
    			attCliente[j] = tolower(attCliente[j]);
    			auxiliarProcura[j] = tolower(auxiliarProcura[j]);
			}
			if(strcmp(attCliente, auxiliarProcura) == 0) {
				x = i;
				break;
			} else {
				x = -1;
			}
		}
		system("cls");
		if(x != -1) {
			printf("========= CLIENTE ENCONTRADO ========\n");
			printf("\n[D] Depositar               [S] Sacar");
			printf("\n[Z]Retirar saldo completo   [E] Encerrar");
			printf("\nEscolha: ");
			fflush(stdin);
			scanf("%c", &opcaoBanco);
			fflush(stdin);
			switch(opcaoBanco) {
				case 'D':
					printf("========= OPCAO DEPOSITO =======\n");
					printf("Qual valor desejado para deposito: ");
					scanf("%f", &dep);
					saldoCliente[x] = saldoCliente[x] + dep;
					break;
				case 'S':
					printf("========= OPCAO SAQUE =======\n");
					printf("Qual valor desejado para saque: ");
					scanf("%f", &saque);
					saldoCliente[x] = saldoCliente[x] - saque;
					break;
				case 'Z':
					printf("========= OPCAO SAQUE TOTAL =======\n");
					printf("R$%.2f retirados da conta\n", saldoCliente[x]);
					saldoCliente[x] = 0;
					printf("Saldo atual: R$%.2f", saldoCliente[x]);
					break;
				case 'E':
					for(int i=x; i<qtd; i++) {
						strcpy(nomeCliente[i], nomeCliente[i+1]);
						saldoCliente[i] = saldoCliente[i+1];
					}
					break;
				default:
					printf("OPCAO INVALIDA!\n");
					break;
			}
		} else {
			printf("=========== CLIENTE NÃO ENCONTRADO ============");
		}
		fflush(stdin);
		printf("\n\nDeseja continuar? [S] Sim [N] Não\nEscolha: ");
		scanf("%c", &continuar);
		system("cls");
	} while(continuar == 's' || continuar == 'S');
    // CRIANDO ARQUIVO.
	FILE *arquivo;
	arquivo = fopen("cadastro_clientes.txt", "w");
	for(int i =0; i< qtd; i++) {
		fprintf(arquivo, "%s", nomeCliente[i]);
		fprintf(arquivo, "%.2f", saldoCliente[i]);
		fprintf(arquivo, "\n");
	}

	return 0;
}

