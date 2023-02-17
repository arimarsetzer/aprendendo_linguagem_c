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
        double lostpoints = abs(guess - secretnumber) / (double)2;

        points = points - lostpoints;
    }
    printf("\n");
    printf("Game over!!\n");
    printf("You won in the %d attempt!\n", tries);
    printf("Total points: %.2f\n", points);
}
