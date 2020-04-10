#include <stdio.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int num[10];
	int i,j,k,l,pari,dispari,media;
	float somma=0;
	int x=0;
	int cont=0;
	int countpari=0;
	int countdispari=0;
	
	//genera numeri  casuali
	for(i=0; i<10; i++){
		num[i]=rand()%10;
		printf("| %d |",num[i]);
		cont++;
	}
		
	//numeri pari
	printf("\n\nNumeri pari      \t:");
	for(j=0; j<10; j++){
	pari=num[j]%2;
		if(pari == 0){
		printf("%d, ",num[j]);	
		}
	}
	
	//numeri pari
	printf("\nNumeri Dispari   \t:");
	for(k=0; k<10; k++){
	pari=num[k]%2;
	if(pari == 1){
	printf("%d,",num[k]);}
	}
	
	//la somma
	for(l=0; l<10; l++){
		somma=somma+num[l];
	}
	
	printf("\n\nSomma            \t:%.0f",somma);	
	
	printf("\nMedia            \t:%.3f",(somma/cont));
	
	printf("\nNumeri di Elementi  \t:%d",cont);
	
	
	return 0;
}
