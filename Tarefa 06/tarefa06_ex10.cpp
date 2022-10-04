#include <stdio.h>
#include <windows.h>
int main(){
	int i, j, qtdCliente;
	char opr;
	int conta, valor;
	printf("Quantidade de clientes: ");
	scanf("%d", &qtdCliente);
	system("cls");
	int banco[qtdCliente][2];
	for(i=0; i<qtdCliente; i++){
		printf("Cliente %d\n", i+1);
		printf("Numero da conta: ");
		scanf("%d", &banco[i][0]);
		printf("Saldo da conta: ");
		scanf("%d", &banco[i][1]);
		system("cls");
	}
	char keep = 's';
	while(keep == 's'){
		system("cls");
		printf("Conta \t Saldo\n");
		for(i=0; i<qtdCliente; i++){
		printf("%d \t R$%d\n", banco[i][0], banco[i][1]);
		}
		printf("\n");
		printf("Qual operacao deseja fazer [d] Debito [c] Credito: ");
		fflush(stdin);
		scanf("%c", &opr);
		printf("Qual conta: ");
		fflush(stdin);
		scanf("%d", &conta);
		fflush(stdin);
		printf("Qual valor: ");
		scanf("%d", &valor);
		for(i=0; i<qtdCliente; i++){
			if(conta == banco[i][0]){
				if(opr == 'c'){
					banco[i][1] += valor;
				} else if(opr == 'd'){
					banco[i][1] -= valor;
				} else{
					printf("OPERACAO NAO REALIZADA\n");
				}
			}
		}
		valor = 0;
		conta = 0;	
		printf("Deseja realizar nova operacao: ");
		fflush(stdin);
		scanf("%c", &keep);
	}
}

