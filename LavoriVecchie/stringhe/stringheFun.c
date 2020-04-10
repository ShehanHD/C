#include "stringhe.h"

void carica(personale agg[],int d){
int i;

printf("INSERISCI I DATI\n");
for(i=0; i<d; i++){
    printf("\tNome:");
    scanf("%s",agg[i].nome);
    printf("\tCognome:");
    scanf("%s",agg[i].cognmome);
    printf("\tLugo Di Nascita:");
    scanf("%s",agg[i].lugoDiNascita);
    printf("\tNazionalita:");
    scanf("%s",agg[i].nazionalita);
    printf("\tSesso:");
    scanf("%s",agg[i].sesso);
    printf("\tNumero Di Telefono: ");
    scanf("%d",agg[i].numeroDiTel);
}
}
