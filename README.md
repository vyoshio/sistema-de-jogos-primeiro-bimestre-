# 🎮 Seletor de Jogos em C

## 📚 Trabalho Acadêmico

Este projeto foi desenvolvido como **trabalho avaliativo** do curso de **Ciência da Computação**, na disciplina de **Algoritmos e Codificação de Sistemas**, ministrada pelo professor **Girotto**.

---

## 👨‍💻 Autor

**Victor Yoshio Yamada Pedrosa**  
Aluno do curso de Ciência da Computação  

---

## 📌 Descrição do Projeto

O presente projeto consiste no desenvolvimento de um **sistema interativo em linguagem C**, executado no terminal, que simula um **menu de seleção de jogos**.

A proposta principal é permitir ao usuário escolher entre diferentes minigames, exercitando conceitos fundamentais de programação, como:

- Entrada e saída de dados
- Estruturas condicionais
- Estruturas de repetição
- Uso de vetores (arrays)
- Geração de números aleatórios
- Controle de fluxo

O programa permanece em execução contínua por meio de um **loop infinito (`while`)**, até que o usuário selecione a opção de saída.

---

## 🎯 Objetivos do Projeto

- Aplicar na prática os conceitos estudados na disciplina
- Desenvolver raciocínio lógico e resolução de problemas
- Simular um sistema interativo com múltiplas funcionalidades
- Trabalhar com diferentes tipos de lógica dentro de um mesmo programa

---

## ⚙️ Funcionamento Geral

Ao iniciar o programa, o usuário visualiza um menu com as seguintes opções:

1. Perguntas e Respostas (Quiz)
2. Cobra na Caixa
3. Gousmas Wars
4. Sair do programa

Após selecionar uma opção, o sistema executa o jogo correspondente e, ao final, retorna ao menu principal.

---

## 🎮 Descrição dos Jogos

### 📝 1. Perguntas e Respostas

Este jogo consiste em um quiz com 5 perguntas de múltipla escolha.

**Funcionamento:**
- O usuário escolhe uma alternativa (a, b, c ou d)
- O programa verifica a resposta
- É exibido um feedback informando se está correta ou incorreta

**Objetivo:**
Testar conhecimentos gerais do usuário.

---

### 🐍 2. Cobra na Caixa

Um jogo baseado em sorte e tomada de decisão.

**Funcionamento:**
- O jogador escolhe uma caixa entre 5 opções
- O sistema gera aleatoriamente:
  - Uma caixa com cobra (derrota)
  - Uma caixa com botão (vitória)
- As demais caixas estão vazias

**Modos disponíveis:**
- Jogador vs Jogador
- Jogador vs Máquina

**Objetivo:**
Escolher a caixa correta e evitar a derrota.

---

### ⚔️ 3. Gousmas Wars

Um jogo estratégico baseado em entidades chamadas “gousmas”, cada uma com um valor de força.

**Funcionamento:**
- Cada jogador inicia com 2 gousmas
- O jogo ocorre em turnos alternados
- O jogador pode escolher entre duas ações:

#### 🔹 Atacar
- Uma gousma ataca outra
- O dano é somado ao valor da gousma adversária
- Se o valor ultrapassar 5, a gousma é eliminada

#### 🔹 Dividir
- Uma gousma pode ser dividida em duas
- O valor é dividido entre elas
- Permite criar novas estratégias

**Objetivo:**
Eliminar todas as gousmas do adversário.
