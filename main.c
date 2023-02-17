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

        int sucess = (guess == secretnumber);

        if (sucess)
        {
            printf("Congratulations, you guessed the correct number!!\n");
            break;
        }
        else
        {

            if (guess > secretnumber)
            {
                printf("Your guess was higher than the correct value.\n");
            }
            if (guess < secretnumber)
            {
                printf("Your guess was lower than the correct value.\n");
            }
        }
    }
    printf("\n");
    printf("Game over!!\n");
}
