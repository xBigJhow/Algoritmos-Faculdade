/* 4. Dados os pontos A de coordenadas A(x1, y1) e B de coordenadas (x2, y2), escreva um programa em C para calcular a distância 
entre os dois pontos. 
D = raiz de (x2-x1)² + (y2 - y1)²   */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	
	int x1, x2, y1, y2, xV, yV = 0;
	float D;
	printf("Digite o valor de x1: ");
	scanf("%d", &x1);
	printf("Digite o valor de x2: ");
	scanf("%d", &x2);
	printf("Digite o valor de y1: ");
	scanf("%d", &y1);
	printf("Digite o valor de y2: ");
	scanf("%d", &y2);
	
	xV = (x2 - x1) * (x2 - x1);
	yV = (y2 - y1) * (y2 - y1);
	
	D = sqrt(xV + yV);
	
	printf("A distancia entre dois pontos foi: %.2f", D);
		
	return 0;
}
