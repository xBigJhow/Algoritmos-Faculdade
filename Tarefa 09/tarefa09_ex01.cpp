/* 1. Defina uma estrutura que ir� representar bandas de m�sica. Essa estrutura deve ter o nome da banda, que tipo 
de m�sica ela toca, o n�mero de integrantes e em que posi��o do ranking essa banda est� dentre as suas 5 bandas favoritas. 
a. Crie um looping para preencher as 5 estruturas de bandas criadas no exemplo passado. Ap�s criar e preencher, exiba
 todas as informa��es das bandas/estruturas. 
b. Crie uma fun��o que pe�a ao usu�rio um n�mero de 1 at� 5. Em seguida, seu programa deve exibir informa��es da banda cuja 
posi��o no seu ranking � a que foi solicitada pelo usu�rio. 
c. Crie uma fun��o que pe�a o nome de uma banda ao usu�rio e diga se ela est� entre suas bandas favoritas ou n�o. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <stdbool.h>
#define qtd 5
//criando estrutura da banda
struct bandas_de_musica{
	char nomeBanda[30];
	char tipoMusical[30];
	int integrantes;
	int posicaoFavoritos;
};  

bool verificaBandaExistente(const char palavra1[], const char palavra2[]) {
	int i=0;
	/* enquanto as palavras forem iguais e diferentes dos caracteres nulos */
	while(palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0') {
		++i;
	}
	/* se meu i estiver na mesma posicao que  caracter nulo significa
	que as 2 palavras sao iguais e retorna verdadeiro */
	if(palavra1[i] == '\0' && palavra2[i] == '\0') {
		return true;
	} else {
		return false;
	}
}

int main() {
	// inicializando a struct
	struct bandas_de_musica Bandas[qtd];
	
	setlocale(LC_ALL, "Portuguese"); // pt-br
	// pegando todas as informa��es das bandas
	for(int i=0; i < qtd; i++){
		printf("----- INSERINDO BANDAS -----\n");
		printf("Nome da Banda: ");
		fflush(stdin);
		fgets(Bandas[i].nomeBanda, 30, stdin);
		printf("Tipo Musical: ");
		fflush(stdin);
		fgets(Bandas[i].tipoMusical, 30, stdin);
		printf("Quantidade de integrantes: ");
		scanf("%d", &Bandas[i].integrantes);
		printf("Posi��o nos seus favoritos: ");
		scanf("%d", &Bandas[i].posicaoFavoritos);
		system("cls");
	}
	char continuar, procuraBanda[30];
	int visuPosicao, escolha, verificador=0;
	
	do {
		printf("-------- MENU --------\n");
		printf("[1] Ver as informa��es das bandas por posi��o\n");
		printf("[2] Ver as informa��es das bandas por nome \n");
		printf("Escolha: ");
		scanf("%d", &escolha);
		switch(escolha) {
			case 1:
				system("cls");
				printf("------ AN�LISE DAS BANDAS MUSICAIS -------\n");
				printf("Qual posi��o do TOP 5 Bandas voc� quer ver? -> ");
				scanf("%d", &visuPosicao);
				printf("Em %d� posi��o temos: \n", visuPosicao);
				// procurando a posicao da banda solicitada
				for(int i=0; i<qtd; i++) {
					if(Bandas[i].posicaoFavoritos == visuPosicao) {
						visuPosicao = i;
					}
				}
				printf("Nome da Banda: %s", Bandas[visuPosicao].nomeBanda);
				printf("Estilo Musical: %s", Bandas[visuPosicao].tipoMusical);
				printf("Quantidade Integrantes: %d", Bandas[visuPosicao].integrantes);
				break;
			case 2:
				system("cls");
				printf("Qual o nome da banda que deseja ver?\n");
				printf("Digite em min�sculo ->");
				fflush(stdin);
				fgets(procuraBanda, 30, stdin);
				// agora analisa se existe a banda passando pela funcao 
				for(int i=0; i<qtd; i++) {
					if(verificaBandaExistente(Bandas[i].nomeBanda, procuraBanda)) {
						verificador = i;
						break;
					} else {
						verificador = -1;
					}
				}
				if(verificador != -1) {
					printf("Nome da Banda: %s", Bandas[verificador].nomeBanda);
					printf("Estilo Musical: %s", Bandas[verificador].tipoMusical);
					printf("Quantidade Integrantes: %d", Bandas[verificador].integrantes);
				} else {
					printf("\nN�o encontramos sua banda no TOP 5!");
				}
				
				break;
		}
		printf("\n\nDeseja continuar ? [S] Sim [N] N�o ->");
		fflush(stdin);
		scanf("%c", &continuar);
		system("cls");
	} while(continuar == 's' || continuar == 'S');
	
	return 0;
}

