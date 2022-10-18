#include <stdio.h>

int confereAno(int ano){
	if((ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0)){
		return 1;
	} else{
		return 0;
	}
}


int main(){
	int ano, x;
	printf("Digite um ano: ");
	scanf("%d",&ano);
	x = confereAno(ano);
	if(x == 1){
		printf("Ano Bissexto!");
	} else{
		printf("O ano nao eh Bissexto!");
	}
}
