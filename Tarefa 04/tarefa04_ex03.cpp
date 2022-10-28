/* 3. Foi feita uma pesquisa com um grupo de alunos de uma universidade onde se perguntou, para cada aluno, 
o número de vezes que utilizou o restaurante universitário no último mês. Construa um programa em C que determine: 
a. O percentual de alunos que utilizaram o restaurante menos de 10x; 
b. O percentual de alunos que utilizaram o restaurante entre 10x e 15x; 
c. O percentual de alunos que utilizaram o restaurante acima de 15x; */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=0, totalAlunos, menos10 = 0, ate15=0, mais15=0, verificador=0;
	float porc10, porc15, porc15mais = 0;
	printf("------ PESQUISA UNIVERSITARIA ------");
	printf("\nVEZES QUE O ALUNO UTILIZOU O");
	printf("\nRESTAURANTE UNIVERSITARIO...\n");
	printf("\nQuantos alunos participaram da pesquisa: ");
	scanf("%d", &totalAlunos);
	for(i=1; i<=totalAlunos; i++) {
		printf("Quantidade do %do aluno: ", i);
		scanf("%d", &verificador);
		if(verificador < 10) {
			menos10++;
		} else if(verificador >= 10 && verificador <= 15) {
			ate15++;
		} else if(verificador > 15) {
			mais15++;
		}
		verificador = 0;
	}
	printf("%d - %d - %d", menos10, ate15, mais15);
	porc10 = (100 / totalAlunos) * menos10;
	porc15 = (100 / totalAlunos) * ate15;
	porc15mais = (100 / totalAlunos) * mais15;
	
	printf("\nPorcentagem de Alunos que foram menos de 10x: %.2f %", porc10);
	printf("\nPorcentagem de Alunos que foram de 10 a 15x: %.2f %", porc15);
	printf("\nPorcentagem de Alunos que foram mais de 15x: %.2f %", porc15mais);
}
