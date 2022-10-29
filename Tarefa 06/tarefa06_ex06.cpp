/* 6.. Considere que determinada empresa tem registrado em uma tabela os consumos mensais de energia elétrica 
dos últimos 20 anos. Cada linha representa um ano e cada coluna representa um mês. Faça um programa que determine: 

a)) O consumo médio para o mês de janeiro 
b)) Em qual mês a empresa consome mais energia na média 
c)) Qual o maior consumo dos últimos 20 anos 
d)) Qual o ano de menor consumo de energia 
*/

#include <stdio.h>
#include <cstdlib>
#define MES 12
#define ANO 20

int main(){
	int consumo[ANO][MES];
	int i, j, x , z=0;
	int consumoMensal=0, consumo_mensal[MES], maior_consumo_mensal, mes_maior_consumo_mensal=0;
	int consumoAno=0, consumo_ano[ANO], menor_consumo_ano, numero_menor_consumo_ano, consumo_janeiro=0;
	int maior_consumo_total_ano, maior_consumo_total_mes, verificador;
	float cons_medio_jan=0;
	
	for(i=0; i<ANO; i++){
		for(j=0; j<MES; j++){
			//gera valor de 0 a 999
			x = rand() % 1000;
			consumo[i][j] = x;
			printf("%d \t", consumo[i][j]);
			
			if(i==0 && j==0){
				verificador = consumo[i][j];
			} else{
				if(consumo[i][j] > verificador){
					verificador = consumo[i][j];
					maior_consumo_total_ano = i;
					maior_consumo_total_mes = j;
				}
			}
		}
		printf("\n");
	}
	// consumo de janeiro em todos os anos
	for(i=0; i<ANO; i++){
		consumo_janeiro += consumo[i][0];
	}
	cons_medio_jan = consumo_janeiro / 12;
	
	// consumo medio de todos os meses
	z = 0;
	for(i=0; i<MES; i++){
		for(j=0; j<ANO; j++){
			consumoMensal += consumo[z][i];	
			z++;
		}
		consumo_mensal[i] = consumoMensal;
		consumoMensal = 0;
		z=0;
	}
	//verificando maior consumo mensal
	for(i=0; i<MES; i++){
		if(i==0){
			maior_consumo_mensal = consumo_mensal[i];
		} else{
			if(consumo_mensal[i] > maior_consumo_mensal){
				maior_consumo_mensal = consumo_mensal[i];
				mes_maior_consumo_mensal = i;
			}
		}
	}
	printf("\n--------------------------------------------------------------------------------------------\n");
	for(i=0; i<MES; i++){
		printf("%d \t", consumo_mensal[i]);
	}
	//verificando menor consumo anual
	z=0;
	for(i=0; i<ANO; i++){
		for(j=0; j<MES; j++){
			consumoAno += consumo[i][z];
			z++;
		}
		consumo_ano[i] = consumoAno;
		consumoAno = 0;
		z = 0;
	}
	for(i=0; i<ANO; i++){
		if(i == 0){
			menor_consumo_ano = consumo_ano[i];
		} else{
			if(consumo_ano[i] < menor_consumo_ano){
				menor_consumo_ano = consumo_ano[i];
				numero_menor_consumo_ano = i;
			}
		}
	}
	printf("\n");
	printf("\nA - Consumo medio de janeiro: %.2f", cons_medio_jan);
	printf("\nB - Maior consumo mensal de todos os anos eh no mes %d", mes_maior_consumo_mensal +1);
	printf("\nC - Maior consumo de todos os tempos esta no valor de");
	printf(" %d, no ano %d e mes %d", verificador, maior_consumo_total_ano +1, maior_consumo_total_mes+1);
	printf("\nD - O ano com menor consumo foi o %do ano", numero_menor_consumo_ano + 1);
} 
