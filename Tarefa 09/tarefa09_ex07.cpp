/* 7. Peça ao usuário para digitar seus dados pessoais (Nome, Endereço, Data de Nascimento, Cidade, CEP, e-mail)
, verifique se as informações de Data de Nascimento, CEP e e-mail fazem sentido, e mostre ao usuário as informações,
 se estão todas corretas, ou mostre que alguma informação estava errada. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

struct data_nascimento {
	int Dia, Mes, Ano;
};

struct dados_usuario {
	char nome[50], endereco[100];
	char email[40], cidade[30];
	int cep;
	struct data_nascimento Data;
};

int confereData(struct data_nascimento Data) {
	if(Data.Dia >= 1 && Data.Dia <= 31) {
		if(Data.Mes >= 1 && Data.Mes <= 12) {
			if(Data.Ano >= 1900 && Data.Ano <= 2022) {
				return 1;
			}
		}
	} else {
		return 0;
	}
}

int confereCEP(int CEP) {
	if(CEP >= 1000000 && CEP <= 99999999) {
		return 1;
	} else {
		return 0;
	}
}

int confereEmail(struct dados_usuario Usuario) {
	// variaveis para verificacao do tamanho do email
	int tam = strlen(Usuario.email), arroba=0, ponto=0, pontoAntes=0, pontoDepois=0, i;
	for (i = 0; i < tam; i++) {
		char c = Usuario.email[i];
	    if(c == '@') {
	    	if (arroba) {
	    		// para nao ter 2 arrobas;
	        	break; 
	    	}
	    	arroba = 1;
	    	if (i < 3) {
	    		// se for menor q 3 antes do arroba tambem esta errado
	    		break;
	    	}
		} else if (arroba) { //agora q encontrou o arroba
	    	if (ponto) { 
	    		// se já encontrou . depois de @
	        	pontoDepois++;
	      	} else if(c == '.') {
	        	ponto = 1;
	        	if (pontoAntes < 3) {
	          		break; // se . depois de @ vier antes de 3 caracteres, erro
	        	}	
	      	} else {
	        	pontoAntes++;
	      	}
	    }
	} 
	
	if(i == tam && pontoDepois > 1) {
		return 1;
	}
	else {
    	return 0;
	}
}

void imprimeUsuario(struct dados_usuario Usuario) {
	printf(" -------- DADOS FORNECIDOS DO USUÁRIO ---------\n");
	printf("Nome: %sEndereço: %s", Usuario.nome, Usuario.endereco);
	printf("CEP: %d \nCidade: %s", Usuario.cep, Usuario.cidade);
	printf("Email: %s", Usuario.email);
	printf("Data Nascimento: %d/%d/%d\n", Usuario.Data.Dia, Usuario.Data.Mes, Usuario.Data.Ano);
}

void cadastraUsuario(struct dados_usuario &Usuario) {
		printf("======| Cadastro do Usuario |======\n\n");
		printf("Nome: ");
		fflush(stdin);
		fgets(Usuario.nome, 50, stdin);
		printf("Endereço (Rua + N°): ");
		fflush(stdin);
		fgets(Usuario.endereco, 100, stdin);
		printf("CEP: ");
		scanf("%d", &Usuario.cep);
		printf("Cidade: ");
		fflush(stdin);
		fgets(Usuario.cidade, 30, stdin);
		printf("E-mail: ");
		fgets(Usuario.email, 40, stdin);
		printf("Data Nascimento: \n");
		printf("Dia: ");
		scanf("%d", &Usuario.Data.Dia);
		printf("Mes: ");
		scanf("%d", &Usuario.Data.Mes);
		printf("Ano: ");
		scanf("%d", &Usuario.Data.Ano);
		system("cls");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	struct dados_usuario Usuario;
	char escolha = 's';
	int erros=0;
	do {
		cadastraUsuario(Usuario);
		do{
			if(!confereCEP(Usuario.cep)) {
				erros++;
				printf("CEP ERRADO!\nDigite novamente: ");
				scanf("%d", &Usuario.cep);
			} else if(!confereEmail(Usuario)) {
				erros++;
				printf("EMAIL ERRADO!\nDigite novamente: ");
				fflush(stdin);
				fgets(Usuario.email, 40, stdin);
			} else if(!confereData(Usuario.Data)) {
				erros++;
				printf("DATA NASCIMENTO ERRADA!\nDigite novamente:\n");
				printf("Dia: ");
				scanf("%d", &Usuario.Data.Dia);
				printf("Mes: ");
				scanf("%d", &Usuario.Data.Mes);
				printf("Ano: ");
				scanf("%d", &Usuario.Data.Ano);
			} else{
				system("cls");
				erros =0;
			}
		} while(erros > 0);
		imprimeUsuario(Usuario);
		printf("\n\nDeseja continuar? [S] Sim [N] Nao =>");
		fflush(stdin);
		scanf("%c", &escolha);
		system("cls");
	} while(escolha != 'n');
	return 0;
}

