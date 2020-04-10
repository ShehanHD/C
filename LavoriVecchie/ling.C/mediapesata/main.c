#include <stdio.h>
#include <stdlib.h>

void menuP();
void menuS();
void voti();
void vis_voti();
float media();

#define dim 4

char materie[dim][20] = {"Italiano","Inglese","Matematica", "Informatica"};



int main ()
{


	printf("\n\t\t\t\t\t IIMPORTANTI !! \n \t per il peso vanno rispettati questi numeri :)  \n\n");
	printf(" ORALE     : 1.5 \n");
	printf(" SCRITTO   : 1 \n");
	printf(" E.CASA    : 0.7 \n\n\n");
/*
	vis_voti();
	media();
	*/
	menuP();



	return 0;
}


void menuP()
{
	int scelta;

	printf(" 1- inserire voti\n");
	printf(" 2- Vis. Voti \n");
	printf(" 3- Vis. Media \n");
	printf(" 4- Exit \n\n");

	printf("Scegli : ");
	scanf("%d",&scelta);

	do
	{

	switch(scelta)
	{
	case 1:
		voti();
		//menuP();
		break;
	case 2:
		vis_voti();
		menuP();
		break;
	case 3:
		media();
		menuP();
		break;
	case 4 :
		printf("Arrivdetci :)\n");
		//scelta = 0;
		break;

	}

	}while(scelta != 4);


}


void menuS()
{

	printf(" \n  1- tornare al menu principale \n ");
	printf(" 2- aggiungere altri voti \n ");
	printf(" 3- Vis. Media \n\n");

}


void voti()
{
	int i , scelta , voto , peso ;

	printf("\n in quale matria \n\n");

	for(i = 0;i < dim;i++)
	{

	printf(" %d- %s\n",(i + 1),materie[i]);

  }

  printf("\nscegli :   ");
  scanf("%d",&scelta);

  printf("inserisci il voto \n");
  scanf("%d",&voto);
  printf("inserisci il peso \n");
  scanf("%d",&peso);

  FILE *fp;
  fp = fopen("voti.txt", "a");
  fprintf(fp, "%d \t %d\n",voto,peso);
  fclose(fp);


  menuS();

   printf("scegli :   ");
  scanf("%d",&scelta);

  switch(scelta)
  {

  case 1:
  	menuP();
  	break;
  case 2:
  	voti();
  	//menuP();
  	break;
  case 3:
  	media();
  	menuP();
  	break;
  }



}


void vis_voti()
{

	int voto , peso,i,scelta ;
	//char array[50];

		printf("\n in quale matria \n\n");

	for(i = 0;i < dim;i++)
	{

	printf(" %d- %s\n",(i + 1),materie[i]);

  }

    printf("\nscegli :   ");
  scanf("%d",&scelta);

	FILE *fp;
	fp = fopen("voti.txt", "r");


do	{
		if(feof(fp))
		{
			break;
		}
		fscanf(fp, "%d", &voto);
		fscanf(fp, "%d", &peso);
		printf(" %d \t %d \n", voto , peso);

	}while(1);
	fclose(fp);
}






float media ()
{
	int voto , peso , cont = 0;
	float media ,  somma = 0;

	FILE *fp;
	fp = fopen("voti.txt", "r");


	do{
		if(feof(fp))
		{
			break;
		}
		fscanf(fp, "%d %d", &voto,&peso);
		somma += voto;
		cont++;

	}while(1);
	fclose(fp);

	media = somma / cont;

	printf("%.2f\n", media);
	return media;
}
