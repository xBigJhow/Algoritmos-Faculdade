/* 1. Fez-se uma pesquisa envolvendo um grupo de pessoas. Para cada uma das pessoas, perguntou-se: 
a. Valor de seu salário
b. Idade 
c. Grau de instrução (conforme tabela) 
i. 1 ? Fundamental 
ii. 2 ? Médio 
iii. 3 ? Superior 
Considerando estas informações, faça um algoritmo que forneça: 
a. Número de pessoas que possuem curso superior e ganhem mais de R$ 5.000,00 
b. Diferença entre a média de salários das pessoas com mais de 25 anos e com menos de 25 anos 
c. A idade média das pessoas que possuem Ensino Médio 
d. O percentual de pessoas que possuem apenas o ensino fundamental comparada com as pessoas que possuem curso superior
e. A idade média das pessoas com curso superior e a quantidade de pessoas acima desta média. */

#include <stdio.h>
#include <stdlib.h>
#define FIXO 20

int main() {
	
	int valorSalario[FIXO], idade[FIXO], grauEscolar[FIXO], qtdAcimaMedia, qtdSalarioSuperior=0;
	float difMedSalario=0, idadeMediaEnsinoMedio=0, mediaEnsinoSuperior=0;
	int qtdIdadeEnsMedio, pessoaFundamental=0, pessoaSuperior=0;
	float mediaIdadeEnsinoMedio=0, idadeMediaSuperior=0;
	float pctFundamental, pctSuperior;
	int menor25anos=0, maior25anos=0;
	float valorMais25Anos=0, valorMenos25Anos=0;
	int i, qtdMediaIdadeSuperior, qtdAcimaMediaSuperior=0;
	for(i=0; i<FIXO; i++) {
		printf("Salario: R$");
		scanf("%d", &valorSalario[i]);
		printf("Idade: ");
		scanf("%d", &idade[i]);
		printf("Grau Escolaridade [1]Fundamental [2]Medio [3]Superior");
		scanf("%d", &grauEscolar[i]);
		
		if(valorSalario[i] > 5000 && grauEscolar[i] == 3); {
			qtdSalarioSuperior +=1;
		}
		if(idade[i] > 25) {
			valorMais25Anos += valorSalario[i];
			maior25anos++;
		} else if(idade[i] < 25) {
			valorMenos25Anos += valorSalario[i];
		}
		if(grauEscolar[i] == 2) {
			mediaIdadeEnsinoMedio += idade[i];
			qtdIdadeEnsMedio++;
		}
		if(grauEscolar[i] == 1) {
			pessoaFundamental++;
		} else if(grauEscolar[i] == 3) {
			pessoaSuperior++;
			mediaEnsinoSuperior += idade[i];
		}
		
	}
	idadeMediaEnsinoMedio = mediaIdadeEnsinoMedio / qtdIdadeEnsMedio;
	pctFundamental = (100 / FIXO) * pessoaFundamental;
	pctSuperior = (100 / FIXO) * pessoaSuperior;
	mediaEnsinoSuperior = mediaEnsinoSuperior / pessoaSuperior;
	
	if(valorMais25Anos > valorMenos25Anos) {
		difMedSalario = valorMais25Anos - valorMenos25Anos;
	} else if(valorMais25Anos < valorMenos25Anos) {
		difMedSalario = valorMenos25Anos - valorMais25Anos;
	}
	
	for(i=0; i<FIXO; i++) {
		if(grauEscolar[i] == 3) {
			idadeMediaSuperior += idade[i];
			qtdMediaIdadeSuperior++;
		}
	}
	idadeMediaSuperior = idadeMediaSuperior / qtdMediaIdadeSuperior;
	for(i=0; i<FIXO; i++) {
		if(idade[i] > idadeMediaSuperior && grauEscolar[i] == 3) {
			qtdAcimaMediaSuperior++;
		}
	}
	
	printf("\nPessoas com ensino superior e ganham mais de R$5000,00 -> %d", qtdSalarioSuperior);
	printf("\nA diferença de salarios entre pessoas com mais e menos de 25 anos e de R$%.2f", difMedSalario);
	printf("\nA idade media que as pessoas possuem ensino medio e de %f anos", idadeMediaEnsinoMedio);
	printf("\n%f porcento possuem ensino fundamental e %f porcento possuem curso superior", pctFundamental, pctSuperior);
	printf("\ne existe %d pessoas acima dessa media", qtdAcimaMediaSuperior);
}
