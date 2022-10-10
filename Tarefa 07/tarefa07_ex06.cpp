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

