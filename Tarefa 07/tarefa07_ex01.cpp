/* 1. Determinada empresa tem várias duplicatas de clientes. Faça um algoritmo que: 
a. Imprima o nome do cliente, valor da duplicata e dia de vencimento das duplicatas vencidas; 
b. Após resolvido o item anterior, faça o mesmo com as duplicatas a vencer; 
c. Forneça o valor total das duplicatas vencidas; 
d. Forneça o valor total das duplicatas a vencer no próximo mês; 
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

void imprimeTodas(char nome_cliente[][30], float valor_duplicata[], int dia_mes_ano[][3], int n){
	printf("NOME:\t VALOR:\t\t VENCIMENTO:\n");
	for(int i=0; i<n; i++){
		printf("%s \t R$%.2f\t %d/%d/%d\n", nome_cliente[i], valor_duplicata[i], dia_mes_ano[i][0], dia_mes_ano[i][1], dia_mes_ano[i][2]);
	}
}

void imprimeVencidas(char nome_cliente[][30], float valor_duplicata[], int dia_mes_ano[][3], int n){
	int data_hoje[3] = {8, 10,2022};
	float soma_duplicata = 0;
	printf("NOME:\tVALOR:\t\tVENCIMENTO:\n");
	for(int i=0; i<n; i++){
		if(dia_mes_ano[i][2] <= data_hoje[2]){
			if(dia_mes_ano[i][2] == data_hoje[2] && dia_mes_ano[i][1] <= data_hoje[1] || dia_mes_ano[i][2] < data_hoje[2]){
				if(dia_mes_ano[i][1] == data_hoje[1] && dia_mes_ano[i][0] < data_hoje[0] || dia_mes_ano[i][1] < data_hoje[1]){
					printf("%s \t R$%.2f\t %d/%d/%d\n", nome_cliente[i], valor_duplicata[i], dia_mes_ano[i][0], dia_mes_ano[i][1], dia_mes_ano[i][2]);
					soma_duplicata += valor_duplicata[i];
				}
			}
		}
	}
	printf("\n\n\n\n -> VALOR DAS DUPLICATAS VENCIDAS: R$%.2f",soma_duplicata);
}

void imprimeVencer(char nome_cliente[][30], float valor_duplicata[], int dia_mes_ano[][3], int n){
	int data_hoje[3] = {8, 10,2022};
	float soma_duplicata = 0;
	printf("NOME:\tVALOR:\t\tVENCIMENTO:\n");
	for(int i=0; i<n; i++){
		if(dia_mes_ano[i][2] >= data_hoje[2]){
			if(dia_mes_ano[i][2] == data_hoje[2] && dia_mes_ano[i][1] >= data_hoje[1] || dia_mes_ano[i][2] > data_hoje[2]){
				if((dia_mes_ano[i][2] == data_hoje[2] && dia_mes_ano[i][1] == data_hoje[1] && dia_mes_ano[i][0] > data_hoje[0]) || (dia_mes_ano[i][2] > data_hoje[2]) || (dia_mes_ano[i][2] == data_hoje[2] && dia_mes_ano[i][1] > data_hoje[1])){
					printf("%s \t R$%.2f\t %d/%d/%d\n", nome_cliente[i], valor_duplicata[i], dia_mes_ano[i][0], dia_mes_ano[i][1], dia_mes_ano[i][2]);
					soma_duplicata += valor_duplicata[i];
				}
			}
		}
	}
	printf("\n\n\n\n-> DUPLICATAS A VENCER: R$%.2f",soma_duplicata);
}

int main(){
	int n;
	printf("Quantidade de Duplicata: ");
	scanf("%d", &n);
	// nome, valor, dia mes e ano 
	char nome[n][30];
	float valor[n];
	int data[n][3];
	for(int i=0; i<n; i++){
		system("cls");	
		printf("----- DUPLICATA DE CLIENTES ----\n");
		printf("Duplicata no nome de: ");
		scanf("%s", &nome[i]);
		printf("No valor de : R$");
		scanf("%f", &valor[i]);
		printf("Vencimento:\n");
		printf("Dia: ");
		scanf("%d", &data[i][0]);
		printf("Mes: ");
		scanf("%d", &data[i][1]);
		printf("Ano: ");
		scanf("%d", &data[i][2]);
	}
	char continuar = 's';
	int opc;
	while(continuar == 's'){
		printf("\n\n\n ======= MENU ========\n");
		printf("[1] Imprimir todas Duplicatas \n");
		printf("[2] Imprimir Duplicatas vencidas\n");
		printf("[3] Imprimir Duplicatas a vencer\n");
		printf("\nEscolha: ");
		fflush(stdin);
		scanf("%d", &opc);
		system("cls");
		switch(opc){
			case 1:
				imprimeTodas(nome, valor, data, n);
				break;
			case 2:
				imprimeVencidas(nome, valor, data, n);
				break;
			case 3:
				imprimeVencer(nome, valor, data, n);
				break;
			default:
				printf("\nOPCAO ERRADA!\n");
				break;
		}
		
	}
}

