/* 9. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V=5 (voos) e A=5 (aeroportos) e: 
a. Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de origem e um de destino. 
b. Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade de voos que saem e quantidade de voos que chegam. 

Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite aeroportos de código inexistente. 
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include <windows.h>
#define QTD 5


struct dados_voo {
    int origem;
    int destino;
};

struct aeroportos {
    int codigo;
    char endereco[30];
    int origemVoo=0;
    int destinoVoo=0;
};

void cadastraAeroporto(struct aeroportos &Aeroporto, int i) {
    printf("=-=-=-=-=- CADASTRANDO %d° AEROPORTO -=-=-=-=-=-=\n", i);
    printf("Código do Aeroporto [5 digitos]: ");
    scanf("%d", &Aeroporto.codigo);
    printf("Cidade do Aeroporto: ");
    fflush(stdin);
    gets(Aeroporto.endereco);
    system("cls");
}

void imprimeVoo(struct aeroportos &Aeroporto) {
    printf("%s\t %d \t %d\n", Aeroporto.endereco, Aeroporto.origemVoo, Aeroporto.destinoVoo);
}


int main() {
	
    setlocale(LC_ALL, "Portuguese");  //pt-br
    struct aeroportos Aeroporto[QTD]; //estrutura
    struct dados_voo Voo;
    char maisVoos = 's'; // variavel para continuar adicionando voos 
    int contagemVoo = 1; // só para contar os voos
    //cadastrando os aeroportos primeiros
    for(int i=0; i<QTD; i++) {
        cadastraAeroporto(Aeroporto[i], i+1);
    }
    // irá inserir voos até parar!
    do {
    	bool correto_origem = false, correto_destino = false;
    	system("cls");
    	int x, y = 0;
    	printf("=-=-=-=- %d° Voo -=-=-=-=\n\n", contagemVoo);
    	printf("Aeroporto de Origem: ");
    	scanf("%d", &Voo.origem);
    	printf("Aeroporto de Destino: ");
    	scanf("%d", &Voo.destino);
    	// loop para origem, 
    	for(int i=0; i<QTD; i++) {
    		if(Aeroporto[i].codigo == Voo.origem) {
    			correto_origem = true;
    			Aeroporto[i].origemVoo++;
    			x = i;
			}
		}
		// loop para destino, 
    	for(int i=0; i<QTD; i++) {
    		if(Aeroporto[i].codigo == Voo.destino) {
    			Aeroporto[i].destinoVoo++;
    			correto_destino = true;
    			y = i;
			}
		}
    	if(correto_origem && correto_destino) {
    		printf("Voo de n° %d cadastrado com sucesso!\n", contagemVoo);
    		printf("Sairá de %s para %s\n", Aeroporto[x].endereco, Aeroporto[y].endereco);
    		contagemVoo++;
		} else {
			printf("Favor conferir os dados inseridos: \n");
		}
		fflush(stdin);
		printf("\n\nDeseja continuar [S] Sim [N] Não\nEscolha: ");
		scanf("%c", &maisVoos);
	} while(maisVoos == 's' || maisVoos == 'S');
	// imprimindo os levantamentos do aeroporto
	system("cls");
    printf("-=-=-=-=-= REGISTRO DOS AEROPORTOS =-=-=-=-=-\n");
    printf("CIDADE   |ENTRADA | SAIDA\t\n");
	for(int i=0; i<QTD; i++) {
	    imprimeVoo(Aeroporto[i]);
	}
    
    return 0;
}
