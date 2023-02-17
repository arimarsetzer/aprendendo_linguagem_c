#include <stdio.h>

int main()
{
    // print header
    printf("**************************************************************\n");
    printf("* Multiplier calculator *\n");
    printf("**************************************************************\n");

    int value1;
    int value2;

    printf("Type first number: ");
    scanf("%d", &value1);
    printf("Type second number: ");
    scanf("%d", &value2);

    int result = value1 * value2;

    printf("The result is: %d", result);
}
