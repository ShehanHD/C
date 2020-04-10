#include <stdio.h>
#include <stdio.h>

int main(){
	int input;
	int i=1;
	int val;
	int conf;
	
	printf("Inserisci il Numero: ");
	scanf("%d",&input);
	
if(input<0){
	printf("Inserisci un Numero positivo!!!!!!");
}

else{
	while(1){
		val=input%i;
			if(val==0){
				printf("%d e divisibile dal %d\n",input,i);
				
			if(i!=1&&i!=input){
			conf=0;
			}
			}
				
	if(i==input){
		break;
	}
	i++;		
	}
	if(conf!=0){
		printf("\n%d e un numero primo\n",input,i);
	}
	if(conf==0){
		printf("\n%d Non e un numero primo\n",input,i);
	}
}
	return 0;
}
