# cs50-pset2-scrabble
Exercicio do Curso CS50

solicitar entrada duas vezes: uma vez para que "Jogador 1" insira sua palavra e outra vez para que "Jogador 2"
insira sua palavra.
Em seguida, dependendo de qual jogador marcar mais pontos,
seu programa deve imprimir “Player 1 wins!” (caso o jogador 1 ganhe),
“Player 2 wins!” (se o jogador 2 venceu) ou “Tie!” (caso os dois jogadores pontuem igualmente).

### Solicitar ao usuário duas palavras;
- word1 e word2

### Calcular os pontos de cada palavra;
- compute_score(word) soma os pontos de cada palavra


### Imprimir o vencedor.
- compute_score(word) soma os pontos de cada palavra

#Exemplo 
- cálculo do Player 1 — “Banana”:

B → índice 1 → 3 pontos

A → 0 → 1

N → 13 → 1

A → 0 → 1

N → 13 → 1

A → 0 → 1
total = 3 + 1 + 1 + 1 + 1 + 1 = 8

- cálculo do Player 2 — “Quiz”:

Q → 16 → 10

U → 20 → 1

I → 8 → 1

Z → 25 → 10
total = 10 + 1 + 1 + 10 = 22

comparação:

8 < 22 ⇒ imprime “Player 2 wins!”
