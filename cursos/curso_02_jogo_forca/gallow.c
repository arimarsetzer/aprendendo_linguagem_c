#include <stdio.h>
#include <string.h>

int main()
{
    char secretword[20];

    sprintf(secretword, "WATERMELLON");

    int win = 0;
    int hanged = 1;

    do
    {
        char kick;
        scanf("%c", &kick);

        for (int i = 0; i < strlen(secretword); i++)
        {
            if (secretword[i] == kick)
            {
                printf("The position %d have this letter!\n", i);
            }
        }

    } while (!win && !hanged);
}
