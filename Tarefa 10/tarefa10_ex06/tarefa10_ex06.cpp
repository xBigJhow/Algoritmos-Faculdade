// 	6. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são vogais. 
#include <stdio.h>

int main(){
    FILE *arquivo;
    int somaVogal = 0;
    int c;
    //abrindo arquivo
    arquivo = fopen("tarefa10_ex06.txt", "r");
    if(arquivo == NULL){
        printf("Não conseguimos abrir o arquivo.");
    } else {
    	printf("Arquivo aberto com sucesso!\n");
	}
    /* enquanto nao for o fim do arquivo, vai lendo char por char */
    do{
	
        // lendo caracter por caracter
        c = getc(arquivo);
		// contando vogal maiuscula ou minuscula sem contar acentuação!
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I'|| c == 'O'|| c == 'U'){
        	somaVogal++;
        }
    } while(c != EOF);
	printf("\nArquivo tem %d vogais.", somaVogal);
	fclose(arquivo);
    return 0;
}

