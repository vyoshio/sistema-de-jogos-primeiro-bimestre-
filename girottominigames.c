#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int opcao1;

int main() {
    srand(time(NULL));
    printf("\nSeletor de Jogos\n");
    while (1) {
        printf("\nSelecione Um Jogo\n");
        printf("pergunta e respostas - 1\n");
        printf("cobra na caixa - 2\n");
        printf("gousmas wars - 3\n");
        printf("sair - 4\n");
        if (scanf("%d", &opcao1) != 1) {
            scanf("%*s");
            printf("Opcao Invalida\n");
            continue;
        }
        if (opcao1 < 1 || opcao1 > 4) {
            printf("Opcao Invalida\n");
            continue;
        }

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

        } else if (opcao1 == 2) {
            char menu;
            char personagem1[50], personagem2[50];
            int caixaescolhida, caixacobra, caixabotao, turno, modoJogo;

            do {
                printf("1 - Jogador vs Jogador\n");
                printf("2 - Jogador vs Maquina\n");
                if (scanf("%d", &modoJogo) != 1) {
                    scanf("%*s");
                    printf("Opcao Invalida\n");
                } else if (modoJogo < 1 || modoJogo > 2) {
                    printf("Opcao Invalida\n");
                }
            } while (modoJogo < 1 || modoJogo > 2);

            turno = rand() % 2;

            printf("voce escolheu cobra na caixa\n");
            printf("o jogo e sobre voce escolher uma caixa\n");
            printf("caso apareca uma cobra voce perde\n");
            printf("se aparecer o botao voce ganha\n");

            printf("escolha 2 personagens\n");
            printf("Adisson\n");
            printf("Lucas\n");
            printf("Matheus\n");
            printf("Alice\n");
            printf("Sophia\n");
            printf("Pilera\n");
            printf("Isabella\n");
            printf("Rafael\n");
            printf("escolha o personagem do jogador 1\n");
            scanf(" %s", personagem1);

            if (modoJogo == 2) {
                printf("escolha o personagem do jogador 2\n");
                scanf(" %s", personagem2);
            } else {
                printf("escolha o personagem da maquina\n");
                scanf(" %s", personagem2);
            }

            printf("os personagens escolhidos foram %s e %s\n", personagem1, personagem2);

            do {
                while (1) {
                    do {
                        caixabotao = rand() % 5 + 1;
                        caixacobra = rand() % 5 + 1;
                    } while (caixabotao == caixacobra);

                    if (modoJogo == 2 && turno == 1) {
                        caixaescolhida = rand() % 5 + 1;
                        printf("%s (maquina) escolheu a caixa %d\n", personagem2, caixaescolhida);
                    } else {
                        printf("%s, escolha uma caixa de 1 a 5\n", turno == 0 ? personagem1 : personagem2);
                        scanf("%d", &caixaescolhida);
                        if (caixaescolhida < 1 || caixaescolhida > 5) {
                            printf("Opcao Invalida. Escolha uma caixa de 1 a 5.\n");
                            continue;
                        }
                    }

                    if (caixaescolhida == caixacobra) {
                        printf("a caixa %d tinha a cobra! %s perdeu!\n", caixaescolhida, turno == 0 ? personagem1 : personagem2);
                        break;
                    } else if (caixaescolhida == caixabotao) {
                        printf("a caixa %d tinha o botao! %s ganhou!\n", caixaescolhida, turno == 0 ? personagem1 : personagem2);
                        break;
                    } else {
                        printf("a caixa %d nao tinha nada. Tente novamente\n", caixaescolhida);
                    }
                    turno = 1 - turno;
                }
                do {
                    printf("Deseja jogar novamente? (s/n)\n");
                    scanf(" %c", &menu);
                    if (menu != 's' && menu != 'S' && menu != 'n' && menu != 'N') {
                        printf("Opcao Invalida\n");
                    }
                } while (menu != 's' && menu != 'S' && menu != 'n' && menu != 'N');
            } while (menu == 's' || menu == 'S');

        } else if (opcao1 == 3) {
            char menu;
            int modoJogo;

            do {
                printf("1 - Jogador vs Jogador\n");
                printf("2 - Jogador vs Maquina\n");
                if (scanf("%d", &modoJogo) != 1) {
                    scanf("%*s");
                    printf("Opcao Invalida\n");
                } else if (modoJogo < 1 || modoJogo > 2) {
                    printf("Opcao Invalida\n");
                }
            } while (modoJogo < 1 || modoJogo > 2);

            do {
                int j1[2] = {1, 1};
                int j2[2] = {1, 1};
                int q1 = 2, q2 = 2;
                int turno = 0;
                int escolha, origem, alvo;

                while (q1 > 0 && q2 > 0) {
                    int i;
                    printf("\nJogador %d\n", turno + 1);
                    printf("Gousmas J1: ");
                    for (i = 0; i < q1; i++) printf("[%d]=%d ", i+1, j1[i]);
                    printf("\n");
                    printf("Gousmas J2: ");
                    for (i = 0; i < q2; i++) printf("[%d]=%d ", i+1, j2[i]);
                    printf("\n");

                    if (modoJogo == 2 && turno == 1) {
                        escolha = rand() % 2 + 1;
                        printf("maquina escolheu: %d\n", escolha);

                        if (escolha == 1) {
                            origem = rand() % q2;
                            alvo = rand() % q1;
                            printf("maquina ataca com gousma %d na gousma %d\n", origem+1, alvo+1);
                            int dano = j2[origem];
                            printf("Dano causado: %d\n", dano);
                            j1[alvo] += dano;
                            if (j1[alvo] > 5) {
                                printf("Gousma inimiga DESINTEGROU!\n");
                                j1[alvo] = j1[q1 - 1];
                                q1--;
                            }
                        } else {
                            if (q2 < 2) {
                                origem = rand() % q2;
                                int metade = j2[origem] / 2;
                                if (metade == 0) {
                                    printf("maquina nao conseguiu dividir, furia baixa!\n");
                                } else {
                                    j2[origem] -= metade;
                                    j2[q2] = metade;
                                    q2++;
                                    printf("maquina dividiu gousma %d! nova gousma com furia %d\n", origem+1, metade);
                                }
                            } else {
                                origem = rand() % q2;
                                alvo = rand() % q1;
                                printf("maquina nao pode dividir, ataca com gousma %d na gousma %d\n", origem+1, alvo+1);
                                int dano = j2[origem];
                                printf("Dano causado: %d\n", dano);
                                j1[alvo] += dano;
                                if (j1[alvo] > 5) {
                                    printf("Gousma inimiga DESINTEGROU!\n");
                                    j1[alvo] = j1[q1 - 1];
                                    q1--;
                                }
                            }
                        }

                    } else {
                        do {
                            printf("1 - Atacar\n");
                            printf("2 - Dividir\n");
                            printf("Escolha: ");
                            if (scanf("%d", &escolha) != 1) {
                                scanf("%*s");
                                printf("Opcao Invalida\n");
                            } else if (escolha < 1 || escolha > 2) {
                                printf("Opcao Invalida\n");
                            }
                        } while (escolha < 1 || escolha > 2);

                        if (escolha == 1) {
                            do {
                                printf("Escolha origem (1 ou 2): ");
                                if (scanf("%d", &origem) != 1) {
                                    scanf("%*s");
                                    origem = -1;
                                    printf("Opcao Invalida\n");
                                } else {
                                    origem--;
                                    if (origem < 0 || origem >= (turno == 0 ? q1 : q2)) {
                                        printf("Opcao Invalida\n");
                                        origem = -1;
                                    }
                                }
                            } while (origem < 0 || origem >= (turno == 0 ? q1 : q2));

                            do {
                                printf("Escolha alvo (1 ou 2): ");
                                if (scanf("%d", &alvo) != 1) {
                                    scanf("%*s");
                                    alvo = -1;
                                    printf("Opcao Invalida\n");
                                } else {
                                    alvo--;
                                    if (alvo < 0 || alvo >= (turno == 0 ? q2 : q1)) {
                                        printf("Opcao Invalida\n");
                                        alvo = -1;
                                    }
                                }
                            } while (alvo < 0 || alvo >= (turno == 0 ? q2 : q1));

                            if (turno == 0) {
                                int dano = j1[origem];
                                printf("Dano causado: %d\n", dano);
                                j2[alvo] += dano;
                                if (j2[alvo] > 5) {
                                    printf("Gousma inimiga DESINTEGROU!\n");
                                    j2[alvo] = j2[q2 - 1];
                                    q2--;
                                }
                            } else {
                                int dano = j2[origem];
                                printf("Dano causado: %d\n", dano);
                                j1[alvo] += dano;
                                if (j1[alvo] > 5) {
                                    printf("Gousma inimiga DESINTEGROU!\n");
                                    j1[alvo] = j1[q1 - 1];
                                    q1--;
                                }
                            }

                        } else if (escolha == 2) {
                            if (turno == 0 && q1 < 2) {
                                do {
                                    printf("Qual Gousma dividir (1 ou 2): ");
                                    if (scanf("%d", &origem) != 1) {
                                        scanf("%*s");
                                        origem = -1;
                                        printf("Opcao Invalida\n");
                                    } else {
                                        origem--;
                                        if (origem < 0 || origem >= q1) {
                                            printf("Opcao Invalida\n");
                                            origem = -1;
                                        }
                                    }
                                } while (origem < 0 || origem >= q1);
                                int metade = j1[origem] / 2;
                                if (metade == 0) {
                                    printf("Furia muito baixa!\n");
                                } else {
                                    j1[origem] -= metade;
                                    j1[q1] = metade;
                                    q1++;
                                    printf("Dividiu! Nova Gousma com furia %d\n", metade);
                                }
                            } else if (turno == 1 && q2 < 2) {
                                do {
                                    printf("Qual Gousma dividir (1 ou 2): ");
                                    if (scanf("%d", &origem) != 1) {
                                        scanf("%*s");
                                        origem = -1;
                                        printf("Opcao Invalida\n");
                                    } else {
                                        origem--;
                                        if (origem < 0 || origem >= q2) {
                                            printf("Opcao Invalida\n");
                                            origem = -1;
                                        }
                                    }
                                } while (origem < 0 || origem >= q2);
                                int metade = j2[origem] / 2;
                                if (metade == 0) {
                                    printf("Furia muito baixa!\n");
                                } else {
                                    j2[origem] -= metade;
                                    j2[q2] = metade;
                                    q2++;
                                    printf("Dividiu! Nova Gousma com furia %d\n", metade);
                                }
                            } else {
                                printf("Nao pode dividir!\n");
                            }
                        }
                    }

                    turno = 1 - turno;
                }

                if (q1 == 0) {
                    printf("\nJogador 2 venceu!\n");
                } else {
                    printf("\nJogador 1 venceu!\n");
                }

                do {
                    printf("Deseja jogar novamente? (s/n)\n");
                    scanf(" %c", &menu);
                    if (menu != 's' && menu != 'S' && menu != 'n' && menu != 'N') {
                        printf("Opcao Invalida\n");
                    }
                } while (menu != 's' && menu != 'S' && menu != 'n' && menu != 'N');

            } while (menu == 's' || menu == 'S');

        } else if (opcao1 == 4) {
            printf("Saindo...\n");
            break;

        } else {
            printf("Opcao Invalida\n");
        }
    }

    return 0;
}
