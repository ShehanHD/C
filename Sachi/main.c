#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a=54325;
    char buffer[20];
    itoa(a,buffer);
    printf("Binary value = %s\n", buffer);

    itoa(a,buffer,10);
    printf("Decimal value = %s\n", buffer);

    itoa(a,buffer,16);
    printf("Hexadecimal value = %s\n", buffer);
    return 0;
}
