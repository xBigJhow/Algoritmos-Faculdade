/* 3. Escreva um procedimento que tome como entrada dois números inteiros positivos e forneça como saída o produto dos
mesmos, utilizando o seguinte método de multiplicação: 
a. Dividir (divisão inteira), sucessivamente, o primeiro número por 2 até que se obtenha 1 como quociente; 
b. Paralelamente, multiplicar, sucessivamente, o segundo número por 2 e acumular as parcelas obtidas, caso 
o quoeficiente obtido no passo A seja ímpar. Caso o primeiro número seja ímpar, o valor do segundo número também deve ser acumulado. 
O resultado da acumulação será igual ao produto dos dois valores. Veja o exemplo a seguir: 
11 x 20 = 220 11 20 ' +20 5 40 ' +40 2 80 1 160 ' +160 = 220 
*/
#include <stdio.h>

int produtoDoisValores(int a, int b){
	int div_inteira=0, mult, soma=0;
	if(a % 2 == 1){
		soma += b;
		printf("%d\t%d -> +%d Somou\n", a, b, b);
	} else{
		printf("%d\t%d\n", a, b);
	}
	while(div_inteira != 1){
		div_inteira = a / 2;
		mult = b * 2;
		b = mult;
		a = div_inteira;
		if(div_inteira % 2 == 1){
			soma+=b;
			printf("%d\t%d -> +%d Somou\n", a, b, b);
		} else{
			printf("%d\t%d\n", a, b);
		}
	}
	printf("--------------------------------\n");
	printf("Total -> %d", soma);
}

int main(){
	
	int a, b;
	
	printf("Primeiro valor: ");
	scanf("%d", &a);
	printf("Segundo valor: ");
	scanf("%d", &b);
	produtoDoisValores(a, b);	
}


