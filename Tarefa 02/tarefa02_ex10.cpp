/* 10. Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa 
em segundos e mostre-o expresso em horas, minutos e segundos. */

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int segundosPassados, horas, minutos, segundos = 0;
	
	printf("Quantos segundos demora a atividade? -> ");
	scanf("%d", &segundosPassados);
	
	horas = segundosPassados / (60*60);
	minutos = (segundosPassados % (60*60)) / 60;
	segundos = (segundosPassados % (60*60) % 60);
	
	printf("Demora %d horas, %d minutos e %d segundos.", horas, minutos, segundos);
	
	return 0;
}
