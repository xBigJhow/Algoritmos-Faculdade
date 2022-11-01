/*4. Escreva um programa que: a. Crie/abra um arquivo texto de nome "arq.txt" 
b. Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere '0' 
c. Feche o arquivo 
d. Abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados. */

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    FILE *arquivo;
    char c;
    // abrindo arquivo
    arquivo = fopen("tarefa10_ex04.txt", "a");
    if(arquivo == NULL){
        printf("Não foi possível abrir o documento");
    } else {
    	printf("Documento aberto com sucesso!\n");
	}
    //gravando caracteres ate ser '0'
    printf("Digite: ");
    while(c != '0'){
        scanf("%c",&c);
        if(c!= '0')
            fprintf(arquivo,"%c", c);
    }
    fclose(arquivo);
    return 0;
}

