/* 9.Calcule a m�dia aritm�tica das 3 notas de um aluno e mostre, al�m do valor da m�dia, uma mensagem de "Aprovado", 
caso a m�dia seja igual ou superior a 6, ou a mensagem "reprovado", caso contr�rio. */


#include <stdio.h>

int main() {

	float notal, nota2, nota3, media;
	
	printf("Primeira Nota: ");
	scanf("%f", &notal);
	printf("Segunda Nota: ");
	scanf("%f", &nota2);
	printf("Terceira Nota: ");
	scanf("%f", &nota3);
	
	media = (notal + nota2 + nota3) / 3;
	
	if(media >= 6){
		printf("Media: %.2f -> APROVADO", media);
	} else {
		printf("Media: %.2f -> REPROVADO", media);
	}
	
	return 0;
}
