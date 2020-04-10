#include "proto.h"

/////////////////////////////////////////////////////////////////////////////
void visualizza(int casuali[],int dim,int gran){
	int i;
	
	printf("\t\tI NUMERI CASUALI\n\n");
	for(i=0; i<dim; i++){
		casuali[i]=rand()%gran;
		printf("%d  ",casuali[i]);	
	}
}

/////////////////////////////////////////////////////////////////////////////
int max(int casuali[],int dim){
	int i;
	int max=0;
	
	for(i=0; i<dim; i++){
		if(max<casuali[i]){
			max=casuali[i];
		}
	}
	
	return max;
}

/////////////////////////////////////////////////////////////////////////////
int min(int casuali[],int dim){
	int i,j;
	int min=0;
	
	for(i=0; i<dim; i++){
	for(j=1; j<dim; j++){
		if(casuali[i]>casuali[j]){
			min=casuali[j];
		}
	}}
	
	return min;
}

////////////////////////////////////////////////////////////////////////////
int somma(int casuali[],int dim){
	int somma=0;
	int i;
	
	for(i=0; i<dim; i++){
		somma=somma+casuali[i];
	}
	
	media(somma,dim);
	
	return somma;
}

/////////////////////////////////////////////////////////////////////////////
double media(double somma,int dim){
	double media;
	
	media=somma/dim;
	
	return media;
	
}
