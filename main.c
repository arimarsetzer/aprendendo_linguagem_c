#include <stdio.h>

int main()
{
    // print game header
    printf("**************************************************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("**************************************************************\n");

    int secretnumber = 42;
    int guess = 0;

    for (int i = 1; i <= 3; i++)
    {
        printf("\n");
        printf("Guess %d of 3\n", i);
        printf("What's your guess? ");

        scanf("%d", &guess);
        printf("Your guess was %d\n", guess);

        int sucess = (guess == secretnumber);

        if (sucess)
        {
            printf("Congratulations, you guessed the correct number!!\n");
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
