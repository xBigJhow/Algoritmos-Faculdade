#include <stdio.h>
#include <math.h>

int imprimePolinomio(int polinomio[], int grau, int x, int &n){
	int termos = grau;
	printf("\n\nf(%d) = ", x);
	for(int i=1; i<=n; i++){
		if(termos > 1){
			printf("%dx^%d + ", polinomio[i-1], termos);
		} else if(termos == 1){
			printf("%dx + ", polinomio[i-1], termos);
		} else if(termos==0){
			printf("%d", polinomio[i-1]);
		}
		termos--;
	}
}

int calculaPolinomio(int polinomio[], int grau, int x, int &n){
	int valor_de_x;
	int termos = grau;
	for(int i=0; i<n; i++){
		if(termos != 0){
			valor_de_x += (polinomio[i] * (pow(x, termos)));
		}
		termos--;
	}
	valor_de_x += polinomio[grau];
	
	printf("\nValor de P(X) = %d", valor_de_x);	
}

int main(){
	int grau, x, n;
	
	printf("Qual o grau da funcao polinomial: ");
	scanf("%d", &grau);
	printf("Qual o valor de x: ");
	scanf("%d", &x);
	n = grau+1;
	int polinomio[n];
	for(int i=1; i<= n; i++){
		if(i <= grau){
			printf("%do Termo: ", i);
			scanf("%d", &polinomio[i-1]);
		} else{
			printf("Termo Independente: ", i);
			scanf("%d", &polinomio[i-1]);
		}
	}
	imprimePolinomio(polinomio, grau, x, n);
	calculaPolinomio(polinomio, grau, x, n);
}

