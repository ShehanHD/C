#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

#define dim 3
typedef struct{
    char Modello[15];
    char CasaAutomobilista[10];
    float Prezzo;
}Automezzo;

int main(){
    float somma=0;
    int sommaCara=0;
    int totCara=0;
    Automezzo Auto[dim];
    int i,j,x;
    float temp;
    char tempMode[15];
    char tempCasa[10];

    for(i=0; i<dim; i++){
        printf("Modello: ");
        scanf("%s",Auto[i].Modello);
        printf("CasaAutomobilista: ");
        scanf("%s",Auto[i].CasaAutomobilista);
        printf("Prezzo:");
        scanf("%f",&Auto[i].Prezzo);
    }

    printf("\nAuto\tCasaAutomobi\tPrzzo\n");
    for(i=0; i<dim; i++){
        printf("%s\t%s\t\t%.2f\n\n",Auto[i].Modello,Auto[i].CasaAutomobilista,Auto[i].Prezzo);
    }

    printf("Somma Caratteri(Modello+Casa)");
    for(i=0; i<dim; i++){
        somma+=Auto[i].Prezzo;


        sommaCara=(strlen(Auto[i].Modello))+(strlen(Auto[i].CasaAutomobilista));
        totCara+=sommaCara;
        printf("\n%s\t%d",Auto[i].Modello,sommaCara);
    }
     printf("\n\nLa Somma dei caratteri Totale: %d",totCara);
     printf("\nLa Media dei caratteri Totale: %f",(float)totCara/(dim*2));
     printf("\nLa Somma Media di Prezzo: %.2f",somma/dim);

    do{
            j=0;
    for(i=0; i<dim; i++){
        if(Auto[i].Prezzo<Auto[i+1].Prezzo){
            temp=Auto[i+1].Prezzo;
            Auto[i+1].Prezzo=Auto[i].Prezzo;
            Auto[i].Prezzo=temp;

            strcpy(tempMode,Auto[i+1].Modello);
            strcpy(Auto[i+1].Modello,Auto[i].Modello);
            strcpy(Auto[i].Modello,tempMode);

            strcpy(tempCasa,Auto[i+1].CasaAutomobilista);
            strcpy(Auto[i+1].CasaAutomobilista,Auto[i].CasaAutomobilista);
            strcpy(Auto[i].CasaAutomobilista,tempCasa);
            j=1;
            }
    temp=0;
    }
    if(j==0){
        x=1;
    }
    }while(x!=1);

    printf("\n\nAuto\tCasaAutomobi\tPrzzo\n");
    for(i=0; i<dim; i++){
        printf("%s\t%s\t\t%.2f\n\n",Auto[i].Modello,Auto[i].CasaAutomobilista,Auto[i].Prezzo);
    }

    return 0;
}

