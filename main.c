#include <stdio.h>
#include <stdbool.h>

int main()
{
    // print game header
    printf("**************************************************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("**************************************************************\n");

    int secretnumber = 42;
    int guess = 0;
    bool sucess = guess == secretnumber;

    printf("What's your guess? ");
    scanf("%d", &guess);
    printf("Your guess was %d\n", guess);

    if (sucess = true)
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
