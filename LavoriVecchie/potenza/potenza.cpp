#include <stdio.h>

int main(){
	float b; 
	float e;
	float ris;
	espo(a,b);
	
	printf("Base: ");
	scanf("%f",&b);
	
	printf("Esponente: ");
	scanf("%f",&e);
	
	ris=espo(b,e);
	
	printf("%f",ris);
	
}

float espo(x,y){
	float x;
	float y;
	float tot=1;
	
	for(int i=0; i<y; i++){
	tot=tot*x;	
	}
	printf("%.3f",tot);	
	
	return 0;
}
