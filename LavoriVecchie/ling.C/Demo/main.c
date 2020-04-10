#include <stdio.h>
#include <stdlib.h>



int main()
{
    float a;
    float b;

    printf("inserisci il primo numero: ");
    scanf("%f",&a);

    printf("inserisci il secondo numero: ");
    scanf("%f",&b);

    float somma=a+b;
    float sub=a-b;
    float multi=a*b;
    float divi=a/b;

    printf("Addizione= %.0f\n\a",somma);
    printf("Sotrazione= %.0f\n",sub);
    printf("Multiplicazione= %.0f\n",multi);
    printf("Divisione= %.3f",divi);

    return 0;
}
