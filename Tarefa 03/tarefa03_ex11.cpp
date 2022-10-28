/* 11.Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias:
a.infantil A = 5 - 7 anos
b.infantil B = 8-10 anos
c.juvenil A = 11-13 anos
d.juvenil B = 14-17 anos
e.adulto = maiores de 18 anos */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int idade;
	
	printf("Nadador, digite sua idade: ");
	scanf("%d", &idade);
	if(idade < 5) {
		printf("Não pode ser classificado.");
	} else if(idade >= 5 && idade <= 7) {
		printf("Classificado: INFANTIL-A");
	} else if(idade >= 8 && idade <= 10) {
		printf("Classificacao: INFANTIL-B");
	} else if(idade >= 11 && idade <= 13){
		printf("Classificacao: JUVENIL-A");
	} else if(idade >=14 && idade <= 17){
		printf("Classificacao: JUVENIL-B");
	} else {
		printf("Classificacao: ADULTO");
	}
	return 0;
}
