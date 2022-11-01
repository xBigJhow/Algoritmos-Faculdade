// 	5. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas linhas esse arquivo possui. 

#include <stdio.h>

int main(){
	char c;
    FILE *arquivo;
    int contaLinha = 0;
    // abrindo arquivo
    arquivo = fopen("tarefa10_ex05.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!");
    } else {
    	printf("Arquivo aberto com sucesso!");
	}
    // loop ate o final do arquivo End of File
    do {
        // pra cada linha, ira somar o contaLinha
        c = getc(arquivo);
        if(c == '\n')
            contaLinha ++;
    } while(c != EOF);
    // contaLinha + 1 porque a ultima linha nao tem "\n" e sim "\0"
    printf("\nArquivo tem %d linhas", contaLinha+1);
    // fechar arquivo
    fclose(arquivo);
    return 0;
}

