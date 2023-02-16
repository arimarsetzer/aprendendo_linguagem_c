#include <stdio.h>

int main()
{
    // imprime o cabeçalho do nosso jogo
    printf("**************************************************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("**************************************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    if (numerosecreto == chute)
    {
        printf("Parabéns, você acertou o chute!\n");
    }else{
        printf("Que pena, você errou!\n");
    }
}
