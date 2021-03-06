#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[25];
    char cogNome[25];
    float stip;
}pers;

///I prototipi
void scrivere(pers dip[],int x);
void leggere(pers dip[],int x);
void append(pers dip[],int x);
void lista(char files[],int dime);
int controllaLista(char files[],int dime);

#define dim 10

int main(){

int scelta;
char nomi[dim];
const int x=10;
pers dip[x];


///File gia esisti
printf("File gia esiste:\n\t");
FILE * fp = fopen("ListadiFiles","r");

///fa il controllo esistenza del file
if(fp){
while(!feof(fp)){
fscanf(fp,"%s",nomi);

///per non leggere lultima riga due volte
if(!feof(fp))
    printf("%s\n\t",nomi);
}
}

///fa il controllo esistenza del file se ce o non ce procedi
if(!fp||fp){
///Genera una scelta
do{
printf("\n1 per SCRIVERE\n2 per LEGGERE\n3 per APPENDERE\n0 per USCIRE\n\nTua Scelta: ");
scanf("%d",&scelta);

    switch(scelta){
        case 1:
            scrivere();
            break;
        case 2:
            leggere();
            break;
        case 3:
            append();
            break;
        case 0:
            printf("\nArrividerci!");
            break;
    }
}while(scelta!=0);}
fclose(fp);
return 0;
}


///Funziona per Scrivere i dati sul File
void scrivere(pers dip[],int x){
char FileName[dim];

printf("\nNome di File(Scrivere): ");
scanf("%s",FileName);

if(controllaLista(FileName,dim)==1){
    printf("Il File gia esiste!!!\n\n");
    main();
}

else{
    lista(FileName,dim);

FILE * fp= fopen(FileName,"w");

for(int i=0; i<10; i++){
	scanf("%s",dip[i].nome);
	scanf("%s",dip[i].cogNome);
	scanf("%f",&dip[i].stipendio);

	fprintf(fp,"%s %s %f\n",dipendenti[i].nome,dipendenti[i].cogNome,dipendenti[i].stipendio);
}


fclose(fp);}
}

///Funziona per leggere i dati dal File
void leggere(pers dip[],int x){
int num;
char FileName[dim];

printf("\nNome di File(Leggere): ");
scanf("%s",FileName);

FILE * fp= fopen(FileName,"r");

while(!feof(fp)){
fscanf(fp,"%s %s %f",appoggio.nome,appoggio.cogNome,&appoggio.stipendio);

///per non leggere lultima riga due volte
if(!feof(fp))
    printf("%s %s %f\n",appoggio.nome,appoggio.cogNome,appoggio.stipendio);
}

fclose(fp);
}


///Funziona per Appendere i dati nel File
void append(pers dip[],int x){
int num;
char FileName[dim];

printf("\nNome di File(Append): ");
scanf("%s",FileName);

FILE * fp= fopen(FileName,"a");

printf("\nInserire Dati(0 per Uscire):\n");

do{
scanf("%d",&num);

if(num!=0)
    fprintf(fp,"%d\n",num);
}while(num!=0);

fclose(fp);
}


///La funziona per contenere i Nome dei file
void lista(char files[],int dime){
    FILE * fp = fopen("ListadiFiles","a");

    fprintf(fp,"%s\n",files);

    fclose(fp);
}


///la funziona che controlla di esistenza dei file
int controllaLista(char files[],int dime){
char d[dim];

FILE * fp = fopen("ListadiFiles","r");

while(!feof(fp)){

    fscanf(fp,"%s",d);

    if(!feof(fp)){
        if(strcmp(files,d)==0){
            return 1;
        }
        else
            return 0;
    }

}
    fclose(fp);

}

