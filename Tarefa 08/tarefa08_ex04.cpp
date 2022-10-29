// 4. Escreva uma função que tem como parâmetros de entrada e saída três números inteiros, dia, mês e ano, 
//representando uma data, e modifica esses inteiros de forma que eles representem o dia seguinte. 
#include <stdio.h>

int confereAno(int ano){
	if((ano % 4 == 0) && (ano % 100 != 0 || ano % 400 == 0)){
		return 1;
	} else{
		return 0;
	}
}

mudaData(int data[]){
	int x = data[2]; 
	x = confereAno(x);
	//final de ano
	if(data[0] == 31 && data[1] == 12){
		data[0] = 1;
		data[1] = 1;
		data[2] += 1;
	  // fevereiro sem bissexto
	} else if(data[0] == 28 && data[1] == 2 && x==0){
		data[0] = 1;
		data[1] += 1;
	  //fevereiro com bissexto parte 1
	} else if(data[0] == 29 && data[1] == 2 && x==1){
		data[0] = 1;
		data[1] += 1;
	  //fevereiro com bissexto parte 2
	} else if(data[0] == 28 && data[1] == 2 && x==1){
		data[0] +=1;
	  //final de mes com 31 dias		
	} else if((data[0] == 31) && (data[1] == 1 || data[1] == 3 || data[1] == 5 || data[1] == 7 || data[1] == 8 || data[1] == 10)){
		data[0] = 1;
		data[1] += 1;
	  //final de mes com 30 dias
	} else if(data[0] == 30 && data[1]== 4 || data[1]== 6 || data[1] == 9 || data[1] == 11){
		data[0] = 1;
		data[1] += 1;
	  //qualquer outra data
	} else{
		data[0] += 1;
	}
	printf("Dia seguinte: %d/%d/%d", data[0], data[1], data[2]);
}

int main(){
	int data[3];
	printf("Dia: ");
	scanf("%d", &data[0]);
	printf("Mes: ");
	scanf("%d", &data[1]);
	printf("Ano: ");
	scanf("%d", &data[2]);
	mudaData(data);
}

