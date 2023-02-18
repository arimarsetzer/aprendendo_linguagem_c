#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // print game header
    printf("**************************************************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("**************************************************************\n");

    int bignumber = time(0);
    srand(bignumber);

    int secretnumber = bignumber % 100;
    int guess;
    int tries = 1;
    double points = 1000;

    int sucess = 0;

    int level;
    printf("What difficult level do you want to play?\n");
    printf("(1) Easy (2) Medium (3) Hard\n\n");
    printf("Choose the difficult level: ");
    scanf("%d", &level);

    int attemptsnumber;

    switch (level)
    {
    case 1:
        attemptsnumber = 20;
        break;

    case 2:
        attemptsnumber = 15;
        break;

    default:
        attemptsnumber = 6;
        break;
    }

    for (int i = 1; i <= attemptsnumber; i++)
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

        sucess = (guess == secretnumber);
        int higher = guess > secretnumber;

        if (sucess)
        {
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
        double lostpoints = abs(guess - secretnumber) / (double)2;

        points = points - lostpoints;
    }

    printf("\n");
    printf("Game over!!\n");

    if (sucess)
    {
        printf("You won in the %d attempt!\n", tries);
        printf("Total points: %.2f\n", points);
    }
    else
    {
        printf("You lost! The value was %d! Try again!\n", secretnumber);
    }
}
