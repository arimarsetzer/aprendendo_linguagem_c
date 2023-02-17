#include <stdio.h>

int main()
{
    // print game header
    printf("**************************************************************\n");
    printf("* Print from 1 to 100 by summing 1+2+3... until reach to 100 *\n");
    printf("**************************************************************\n");

    int n1 = 1;
    int n2 = 2;
    int n3;
    int finalresult;

    while (finalresult <= 100)
    {
        n3 = n1 + n2;
        finalresult = n3 + (n1++);
        printf("Current value is %d\n", finalresult);
    }
}
