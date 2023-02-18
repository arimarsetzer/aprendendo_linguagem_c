#include <stdio.h>

int main()
{
    // print game header
    printf("**************************************************************\n");
    printf("* Print from 1 to 100 by summing 1+2+3... until reach to 100 *\n");
    printf("**************************************************************\n");

    int sum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum = sum + i;
    }
    printf("The sum is %d", sum);
}
