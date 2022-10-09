#include <stdio.h>

int trocaNumero(int &X, int &Y, int &Z, int &P){
	int aux;
	if(P == 1){
		aux = X;
		X = Y;
		Y = aux;
	} else if(P==2){
		aux = Y;
		Y = Z;
		Z = aux;
	} else if(P==3){
		aux = X;
		X = Z;
		Z = aux;
	}
	
}

int main(){
	int X, Y, Z, P;
	printf("Valor de X:");
	scanf("%d", &X);
	printf("Valor de Y:");
	scanf("%d", &Y);
	printf("Valor de Z:");
	scanf("%d", &Z);
	printf("Valor de P:");
	scanf("%d", &P);
	printf("Valores de X: %d Y: %d Z: %d P: %d", X,Y,Z,P);
	trocaNumero(X,Y,Z,P);
	printf("\nValores de X: %d Y: %d Z: %d P: %d", X,Y,Z,P);	
}


