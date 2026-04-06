# 🎮 Seletor de Jogos em C

## 📚 Trabalho Acadêmico

Este projeto foi desenvolvido como **trabalho avaliativo** do curso de **Ciência da Computação**, na disciplina de **Algoritmos e Codificação de Sistemas**, ministrada pelo professor **Girotto**.

---

## 📌 Descrição

O programa consiste em um sistema interativo em linguagem C que funciona como um **seletor de jogos no terminal**, permitindo ao usuário escolher entre diferentes minigames.

O sistema permanece em execução até que o usuário opte por sair.

---

## 🎯 Objetivos do Projeto

- Aplicar conceitos fundamentais da linguagem C
- Desenvolver lógica de programação
- Trabalhar com estruturas de controle
- Utilizar geração de números aleatórios
- Manipular vetores (arrays)
- Criar interação com o usuário via terminal

---

## ⚙️ Funcionalidades

O sistema apresenta um menu com as seguintes opções:

1. **Perguntas e Respostas (Quiz)**
2. **Cobra na Caixa**
3. **Gousmas Wars**
4. **Sair do programa**

---

## 🧠 Estrutura do Programa

- Uso de `while(1)` para manter o menu em execução contínua
- Estruturas condicionais (`if/else`) para controle de fluxo
- Funções da biblioteca padrão (`stdio.h`, `stdlib.h`, `time.h`)
- Uso de `rand()` para aleatoriedade
- Manipulação de arrays no jogo Gousmas Wars

---

## 🎮 Descrição dos Jogos

### 📝 1. Perguntas e Respostas

Um quiz composto por 5 perguntas de múltipla escolha.

**Características:**
- Alternativas de **a até d**
- Validação de respostas
- Feedback imediato ao usuário

---

### 🐍 2. Cobra na Caixa

Jogo baseado em sorte e tomada de decisão.

**Regras:**
- O jogador escolhe entre 5 caixas
- Uma contém uma cobra (derrota)
- Uma contém um botão (vitória)
- As demais estão vazias

**Modos disponíveis:**
- Jogador vs Jogador
- Jogador vs Máquina

---

### ⚔️ 3. Gousmas Wars

Jogo estratégico baseado em entidades chamadas “gousmas”.

**Mecânicas:**
- Cada jogador inicia com 2 gousmas
- Cada gousma possui um nível de “fúria”

**Ações possíveis:**
- **Atacar:** causa dano à gousma adversária
- **Dividir:** cria uma nova gousma dividindo a fúria

**Condição de vitória:**
- Eliminar todas as gousmas do adversário
