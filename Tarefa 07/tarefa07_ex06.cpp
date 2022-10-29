/* 6. Um número a é dito permutação de um número b se os dígitos de a formam uma permutação dos dígitos de b. 
Exemplo: 5412434 é uma permutação de 4321445, mas não é uma permutação de 4312455. Obs.: Considere que o dígito 0 (zero) não aparece nos números. 

a. Faça uma função contadígitos que dados um inteiro n e um inteiro d, 0 < d < 9, devolve quantas vezes o dígito d aparece em n. 
b. Usando a função do item anterior, faça um programa que lê dois inteiros positivos a e b e responda se a é permutação de b. 

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

