#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#define Q 5

struct eletrodomesticos {
	char nome[15];
	float potencia, tempoAtivo;
	float consumo;
};

int main() {
	float consumoTotal;
	setlocale(LC_ALL, "Portuguese");
	int tempoDias;
	struct eletrodomesticos Eletro[Q];
	
	for(int i=0; i<Q; i++) {
		printf("<---- %d° Eletrodoméstico ----> \n", i+1);
		printf("Nome: ");
		fflush(stdin);
		gets(Eletro[i].nome);
		printf("Potência (Watts): ");
		scanf("%f", &Eletro[i].potencia);
		printf("Tempo ativo por dia (Hrs): ");
		scanf("%f", &Eletro[i].tempoAtivo);
		system("cls");
	}
	printf("Quer calcular o consumo de quantos dias? ->");
	scanf("%d", &tempoDias);
	system("cls");
	//calculando consumo
	for(int i=0; i<Q; i++) {
		Eletro[i].consumo = (Eletro[i].potencia * Eletro[i].tempoAtivo * tempoDias) / 1000;
		consumoTotal += Eletro[i].consumo;
	}
	// calculando a porcentagem de todos com base no consumo total
	for(int i=0; i<Q; i++) {
		
	}
	//imprimindo dados;/
	printf("CONSUMO TOTAL: %.2f kwH EM %d dias\n\n", consumoTotal, tempoDias);
	printf("|Eletro:       |Potencia:      ");
	printf("|Tempo Ativo:  |kwH em %d dias | Gasto em %% \n", tempoDias);
	for(int i=0; i<Q; i++) {
		printf("%s        %.2f   \t      ", Eletro[i].nome, Eletro[i].potencia);
		printf("%.2f        %.2f      ", Eletro[i].tempoAtivo, Eletro[i].consumo);
		printf("%.2f %% \n", (Eletro[i].consumo / consumoTotal )* 100  );
	}
	return 0;
}

