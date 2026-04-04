#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int opcao1;

int main() {
    printf("\nSeletor de Jogos\n");
    while (1) {
        printf("\nSelecione Um Jogo\n");
        printf("pergunta e respostas - 1\n");
        printf("cobra na caixa - 2\n");
        printf("gousmas wars - 3\n");
        printf("sair - 4\n");
        scanf("%d", &opcao1);

        if (opcao1 == 1) {
            char resposta1, resposta2, resposta3, resposta4, resposta5;

            printf("\nPerguntas e Respostas\n");
            printf("1 - Em que pais fica a foz do rio Nilo?\n");
            printf("a) Etiopia\n");
            printf("b) Sudao\n");
            printf("c) Egito\n");
            printf("d) Uganda\n");
            scanf(" %c", &resposta1);
            if (resposta1 == 'a') {
                printf("Resposta errada, resposta certa letra C, Egito\n");
            } else if (resposta1 == 'b') {
                printf("Resposta errada, resposta certa letra C, Egito\n");
            } else if (resposta1 == 'c') {
                printf("Resposta correta!\n");
            } else if (resposta1 == 'd') {
                printf("Resposta errada, resposta certa letra C, Egito\n");
            } else {
                printf("Opcao Invalida\n");
            }

            printf("\nPerguntas e Respostas\n");
            printf("2 - Qual jogador da NBA tem mais titulos de MVP da temporada regular?\n");
            printf("a) Michael Jordan\n");
            printf("b) LeBron James\n");
            printf("c) Kareem Abdul-Jabbar\n");
            printf("d) Bill Russell\n");
            scanf(" %c", &resposta2);
            if (resposta2 == 'a') {
                printf("Resposta errada, resposta certa letra C, Kareem Abdul-Jabbar\n");
            } else if (resposta2 == 'b') {
                printf("Resposta errada, resposta certa letra C, Kareem Abdul-Jabbar\n");
            } else if (resposta2 == 'c') {
                printf("Resposta correta!\n");
            } else if (resposta2 == 'd') {
                printf("Resposta errada, resposta certa letra C, Kareem Abdul-Jabbar\n");
            } else {
                printf("Opcao Invalida\n");
            }

            printf("\nPerguntas e Respostas\n");
            printf("3 - Quantos ossos tem o corpo humano adulto?\n");
            printf("a) 256\n");
            printf("b) 180\n");
            printf("c) 312\n");
            printf("d) 206\n");
            scanf(" %c", &resposta3);
            if (resposta3 == 'a') {
                printf("Resposta errada, resposta certa letra D, 206 ossos\n");
            } else if (resposta3 == 'b') {
                printf("Resposta errada, resposta certa letra D, 206 ossos\n");
            } else if (resposta3 == 'c') {
                printf("Resposta errada, resposta certa letra D, 206 ossos\n");
            } else if (resposta3 == 'd') {
                printf("Resposta correta!\n");
            } else {
                printf("Opcao Invalida\n");
            }

            printf("\nPerguntas e Respostas\n");
            printf("4 - Qual e o elemento quimico mais abundante no universo?\n");
            printf("a) Oxigenio\n");
            printf("b) Carbono\n");
            printf("c) Helio\n");
            printf("d) Hidrogenio\n");
            scanf(" %c", &resposta4);
            if (resposta4 == 'a') {
                printf("Resposta errada, resposta certa letra D, Hidrogenio\n");
            } else if (resposta4 == 'b') {
                printf("Resposta errada, resposta certa letra D, Hidrogenio\n");
            } else if (resposta4 == 'c') {
                printf("Resposta errada, resposta certa letra D, Hidrogenio\n");
            } else if (resposta4 == 'd') {
                printf("Resposta correta!\n");
            } else {
                printf("Opcao Invalida\n");
            }

            printf("\nPerguntas e Respostas\n");
            printf("5 - Em que ano foi fundada a cidade de Belem do Para?\n");
            printf("a) 1532\n");
            printf("b) 1616\n");
            printf("c) 1654\n");
            printf("d) 1700\n");
            scanf(" %c", &resposta5);
            if (resposta5 == 'a') {
                printf("Resposta errada, resposta certa letra B, 1616\n");
            } else if (resposta5 == 'b') {
                printf("Resposta correta!\n");
            } else if (resposta5 == 'c') {
                printf("Resposta errada, resposta certa letra B, 1616\n");
            } else if (resposta5 == 'd') {
                printf("Resposta errada, resposta certa letra B, 1616\n");
            } else {
                printf("Opcao Invalida\n");
            }

        } else {
            printf("Opcao Invalida\n");
        }
    }

    return 0;
}
