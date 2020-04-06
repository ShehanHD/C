#include <stdio.h>
#include <stdlib.h>
#include "prototipi.h"

void add(persona dip[], int dim){
    int i;

    for(i=0; i<dim; i++){
        printf("\nNOME: ");
        scanf("%s",dip[i].nome);
        printf("COGNOME: ");
        scanf("%s",dip[i].cognome);
        printf("ETA: ");
        scanf("%d",&dip[i].eta);
    }
}

void stampa(persona dip[], int dim){
    int j;

    for(j=0; j<dim; j++){
        printf("\n%s \t%s \t%d",dip[j].nome, dip[j].cognome,dip[j].eta);
    }
}

void save(persona dip[], int dim){
    FILE* fp = fopen("demo.txt", "a");
    int j;

    for(j=0; j<dim; j++){
        fprintf(fp, "%s %s %d\n",dip[j].nome, dip[j].cognome,dip[j].eta);
    }

    printf("\n\ti dati sono salvati\n\n");
    fclose(fp);
}

void read(){

    FILE* fp = fopen("demo.txt", "r");
    char nome[15];
	char cognome[15];
	int eta;

    while(!feof(fp)){
        fscanf(fp,"%s %s %d",nome, cognome, &eta);

        if(!feof(fp)){
            printf("\n%s \t%s \t%d",nome, cognome, eta);
        }
    }

    fclose(fp);
}
