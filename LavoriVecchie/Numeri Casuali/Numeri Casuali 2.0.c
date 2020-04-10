#include <stdio.h>
#include <time.h>

//f(int a[],int dim)         int v[5];  f(v,5)



//int g(int v[5], int dim)



int main(){
	srand(time(NULL));
	
	int num[10];
	int pari[10];
	int dispari[10];
	char paroli[2][11]={"Nu. Pari","Nu. Dispari"};
	int i,j,k,l,spari,sdispari,media;
	float somma=0;
	int x=0;
	int cont=0;
	int countpari=0;
	int countdispari=0;
	
	for(i=0; i<10; i++){
		//genera numeri  casuali
		num[i]=rand()%10;
		//trvare il resto dei numeri
		spari=num[i]%2;
		//stampa i numeri
		printf("| %d |",num[i]);
		//numeri pari
		if(spari == 0){	spari=num[i];
					   	pari[countpari++]=spari;}
		//numeri dispari			   	
		if(spari == 1){sdispari=num[i];
						dispari[countdispari++]=sdispari;}
		//la somma dei numeri				
		somma=somma+num[i];
		//contare i numeri casuali
		cont++;
	}
	
	printf("\n\nAbbiamo %d Numeri Pari e %d Numeri Dispari", countpari, countdispari);
	//stampare i dati
	for(j=0; j<2; j++){
		printf("\n\n%s\t\t:",paroli[j]);
		x++;
	if(x==1){
	for(k=0; k<countpari; k++){
		printf("| %d |",pari[k]);}
  	}
  	if(x==2){
  	for(l=0; l<countdispari; l++){
		printf("| %d |",dispari[l]);}	
	  }
	}
	
	printf("\n\nSomma            \t:%.0f",somma);	
	
	printf("\nMedia            \t:%.3f",(somma/cont));
	
	printf("\nNumeri di Elementi  \t:%d",cont);
	
	
	return 0;
}
