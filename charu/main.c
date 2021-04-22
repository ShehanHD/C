#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20

int main()
{

    int a=54325;
    char buffer[20];
    itoa(a,buffer,2);
    printf("Binary value = %s\n", buffer);

    itoa(a,buffer,10);
    printf("Decimal value = %s\n", buffer);

    itoa(a,buffer,16);
    printf("Hexadecimal value = %s\n", buffer);

    char str[MAX_LIMIT];
   fgets(str, MAX_LIMIT, stdin);
   printf("%s", str);

    return 0;
}
