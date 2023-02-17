#include <stdio.h>

int main()
{
    // print game header
    printf("**************************************************************\n");
    printf("* Print from 1 to 100 using WHILE loop function *\n");
    printf("**************************************************************\n");

    int i = 1;

    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }
    printf("You acchieve %d n°!", i - 1);
}
