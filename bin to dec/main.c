#include <stdio.h>
#include <string.h>
#include <math.h>

#define dim 100
int main()
{
    char binary[dim];
    int dec = 0;

    printf("Inserisci codice binario: ");
    scanf("%s",binary);

    if(strlen(binary)<=dim){
        for(int i=(strlen(binary) - 1); i>=0; i--){
            if(((int)binary[i] - 48) == 0 || ((int)binary[i] - 48) == 1){
                dec += ((int)binary[i] - 48) * pow(2,((strlen(binary) - 1)- i));
            }else{
                printf("Number is not valid, it has to contain 1 and 0 only");
                return 0;
            }
    }
    printf("%d", dec);
    }
    else{
        printf("Number is too large!");
    }

    return 0;
}
