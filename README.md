# Batalha Naval - Nível Novato

##  Descrição

Este projeto foi desenvolvido como parte do desafio "Nível Novato" da disciplina de programação em C.

O objetivo é representar um tabuleiro 10x10 do jogo Batalha Naval utilizando matriz (array bidimensional) e posicionar dois navios:

- 🔹 Um navio horizontal (tamanho 3)
- 🔹 Um navio vertical (tamanho 3)

---

## Conceitos utilizados

- Matrizes (arrays bidimensionais)
- Vetores (arrays unidimensionais)
- Loops aninhados
- Estruturas condicionais
- Validação de limites
- Validação de sobreposição

---

## Funcionamento do Programa

1. O tabuleiro 10x10 é inicializado com o valor 0 (representando água).
2. Dois navios de tamanho 3 são criados.
3. Um navio é posicionado horizontalmente.
4. Outro navio é posicionado verticalmente.
5. O programa valida:
   - Se os navios estão dentro dos limites do tabuleiro
   - Se não há sobreposição entre eles
6. O tabuleiro completo é exibido no console.

---

## Representação no Console

- 0 → Água
- 3 → Parte do navio

Exemplo de saída:

```
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 3 3 3 0 0 0
...
```

---

## Estrutura do Projeto

```
batalha_naval.c
README.md
```

---

## Objetivo do Desafio

Demonstrar domínio dos conceitos básicos de vetores e matrizes em C, além de organização e documentação adequada do código.

---

Desenvolvido por Gabriela Meneguel 🚀
