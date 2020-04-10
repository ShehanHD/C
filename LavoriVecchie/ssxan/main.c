#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    char cnome[20];
    char n[20];

    puts("Inserisci Nome:");
    gets(nome);
    puts("Inserisci Cognome:");
    gets(cnome);

    puts("");
    //sscanf(nome,"%s",n);
    printf("%s",n);
    //puts(n);
    puts(cnome);
    return 0;
}
