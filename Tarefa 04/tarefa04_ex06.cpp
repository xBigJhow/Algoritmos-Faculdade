/* 6. Em uma eleição para prefeito concorrem 3 candidatos. Cada candidato é identificado por um número 
inteiro (1, 2, 3). Em uma pesquisa eleitoral, perguntou-se a cada entrevistado em quem ele votaria na 
próxima eleição para prefeito. Cada entrevistado deum seu voto conforme relação abaixo:
1, 2 ou 3: Voto no respectivo candidato 5: voto nulo 6: indeciso 0: voto em branco.

Faça um programa que calcule e escreva: 
a. Percentual de votos de cada candidato 
b. Percentual de eleitores indecisos 
c. Percentual de votos brancos e nulo  */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	
	int i, voto, candidato1 = 0, candidato2=0, candidato3=0, votoNulo=0, votoBranco=0, indeciso=0, totalVotos=0;
	char votaDenovo;
	float pct1, pct2, pct3, pctNulo, pctBranco, pctInd;
	
	do {
		// MENU
		printf("\n -----------        PESQUISA ELEITORAL         -------------");
		printf("\n[ 1 ] Candidato 1   [ 2 ] Candidato 2  [ 3 ] Candidato 3");
		printf("\n[ 5 ] Voto Nulo     [ 6 ] Indeciso     [ 0 ] Voto Branco");
		printf("\n\nSEU VOTO ---> ");
		scanf("%d", &voto);
		switch(voto) {
			case 1:
				printf("Voto no Cadidato 1");
				totalVotos++;
				candidato1++;
				break;
			case 2:
				printf("Voto no Candidato 2");
				totalVotos++;
				candidato2++;
				break;
			case 3:
				printf("Voto no Candidato 3");
				totalVotos++;
				candidato3++;
				break;
			case 5:
				printf("Voto Nulo");
				totalVotos++;
				votoNulo++;
				break;
			case 6:
				printf("Indeciso");
				totalVotos++;
				indeciso++;
				break;
			default:
				printf("VOTO ERRADO!");
				break;
		}
		printf("\nOutro voto [S] Sim [N] Nao: ");
		fflush(stdin);
		scanf("%c", &votaDenovo);
		system("cls");
	} while( votaDenovo == 'S' || votaDenovo == 's');
	pct1 = (100 / totalVotos) * candidato1;
	pct2 = (100 / totalVotos) * candidato2;
	pct3 = (100 / totalVotos) * candidato3;
	pctNulo = (100 / totalVotos) * votoNulo;
	pctBranco = (100 / totalVotos) * votoBranco;
	pctInd = (100 / totalVotos) * indeciso;
	
	printf("\nRESULTADO: %d votos", totalVotos);
	printf("\nCandidato 1 com %.1f porcento dos votos", pct1);
	printf("\nCandidato 2 com %.1f porcento dos votos", pct2);
	printf("\nCandidato 3 com %.1f porcento dos votos", pct3);
	printf("\nVotos Nulos: %.1f porcento dos votos", pctNulo);
	printf("\nIndecisos: %.1f porcento dos votos", pctInd);
	printf("\nVotos em Branco: %.1f porcento dos votos", pctBranco);
	
}
