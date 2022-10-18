#include <stdio.h>
#include <locale.h>

bool calculaMMC(int &m, int&n, int d){
	bool retorno;
	//se D for divisivel por M ou N, retorna true senao false
	if(m % d == 0 || n % d == 0){
		retorno = true;
	} else{
		retorno = false;
	}
	// se o M for divisivel, divide
	if(m % d == 0){
  		m = m/d;
  	}
  	// se o N for divisivel, divide
  	if(n % d == 0){
  		n = n/d;
 	}
	return(retorno);
}

int main(){
	setlocale(LC_ALL, "Portuguese"); // Pt-br
	int m, n, d, qm, qn, mmc;
	//pega valor de M e N
	printf("Digite valor de m:");
	scanf("%d", &m);
	printf("Digite valor de n:");
	scanf("%d", &n);
	d = 2; // neutro divisor
	mmc = 1; // neutro na multiplicacao
	qm = m; // auxiliar pra M
	qn = n; // auxiliar pra N
	// enquanto os auxiliares nao for igual a 1, repete
	while(qm != 1 || qn != 1){
		// se m ou n for divisivel por d, mmc é multiplicado
		if (calculaMMC(qm, qn, d))
	    	mmc = mmc * d;
		else{
			// se nao o divisor recebe mais 1;
			d = d + 1;	
		}	
	}
  	printf("MMC(%d, %d) = %d \n", m, n, mmc);
}
