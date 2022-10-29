// 8. Escreva uma fun��o com prot�tipo void somabit (int b1, int b2, int *vaium, int *soma); que recebe tr�s bits 
//(inteiros entre 0 e 1) b1, b2 e *vaium e devolve um bit soma representando a soma dos tr�s e o novo um bit "vai-um" em *vaium. 

#include <stdio.h>

void calculaBIT(int b1, int b2, int &vaium, int &somab){
	somab = (b1 + b2 + vaium) % 2;
	vaium = (b1 + b2 + vaium) / 2;
}

int main(){
	//variaveis
	int valor1, valor2, qn1, qn2, bit1, bit2, vaiUM, somaBIT, soma, pot;

	//recebe os primeiros valores
	printf("Digite primeiro valor: ");
	scanf("%d", &valor1); 
	printf("Digite segundo valor: ");
	scanf("%d", &valor2); 
	//iniciliza os valores auxiliares
	vaiUM = 0 ; 
	soma  = 0 ; 
	pot = 1 ; 
	qn1 = valor1 ;
	qn2 = valor2 ;

	while (qn1!=0 || qn2!=0){
	    bit1 = qn1 % 10;
	    bit2 = qn2 % 10;
	    calculaBIT(bit1, bit2, vaiUM, somaBIT);
	    qn1 /= 10;
	    qn2 /= 10;
	    //monta parte do resultado
	    soma += pot*somaBIT;
	    pot *= 10;
	}
	// soma o ultimo vaiUM
	soma += pot * vaiUM;
	// imprime RESULTADO
	printf("%d + %d = %d \n", valor1, valor2, soma);
	
	return 0 ;
}

