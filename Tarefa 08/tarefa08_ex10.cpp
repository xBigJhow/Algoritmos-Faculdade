//10. Escreva uma função com o protótipo void converte (char ch, int *tipo, char *valor); que recebe um caractere
// ch e devolve em *tipo 0, se o caractere for um número inteiro, 1 se for uma letra (maiúscula ou minúscula) 
//e 2 caso contrário; e além disso, no caso de ser uma letra, converte para maiúscula, senão devolve ch inalterado. 

#include <stdio.h>

void converteChar(char ch, int &tipo, char &valor){
	// se o char for minusculo
	if(ch >= 'a' && ch <= 'z'){
		// valor recebe um char maiusculo
		valor = ch - 'a' + 'A';
	} else{
		//se nao valor recebe o char normal
		valor = ch;
	}
	// verifica o tipo do valor, se é minusculo/maiusculo
	// inteiro ou outro caracter
  	if(valor >= '0' && valor <= '9'){
  		tipo = 0;
	} else if(valor >= 'A' && valor <= 'Z'){
		tipo = 1;	
	} else{
		tipo = 2;
	}
	// imprime o tipo e o valor (se minusculo, maiusculo)
	printf(" Tipo: %d", tipo);
	printf("\n Valor: %c", valor);
	
}

main(){
	char ch, valor;
	int tipo;
	printf(" Digite um caracter: ");
	scanf("%c", &ch);
	converteChar(ch, tipo, valor);
}

