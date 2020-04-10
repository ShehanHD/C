#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define conf1 (x>35&&x<81)			///trovare i numeri tra 35-81
#define conf2 (x>120&&x<145)		///trovare i numeri tra 120-145
#define pri (pari==0)				///confront di numeri pari
#define disp (pari!=0)
int main(){
srand(time(NULL));
	
	int vet[25];
	int i,x,pari;
	int cont=0;
	int contconf1=0;
	int contconf2=0;
	int contpari=0;
	int contdispari=0;
	
printf("Il array di numeri casuali\n");
for(i=0; i<25; i++){
	vet[i]=rand()%200;				///carica vettore
	printf("%d ",vet[i]);			///stampa vettore
	
	x=vet[i];						///variabile x sostituisce dal valore del vettore
	
	pari=vet[i]%2;					///controlla i numeri se pari
	
	if(conf1){
	contconf1++;
	}
	if(conf2){
	contconf2++;
	}
	if(conf1||conf2){
	cont++;
	}
	if((conf1||conf2)&&pri){
	contpari++;
	}
	if((conf1||conf2)&&disp){
	contdispari++;
	}
}	

printf("\n\nQuanti numeri ha tra 35-81              	:%d",contconf1);
printf("\n\nQuanti numeri ha tra 120-145            	:%d",contconf2);
printf("\n\nQuanti numeri ha tra 35-81 o 120-145    	:%d",cont);
printf("\n\nQuanti numeri ha tra 35-81 o 120-145 e pari     :%d",contpari);
printf("\n\nQuanti numeri ha tra 35-81 o 120-145 e dispari  :%d",contdispari);

	return 0;
}
