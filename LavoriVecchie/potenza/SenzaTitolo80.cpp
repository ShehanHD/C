#include <stdio.h>>

int main(){
	
	float x;
	float y;
	float tot=1;
	
	printf("base");
	scanf("%f",&x);
	
	printf("esponente");
	scanf("%f",&y);
	
	for(int a=0; a < y; a++){
		
		tot=tot * x;
		
	}
	
	printf("risulatato= %f",tot);
	return 0;
	
	
	
}
