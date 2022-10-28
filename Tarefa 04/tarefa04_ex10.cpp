/* 10. Crie um algoritmo que ajude o DETRAN a saber, o total de recursos que
 foram arrecadados com a aplicação de multas de trânsito. 
 O algoritmo deve ler as seguintes informações para cada motorista:
a. O número da carteira de motorista (de 1 a 4327) 
b. Número de multas; 
c. Valor de cada uma das multas.

Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total
 de recursos arrecadados (somatório de todas as multas). O algoritmo deverá imprimir
  também o número da carteira do motorista que obteve o maior número de multas */
  
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
  
