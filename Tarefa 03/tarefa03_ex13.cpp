/* 13.Escreva um algoritmo que leia o código de um aluno e suas três notas. 
Calcule a média ponderada do aluno, considerando que o peso para a maior nota 
seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas, 
a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e 
"REPROVADO" se a média for menor que 5. */

#include <stdlib.h>
#include <stdio.h>
#define PESO1 4
#define PESO2 3

int main() {
	
	int codAluno;
	float nota1, nota2, nota3, media;
	
	printf("Codigo do Aluno: ");
	scanf("%d", &codAluno);
	
	printf("Primeira nota: ");
	scanf("%f", &nota1);
	printf("Segunda nota: ");
	scanf("%f", &nota2);
	printf("Terceira nota: ");
	scanf("%f", &nota3);
	
	printf("\n-----------------------------------\n");
	
	if(nota1 > nota2 && nota1 > nota3) {
		nota1 *= PESO1;
		nota2 *= PESO2;
		nota3 *= PESO2;
	} else if(nota2 > nota1 && nota2 > nota3) {
		nota2 *= PESO1;
		nota1 *= PESO2;
		nota3 *= PESO2;
	} else {
		nota3 *= PESO1;
		nota2 *= PESO2;
		nota1 *= PESO2;
	}
	
	media = (nota1 + nota2 + nota3) / (PESO1 + PESO2 + PESO2);
	
	printf("A media ficou em %.2f", media);
	printf(" e o aluno foi ");
	if(media <= 5) {
		printf("REPROVADO");
	} else {
		printf("APROVADO");
	}
	
	return 0;
}
