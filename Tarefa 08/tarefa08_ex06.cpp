#include <stdio.h>
#include <locale.h>

int divide(int &m, int&n, int d){
	setlocale(LC_ALL, "Portuguese");
	int retorno;
	
	if(m % d == 0 || n % d == 0){
		retorno = 1;
	} else{
		retorno = 0;
	}
	return(retorno);
}

int main(){
	// m, n e d sao valores, x o retorno da funcao
	int m, n, x , d;
	//pega valor de M e N
	printf("Digite valor de m:");
	scanf("%d", &m);
	printf("Digite valor de n:");
	scanf("%d", &n);
	printf("Digite valor de d:");
	scanf("%d", &d);
	// retorna 1 se D divide por m ou por n 
	//caso contrario, retorna 0
	x = divide(m, n, d);
	if(x==1){
		printf("D é divisivel por m ou n");
	} else{
		printf("D não é divisivel por m ou n ");
	}
}

      
