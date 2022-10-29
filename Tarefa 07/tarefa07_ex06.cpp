/* 6. Um n�mero a � dito permuta��o de um n�mero b se os d�gitos de a formam uma permuta��o dos d�gitos de b. 
Exemplo: 5412434 � uma permuta��o de 4321445, mas n�o � uma permuta��o de 4312455. Obs.: Considere que o d�gito 0 (zero) n�o aparece nos n�meros. 

a. Fa�a uma fun��o contad�gitos que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes o d�gito d aparece em n. 
b. Usando a fun��o do item anterior, fa�a um programa que l� dois inteiros positivos a e b e responda se a � permuta��o de b. 

*/
#include <stdio.h>

int verificaDigitos(int n, int d) {
  int i,l;
  i = 0;
  while (n > 0) {
    l = n % 10;
    n = (n - l)/10;
    if (l == d) {
      i++;
    }
  }
  return i;
}

int main() {

  int a,b,i,digito_a,digito_b;

  printf("Primeiro Numero: ");
  scanf("%d", &a);
  printf("Segundo Numero: ");
  scanf("%d", &b);

  for(i = 1; i <= 9; i++) {
    digito_a = verificaDigitos(a,i);
    digito_b = verificaDigitos(b,i);
    if (digito_a != digito_b) {
      printf("%d nao eh permutacao de %d\n", a, b);
      return(0);
    }
  }
  printf("%d Eh permutacao de %d\n", a, b);
  return(0);
}

