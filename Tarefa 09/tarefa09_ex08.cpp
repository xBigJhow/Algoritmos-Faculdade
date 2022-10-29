/* 8. Fa�a um programa que controla o consumo de energia dos eletrodom�sticos de uma casa e crie e leia: 

a. 5 eletrodom�sticos que cont�m nome (m�ximo 15 letras), pot�ncia (real, em kW) e tempo ativo por dia (real, em horas). 
b. Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodom�stico 
(consumo/consumo total) nesse per�odo de tempo. Apresente este �ltimo dado em porcentagem. 
*/


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
		printf("<---- %d� Eletrodom�stico ----> \n", i+1);
		printf("Nome: ");
		fflush(stdin);
		gets(Eletro[i].nome);
		printf("Pot�ncia (Watts): ");
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

