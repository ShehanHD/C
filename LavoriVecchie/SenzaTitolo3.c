#include <stdio.h>
#include <time.h>

int array(int x[], int dim);
int visualizza();

int main(){
 srand(time(NULL));

	visualizza();
}




int array(int x[],int dim){
	int i,j;
	
	for(i=0; i<10; i++){
		x[i]=rand()%10;
		printf("%d, ",x[i]);
		}
	printf("\n");
	for(j=0; j<10; j++){
	printf("\n\tposizione %d: %d\n",j+1, x[j]);
	}
}

int visualizza(){
int aia[10];
printf("\n\tRICHIAMATE DEL ARRAY\n\n");
array(aia,10);
} 

	
		

