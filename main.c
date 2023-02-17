#include <stdio.h>

int main()
{
    // print game header
    printf("**************************************************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("**************************************************************\n");

    int secretnumber = 42;
    int guess;
    int win = 0;
    int tries = 1;

    while (1)
    {
        printf("\n");
        printf("Guess n° %d\n", tries);
        printf("What's your guess? ");

        scanf("%d", &guess);
        printf("Your guess was %d\n", guess);

        if (guess < 0)
        {
            printf("You can't guess negative number!\n");
            continue;
        }

        int sucess = (guess == secretnumber);
        int higher = guess > secretnumber;

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

        tries++;
    }
    printf("\n");
    printf("Game over!!\n");
    printf("You won in the %d attempt!", tries);
}
