#include <stdio.h>

void genera(int array[], int dim);
void somma(int array[], int dim);
void pariodispari(int array[], int dim);
void som_e_medi(double som);


int main(){
	srand(time(NULL));
	int dim=10;
	int	casuali[dim];
	
	genera(casuali,dim);
	somma(casuali,dim);
	pariodispari(casuali,dim);	
	
	return 0;
}




void genera(int array[], int dim){
	int i;
	
	for(i=0; i<10; i++){
		array[i]=rand()%10;
		printf("%d, ",array[i]);	
}}

void somma(int array[], int dim){
	int i;
	int som=0;
	
	for(i=0; i<10; i++){
		som=som+array[i];
	}
	
	printf("\n\nSomma\t\t=  %d",som);
	som_e_medi(som);
}



void pariodispari(int array[], int dim){
	int i,x,p,d;
	int contp=0;
	int contd=0;
	int pari[10];
	int dispari[10];
	
	
	for(i=0; i<10; i++){
		x=array[i]%2;
		if(x==0){
			pari[contp]=array[i];
			contp++;	
		}
		if(x==1){
			dispari[contd]=array[i];
			contd++;
}}
	
	
	printf("\n\nAbbiamo %d Numeri Pari e %d Numeri Dispari\n\n",contp,contd);
	printf("Numeri Pari\t=  ");
	for(p=0; p<contp; p++){
	printf("%d, ",pari[p]);
	}	
	printf("\nNumeri Dispari\t=  ");
	for(d=0; d<contd; d++){
	printf("%d, ",dispari[d]);
}}

void som_e_medi(double som){
	
	float media=som/10;
	
	printf("\nLa Media\t=  %.3f",media);
}
