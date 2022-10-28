/* 10. Crie um algoritmo que ajude o DETRAN a saber, o total de recursos que
 foram arrecadados com a aplica��o de multas de tr�nsito. 
 O algoritmo deve ler as seguintes informa��es para cada motorista:
a. O n�mero da carteira de motorista (de 1 a 4327) 
b. N�mero de multas; 
c. Valor de cada uma das multas.

Deve ser impresso o valor da d�vida de cada motorista e ao final da leitura o total
 de recursos arrecadados (somat�rio de todas as multas). O algoritmo dever� imprimir
  tamb�m o n�mero da carteira do motorista que obteve o maior n�mero de multas */
  
  #include <stdio.h>
  #include <stdlib.h>
  #include <windows.h>
  
  int main() {
  	int cnh, cnhMaiorPagamento;
  	float valorMulta, maiorPagamento, valorPorCondutor, arrecadacao=0;
  	int i=0, qtdMultas;
  	char continuar = 's';
  	do {
  		system("cls");
  		printf("Codigo do Motorista: ");
  		scanf("%d", &cnh);
  		printf("Quantas multas o motorista pegou -> ");
  		scanf("%d", &qtdMultas);
  		for(i=1; i<= qtdMultas; i++) {
  			printf("Valor da %do multa: R$", i);
  			scanf("%f", &valorMulta);
  			valorPorCondutor += valorMulta;
		  }
		arrecadacao += valorPorCondutor;
		if(valorPorCondutor > maiorPagamento) {
			maiorPagamento = valorPorCondutor;
			cnhMaiorPagamento = cnh;
		}
		valorPorCondutor = 0;
		
		printf("Deseja adicionar outro condutor [S] Sim [N] Nao -> ");
		fflush(stdin);
		scanf("%c", &continuar);
		
	  } while(continuar == 'S' || continuar == 's');
	  
	  printf("\nArrecadacao do Goberto: R$%.2f", arrecadacao);
	  printf("\nCondutor %d, pagou o maior valor de multa, no total de R$%.2f", cnh, maiorPagamento);
	  
	  return 0;
  }
  
