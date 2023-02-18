#include <stdio.h>

int main()
{
    // print header
    printf("**************************************************************\n");
    printf("* Multiplier calculator until 10 *\n");
    printf("**************************************************************\n");

    int n1;

    int r1;
    int r2;
    int r3;
    int r4;
    int r5;
    int r6;
    int r7;
    int r8;
    int r9;
    int r10;

    printf("Input the value you want to multiply: ");
    scanf("%d", &n1);

    if (n1 == 0)
    {
        printf("Value must be different than 0!\n");
        return 0;
    }

    if (n1 > 10)
    {
        printf("Value must be between 1 and 10!\n");
        return 0;
    }
    else
    {
        r1 = n1 * 1;
        r2 = n1 * 2;
        r3 = n1 * 3;
        r4 = n1 * 4;
        r5 = n1 * 5;
        r6 = n1 * 6;
        r7 = n1 * 7;
        r8 = n1 * 8;
        r9 = n1 * 9;
        r10 = n1 * 10;
    }

    printf("%d\n", r1);
    printf("%d\n", r2);
    printf("%d\n", r3);
    printf("%d\n", r4);
    printf("%d\n", r5);
    printf("%d\n", r6);
    printf("%d\n", r7);
    printf("%d\n", r8);
    printf("%d\n", r9);
    printf("%d\n", r10);
}
