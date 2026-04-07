# 🎮 Seletor de Jogos

Trabalho avaliativo desenvolvido em linguagem C contendo três minijogos em modo terminal, com suporte a partidas entre dois jogadores ou contra a máquina.

-----

## 📋 Sumário

- [Sobre o Projeto](#sobre-o-projeto)
- [Informações Acadêmicas](#informações-acadêmicas)
- [Conceitos Aplicados](#conceitos-aplicados)
- [Como Compilar e Executar](#como-compilar-e-executar)
- [Jogos Disponíveis](#jogos-disponíveis)
  - [1. Perguntas e Respostas](#1-perguntas-e-respostas)
  - [2. Cobra na Caixa](#2-cobra-na-caixa)
  - [3. Gousmas Wars](#3-gousmas-wars)

-----

## Sobre o Projeto

Trabalho avaliativo do primeiro bimestre da disciplina de **Algoritmos e Decodificação de Códigos** do curso de **Ciência da Computação** da **Faculdade CESUPA**.

O programa funciona como um seletor de jogos no terminal, onde o usuário pode escolher entre três opções de jogos diferentes, jogar contra outro jogador ou contra a máquina, e repetir a partida quantas vezes quiser.

-----

## 👤 Informações Acadêmicas

|Campo          |Informação                           |
|---------------|-------------------------------------|
|**Aluno**      |Victor Yoshio Yamada Pedrosa         |
|**Professor**  |Pedro Henrique Sales Girotto         |
|**Disciplina** |Algoritmos e Decodificação de Códigos|
|**Curso**      |Ciência da Computação                |
|**Instituição**|Faculdade CESUPA                     |
|**Período**    |1º Bimestre                          |

-----

## 🧠 Conceitos Aplicados

### Entrada e Saída de Dados

Utilização das funções `printf` e `scanf` da biblioteca `stdio.h` para exibir informações ao usuário e capturar entradas via teclado, incluindo inteiros (`%d`), caracteres (`%c`) e strings (`%s`).

### Estruturas de Repetição

Uso de `while`, `do...while` e `for` para controlar o fluxo dos jogos, manter o menu principal ativo, repetir partidas e percorrer arrays de gousmas.

### Estruturas de Decisão

Uso extensivo de `if`, `else if` e `else` para verificar as escolhas do jogador, validar entradas, determinar resultados de ações e controlar o fluxo de cada jogo.

### Arrays

Utilização de arrays unidimensionais para armazenar o estado das Gousmas de cada jogador no jogo Gousmas Wars, incluindo remoção de elementos por substituição com o último índice ativo.

### Geração de Números Aleatórios

Uso das funções `rand()` e `srand(time(NULL))` da biblioteca `stdlib.h` combinadas com o operador módulo (`%`) para gerar números aleatórios dentro de intervalos específicos, aplicados no sorteio de caixas, turnos iniciais e ações da máquina.

### Strings

Uso de arrays de `char` para armazenar nomes de personagens e jogadores, lidos com `scanf` usando o especificador `%s`.

### Operador Ternário

Uso do operador `? :` para simplificar condições inline, como alternar a exibição do nome do jogador ativo com base no turno.

### Lógica de IA simples

Implementação de um oponente controlado pelo computador que toma decisões aleatórias usando `rand()`, presente nos jogos Cobra na Caixa e Gousmas Wars.

### Controle de Fluxo com break e continue

Uso de `break` para encerrar loops quando uma condição de vitória ou derrota é atingida, e `continue` para reiniciar iterações em caso de entradas inválidas.

-----

## Como Compilar e Executar

Compilar com GCC:

```bash
gcc jogos.c -o jogos
```

Executar:

```bash
./jogos
```

Ou no Windows com Dev-C++, basta compilar e executar normalmente pelo IDE.

-----

## Jogos Disponíveis

### 1. Perguntas e Respostas

Jogo de quiz com 5 perguntas de múltipla escolha (letras a, b, c, d). O jogador responde cada pergunta e recebe feedback imediato se acertou ou errou, com a resposta correta indicada em caso de erro.

**Temas das perguntas:**

- Geografia (Rio Nilo)
- NBA (recordistas de MVP)
- Biologia (ossos do corpo humano)
- Química (elemento mais abundante do universo)
- História regional (fundação de Belém do Pará)

-----

### 2. Cobra na Caixa

Jogo de turnos onde dois jogadores (ou um jogador contra a máquina) escolhem caixas numeradas de 1 a 5. Em cada rodada, o sistema sorteia aleatoriamente uma caixa com uma cobra e uma caixa com um botão. O jogador que encontrar a cobra perde; o que encontrar o botão vence.

**Modos de jogo:**

- Jogador vs Jogador
- Jogador vs Máquina (a máquina escolhe caixas aleatoriamente)

**Regras:**

- Os jogadores escolhem um personagem antes de começar
- O turno inicial é sorteado aleatoriamente
- A posição da cobra e do botão muda a cada rodada
- Caixas sem nada não encerram o turno — o jogador tenta novamente
- Ao fim da partida, é possível jogar novamente ou voltar ao menu

-----

### 3. Gousmas Wars

Jogo de estratégia em turnos onde cada jogador controla criaturas chamadas Gousmas. O objetivo é eliminar todas as Gousmas do oponente.

**Modos de jogo:**

- Jogador vs Jogador
- Jogador vs Máquina (a máquina age aleatoriamente)

**Regras:**

- Cada jogador inicia com 2 Gousmas, cada uma com nível de fúria 1
- Ao atacar, o jogador transfere toda a fúria da sua Gousma para a Gousma inimiga
- Se uma Gousma atingir fúria maior que 5, ela se desintegra
- O jogador pode dividir uma Gousma, transferindo metade da fúria para uma nova Gousma (limite de 2 Gousmas por jogador)
- Não é possível dividir se já houver 2 Gousmas vivas
- Não é possível dividir se a fúria for menor que 2
- O jogador que perder todas as Gousmas é derrotado
- Ao fim da partida, é possível jogar novamente ou voltar ao menu

-----

## 🛠️ Tecnologias

- Linguagem C (padrão C99)
- Bibliotecas: `stdio.h`, `stdlib.h`, `time.h`