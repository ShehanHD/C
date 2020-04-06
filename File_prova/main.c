#include <stdio.h>
#include <stdlib.h>

#define y 2
 typedef struct{
	char nome[25];
	char cogNome[25];
	float stipendio;
	}persona;

void scrivere(persona dipendenti[],persona titolare, persona appoggio, int dim);
void append(persona dipendenti[],persona titolare, persona appoggio, int dim);
void leggere(persona dipendenti[],persona titolare, persona appoggio, int dim);

int main(){
persona dipendenti[y];
persona titolare;
persona appoggio;
int scelta;

do{
printf("\n1 per SCRIVERE\n2 per LEGGERE\n3 per APPENDERE\n0 per USCIRE\n\nTua Scelta: ");
scanf("%d",&scelta);

    switch(scelta){
        case 1:
            scrivere(dipendenti,titolare,appoggio,y);
            break;
        case 2:
            leggere(dipendenti,titolare,appoggio,y);
            break;
        case 3:
            append(dipendenti,titolare,appoggio,y);
            break;
        case 0:
            printf("\nArrividerci!");
            break;
    }
}while(scelta!=0);

return 0;
}

void scrivere(persona dipendenti[],persona titolare, persona appoggio, int dim){
char FileName[dim];

printf("\nNome di File(Scrivere): ");
scanf("%s",FileName);


}

void append(persona dipendenti[],persona titolare, persona appoggio, int dim){
FILE *  fp;
for(int i=0; i<dim; i++){
	scanf("%s",dipendenti[i].nome);
	scanf("%s",dipendenti[i].cogNome);
	scanf("%f",&dipendenti[i].stipendio);
}

scanf("%s",titolare.nome);
scanf("%s",titolare.cogNome);
scanf("%f",&titolare.stipendio);

fp = fopen("archivio.txt","a");

for(int i=0; i<dim;i++){
	fprintf(fp,"%s %s %f\n",dipendenti[i].nome,dipendenti[i].cogNome,dipendenti[i].stipendio);
}

fprintf(fp,"%s %s %f\n",titolare.nome,titolare.cogNome,titolare.stipendio);

fclose(fp);
}


void leggere(persona dipendenti[],persona titolare, persona appoggio, int dim){
FILE *  fp;
fp = fopen("archivio.txt","r");

while(!feof(fp)){
	fscanf(fp,"%s %s %f",appoggio.nome,appoggio.cogNome,&appoggio.stipendio);
	printf("%s %s %f\n",appoggio.nome,appoggio.cogNome,appoggio.stipendio);
}

fclose(fp);
}
