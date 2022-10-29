/* 6. Escolha um jogo de cartas, baseado em um "baralho tradicional" (cada carta tem seu naipe e seu valor)
ou tipo "super trunfo" (cada carta possui um conjunto de atributos). Implemente a parte de distribuição (sorteio) 
de cartas para 2 jogadores, considerando que cada jogador irá receber 5 cartas. Exiba na tela 
as cartas que cada um dos jogadores recebeu. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese"); // Pt-Br
    srand((unsigned) time(NULL)); // para randomizar numero;
    //jogador será uma matriz, linha carta, coluna naipe
    int jogador1[5][2];
    int jogador2[5][2];
    int l, c; //variaveis para a linha e coluna do jogador1
    /* matriz para carta e matriz para naipe */
    char carta[13][15] = {"As de ", "2 de ", "3 de ", "4 de ", "5 de ", "6 de ", 
	"7 de ", "8 de  ", "9 de ", "10 de ", "Q - Dama de ", "K - Reis de ", "J - Valete de"};
    char naipe[4][10] = {"Paus", "Copas", "Espadas", "Ouro"};
    bool repetida = false;
    int conta_cartas = 0;
    //while para inserir cartas ao jogador 1
    while(conta_cartas < 5) {
        l = rand() % 13;
        c = rand() % 4;
        //loop para percorrer se ja existe os numeros randomizados
        for(int i=0; i<5; i++) {
            if(jogador1[i][0] == l && jogador1[i][1] == c) {
                repetida = true;
            }
        }
        // se nao existe, da a carta ao jogador1
        if(repetida == false) {
            jogador1[conta_cartas][0] = l;
            jogador1[conta_cartas][1] = c;
            conta_cartas++;
        } else {
            repetida = false;
        }
    }
    conta_cartas = 0;
    repetida = false;
    //while para dar cartas ao jogador2
    while(conta_cartas < 5) {
        l = rand() % 13;
        c = rand() % 4;
        //loop para verificar se ja existe os numeros randomizados.
        for(int i=0; i<5; i++) {
            if(jogador2[i][0] == l && jogador2[i][1] == c) {
                repetida = true;
            }
            if(jogador2[i][0] == jogador1[i][0] && jogador2[i][1] == jogador2[i][1]) {
                repetida = true;
            }
        }
        if(repetida == false) {
            jogador2[conta_cartas][0] = l;
            jogador2[conta_cartas][1] = c;
            conta_cartas++;
        } else {
            repetida = false;
        }
    }
    
    
    //imprimindo jogador1
    printf("JOGADOR 1 recebeu as cartas: \n");
    for(int i=0; i<5; i++) {
        printf("%s %s \n", carta[jogador1[i][0]], naipe[jogador1[i][1]]);
    }
    printf("\n-----------------------------------------------\n");
    //imprimindo jogador jogador2
    printf("JOGADOR 2 recebeu as cartas: \n");
    for(int i=0; i<5; i++) {
        printf("%s %s \n", carta[jogador2[i][0]], naipe[jogador2[i][1]]);
    }
    
    
    return 0;
}
