// Fonte: https://help.salesforce.com/s/articleView?id=000385300&language=pt_BR&type=1 + ChatGPT

/*Neste exemplo, a função "contains" recebe duas strings como parâmetros :
a string a ser verificada e a substring a ser procurada.
A função "strstr" da biblioteca padrão do C é usada para verificar se a substring está presente na string.
Se a substring estiver presente na string, a função retorna 1, caso contrário, retorna 0.

No exemplo principal, uma string e uma substring são declaradas e a função "contains" é chamada
para verificar se a string contém a substring.Em seguida, uma mensagem é exibida na tela indicando se a string contém ou não a substring.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int contains(char *str, char *substr)
{
    if (strstr(str, substr) != NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char string[] = "Exemplo de string";
    char substring[] = "mplo";

    if (contains(string, substring))
    {
        printf("A string '%s' contém a substring '%s'.\n", string, substring);
    }
    else
    {
        printf("A string '%s' não contém a substring '%s'.\n", string, substring);
    }

    return 0;
}