/* 3. Escreva um procedimento que tome como entrada dois n�meros inteiros positivos e forne�a como sa�da o produto dos
mesmos, utilizando o seguinte m�todo de multiplica��o: 
a. Dividir (divis�o inteira), sucessivamente, o primeiro n�mero por 2 at� que se obtenha 1 como quociente; 
b. Paralelamente, multiplicar, sucessivamente, o segundo n�mero por 2 e acumular as parcelas obtidas, caso 
o quoeficiente obtido no passo A seja �mpar. Caso o primeiro n�mero seja �mpar, o valor do segundo n�mero tamb�m deve ser acumulado. 
O resultado da acumula��o ser� igual ao produto dos dois valores. Veja o exemplo a seguir: 
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


