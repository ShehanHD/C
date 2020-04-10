#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "proto.h"

#define dim 15			//il dimensione del array
#define gran 100		//quanto grande puo essere un numeri casuali

/*
i funzioni

visualizza	(Nome del Array,dimensione,gran);
somma		(Nome del Array,dimensione);
max			(Nome del Array,dimensione);
min			(Nome del Array,dimensione);
media		(somma,dimensione);
*/

int main() {
srand(time(NULL));
	
int num[dim];
int som,mx,mn;
double med;

visualizza(num,dim,gran);
som=somma(num,dim);
mx=max(num,dim);
mn=min(num,dim);
med=media(som,dim);

printf("\n\nLA SOMMA\t=%d",som);	
printf("\nIL MASSIMO\t=%d",mx);
printf("\nIL MINIMO\t=%d",mn);
printf("\nLA MEDIA\t=%.3f",med);

		
return 0;
}
