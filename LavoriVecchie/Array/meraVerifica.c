     #include <stdio.h>	

	#include <stdlib.h>	

	#include <ctype.h>	

	#include <string.h>	

	

	int main(void)	

	{	

const int MAXDIM = 30 ; /* dimensione massima stringa di caratteri */	

	 char parola[MAXDIM+1] ; /* stringa di caratteri inserita */	

	int numcaratteri  ; /* numero di caratteri della stringa inserita */	

	int palindroma ; /* flag per la ricerca */	

	int i, j ; /* indici dei cicli */	

	/* LEGGI LA STRINGA DI CARATTERI INSERITA DA TASTIERA */	

printf("Inserisci una parola di al massimo %d caratteri: ", MAXDIM) ;	

scanf("%s", parola) ;	

 /* VISUALIZZA LA STRINGA DI CARATTERI INSERITA */	

printf("La parola inserita e’: %s \n", parola) ;	

/* LEGGI IL NUMERO DI CARATTERI DELLA STRINGA */	

numcaratteri = 0; 



for( i =0; i <MAXDIM;i++){




if ( parola[i] != "\0")

{

numcaratteri++;

}



 }	

	 printf("La parola contiene %d caratteri \n", numcaratteri);	

	/* CONVERTI TUTTI I CARATTERI DELLA STRINGA IN CARATTERI MINUSCOLI */	

	 char maiu[26];

char minu [26];



for ( i =65; i <=90;i++)



{

maiu[i] = i;



 }



for ( i =97; i <=122;i++)



{

minu[i] = i;



 }	

	 for (i = 0; i < numcaratteri ; i++){

for (j= 0; j< 26 ; j++){

if ( parola[i]==maiu[j]){



parola[i]=minu[j +32];



}



}

}	

	/* VISUALIZZA LA STRINGA DI CARATTERI DOPO LA CONVERSIONE */	

	printf("La parola inserita scritta solo con caratteri in minuscolo e’: %s\n",	

	parola) ;	

	 /* VERIFICA SE LA STRINGA "parola" E’ PALINDROMA */	

	/* INIZIALIZZA IL FLAG "palindroma". IL FLAG ASSUME I VALORI	

	-- "palindroma" E’ UGUALE A 1 SE "parola" E’ PALINDROMA	

-- "palindroma" E’ UGUALE A 0 SE "parola" NON E’ PALINDROMA	

	 */	

	palindroma = 1 ;	

	/* IL CICLO  SCANDISCE LA STRINGA DI CARATTERI "parola" E VERIFICA	

	SE E’ PALINDROMA. L’INDICE "i" SCORRE LA PRIMA META’ DI "parola". L’INDICE	

 "j" SCORRE LA SECONDA META’ DI "parola" PARTENDO DALL’ULTIMO CARATTERE.	

	LA RICERCA TERMINA QUANDO SI VERIFICA CHE LA STRINGA "parola"	

NON E’ PALINDROMA O QUANDO SONO STATI CONSIDERATI TUTTI I CARATTERI	

DI "parola" */	

 int h; 



for (i =0; i < numcaratteri ; i++)

{

if( parola[i] == parola[numcaratteri -1])

{

h++;

}



}

if (h==(numcaratteri/2))

{

printf ("parola  E’ PALINDROMA");	}

return 0;

}
