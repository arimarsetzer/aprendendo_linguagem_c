#include <stdio.h>

int main()
{
    int number;
    printf("What math do you want? ");
    scanf("%d", &number);
    printf("\n");

    for (int i = 0; i <= 10; i++)
    {
        int multiply = number * i;
        printf("%d x %d = %d\n", number, i, multiply);
    }
}
