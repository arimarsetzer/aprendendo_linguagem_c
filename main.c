#include <stdio.h>

#define GUESSING_NUMBER 5

int main()
{
    // print game header
    printf("**************************************************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("**************************************************************\n");

    int secretnumber = 42;
    int guess = 0;

    for (int i = 1; i <= GUESSING_NUMBER; i++)
    {
        printf("\n");
        printf("Guess %d of %d\n", i, GUESSING_NUMBER);
        printf("What's your guess? ");

        scanf("%d", &guess);
        printf("Your guess was %d\n", guess);

        if (guess < 0)
        {
            printf("You can't guess negative number!\n");
            break;
        }

        int sucess = (guess == secretnumber);
        int higher = guess > secretnumber;
        int smaller = guess < secretnumber;

        if (sucess)
        {
            printf("Congratulations, you guessed the correct number!!\n");
            break;
        }

        else if (higher)
        {
            printf("Your guess was higher than the correct value.\n");
        }
        else
        {
            printf("Your guess was lower than the correct value.\n");
        }
    }
    printf("\n");
    printf("Game over!!\n");
}
