#include <stdio.h>
#include <stdlib.h>

int main(){
	int *numeri;
	int somma=0;
	float media=0.0;
	int dim;
	int i;
	
	printf("Quanti numeri: ");
	scanf("%d",&dim);
	
	numeri=(int *)malloc(dim * sizeof(int));
	
	
	printf("\nInserisci Numeri: ");
	for(i=0; i<dim; i++){
		scanf("%d",&numeri[i]);
		somma=somma+numeri[i];
	}
	

	media=(float)somma/(float)dim;
	
	printf("\nLa Media: %f",media);	
	
	return 0;
}

