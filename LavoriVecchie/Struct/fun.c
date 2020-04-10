
#include "prototipi.h"

void carica(persona dip[], int dim){
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

void ordNome(persona dip[], int dim){
int i,j,x;
char strN[15];
char strC[15];
int et;

while(1){
x=0;
    for(i=0; i<dim-1; i++){
        if(strcmp(dip[i].nome,dip[i+1].nome)>0){
            strcpy(strN,dip[i].nome);
            strcpy(dip[i].nome,dip[i+1].nome);
            strcpy(dip[i+1].nome,strN);

            strcpy(strC,dip[i].cognome);
            strcpy(dip[i].cognome,dip[i+1].cognome);
            strcpy(dip[i+1].cognome,strC);

            et=dip[i].eta;
            dip[i].eta=dip[i+1].eta;
            dip[i+1].eta=et;
            x=1;
        }
    }
    if(x==0){break;}
}
}

void ordCognome(persona dip[], int dim){
int i,j,x;
char strN[15];
char strC[15];
int et;

while(1){
x=0;
    for(i=0; i<dim-1; i++){
        if(strcmp(dip[i].cognome,dip[i+1].cognome)>0){
            strcpy(strC,dip[i].cognome);
            strcpy(dip[i].cognome,dip[i+1].cognome);
            strcpy(dip[i+1].cognome,strC);

            strcpy(strN,dip[i].nome);
            strcpy(dip[i].nome,dip[i+1].nome);
            strcpy(dip[i+1].nome,strN);

            et=dip[i].eta;
            dip[i].eta=dip[i+1].eta;
            dip[i+1].eta=et;
            x=1;
        }
    }
    if(x==0){break;}
}
}

void ordEta(persona dip[], int dim){
int i,j,x;
char strN[15];
char strC[15];
int et;

while(1){
x=0;
    for(i=0; i<dim-1; i++){
        if(dip[i].eta>dip[i+1].eta){
            et=dip[i].eta;
            dip[i].eta=dip[i+1].eta;
            dip[i+1].eta=et;

            strcpy(strC,dip[i].cognome);
            strcpy(dip[i].cognome,dip[i+1].cognome);
            strcpy(dip[i+1].cognome,strC);

            strcpy(strN,dip[i].nome);
            strcpy(dip[i].nome,dip[i+1].nome);
            strcpy(dip[i+1].nome,strN);


            x=1;
        }
    }
    if(x==0){break;}
}
}

void stampa(persona dip[], int dim){
int j;

for(j=0; j<3; j++)
{printf("\n%s \t%s \t%d",dip[j].nome, dip[j].cognome,dip[j].eta);}
}

