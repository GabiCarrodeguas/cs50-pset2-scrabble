#include <ctype.h> // isalpha, toupper funções úteis para caracteres (testar se é letra e converter para maiúscula
#include <cs50.h>  // get_string
#include <stdio.h> // printf
#include <string.h>  // strlen para saber o tamanho da palavra.

//vetor com a pontuaçao de A-Z
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Solicitar ao usuário duas palavras
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Calcular os pontos de cada palavra
    int score1 = compute_score(word1);//chama a função que calcula a pontuação de cada palavra.
    int score2 = compute_score(word2);

    // Imprimir o vencedor
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // Computa e devolve os pontos de cada palavra
    int score = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (isalpha(word[i]))  // garante que só conta letras
        {
            int index = toupper(word[i]) - 'A'; // 'A' vira 0, 'B' vira 1, etc.
            score += POINTS[index];
        }
    }
    return score;
}
