#include <stdio.h>
#include <math.h>

float rdelta(float x, float y, float z);// dichierare la funziona

int main(){
float a;
float b;
float c;
float x1;
float x2;


printf("\tEQUAZIONE DI SECONDO GRADO\n");
printf("a= ");
scanf("%f",&a);	// ax^2
printf("b= ");
scanf("%f",&b);	// bx
printf("c= ");
scanf("%f",&c);	// c

if(rdelta(a,b,c)!='a'){
//Il primo risultato
x1= (-b+rdelta(a,b,c))/(2*a);
	printf("X1= %f \t",x1);
//la seconda risultato	
x2= (-b-rdelta(a,b,c))/(2*a);
	printf("X2= %f",x2);
}
else{
	printf("\nNon esiste risultato Reale!!!!!!!!!!!\n");
}
return 0;
}


float rdelta(float x, float y, float z){
	float ris;
	float del;
	
	del=((y*y)-(4*x*z)); //trovare la delta
	
	if(del==0||del>0){
		ris=sqrt(del);	//trovare la radice di delta
	}
	else{
		ris='a';
	}
	
	return ris;	
}
