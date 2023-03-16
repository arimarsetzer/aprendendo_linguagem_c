#include <stdio.h>

void addUm(long *x)
{
    *x = *x + 1;
    printf("endreço que x está apontando: %x\n", x);
    printf("valor para o qual x está apontando: %d\n", *x);
}

int main(int argc, char const *argv[])
{
    long val = 10;
    long *ptr = &val;
    long otherVal =
        *ptr;
    printf("Endereço de val: %x\n", &val);

    printf("Endereço de ptr: %x\n", &ptr);
    printf("Endereço de otherVal: %x\n", &otherVal);
    printf("val = %d\n", val);
    addUm(&val);
    printf("val = %d\n", val);
    printf("otherVal = %d\n", otherVal);
    return 0;
}