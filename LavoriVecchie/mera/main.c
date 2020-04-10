#include <stdio.h>
#include <stdlib.h>
typedef struct {

    char nome [30];
    char cognome [30];
    float stipendio ;

}dip;

void menu();
void addazienda(dip tito);
void adddipendente( dip dip [], int dim);
void listazienda ();
void listdipententi ();



int main ()
{


    return 0;
}




void menu()
{

    printf("\t\t\t IL MENU PRINCIPALE \n\n\n");

    printf("agiunggere dipendenti \n");
    printf("agiunggere aziende \n");
    printf("lista dipendenti \n");
    printf("lista aziende \n\n\n");


}


void addazienda(dip tito)
{
    printf("inserisci il nome del titolare : \n");
    scanf("%s",tito.nome);




}



void listazienda()
{
    char aziende[200];

    FILE *fp ;

    fp = fopen("aziende.txt","r");

      if(fp == NULL) {
      perror("Error opening file");
      main();
   }


    while( fgets(aziende,200,fp) != NULL)
    {

        puts(aziende);
        puts("\n");

    }
    fclose(fp);
}


void listdipententi()
{
    char dipendenti[200];

    FILE *fp ;


    fp = fopen("dipendenti.txt","r");

      if(fp == NULL) {
      perror("Error opening file");
      main();
   }

    while( fgets(dipendenti,200,fp) != NULL)
    {

        puts(dipendenti);
        puts("\n");

    }
    fclose(fp);
}



