// 7. Fa�a um programa que receba do usu�rio um arquivo texto e um caractere. Mostre na tela quantas vezes aquele caractere ocorre dentro do arquivo. 

#include <stdio.h>

int main(){
    FILE *arquivo;
    int somaChar = 0;
    char charProcurado, c;
    //perguntando qual char ele quer ver;
    printf("Qual caractere deseja contar? -> ");
    fflush(stdin);
    scanf("%c", &charProcurado);
    //abrindo arquivo
    arquivo = fopen("tarefa10_ex07.txt", "r");
    if(arquivo == NULL){
        printf("N�o conseguimos abrir o arquivo.");
    } else {
    	printf("Arquivo aberto com sucesso!\n");
	}
    /* enquanto nao for o fim do arquivo, vai lendo char por char */
    do{
        // lendo caracter por caracter
       	c = getc(arquivo);
		// contando vogal maiuscula ou minuscula sem contar acentua��o!
        if(c == charProcurado){
        	somaChar++;
        }
    } while(c != EOF);
	printf("\nArquivo tem %d caracteres '%c'.", somaChar, charProcurado);
	fclose(arquivo);
    return 0;
}

