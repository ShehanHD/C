#include <stdio.h>
#include <stdlib.h>

int main(){
	char parola[30];
	int i,j,x,numcaratteri;
	char maiu=65;
	char minu=97;
	
	printf("Inserisci la parola:");
	scanf("%s",parola);

//////////////////////////////////////	
i=0;
numcaratteri=0;

while(1){
    if(parola[i]!='\0'){
        numcaratteri++;
    }
    if(parola[i]=='\0'){
        break;
    }
i++;
 }
////////////////////////////////////// 
x=0;
while(1){
	for(j=0; j<26; j++){
		if(parola[x]==maiu+j){
			parola[x]=minu+j;
		}}
		
		if(x==numcaratteri)
			{break;}	
	
x++;
}
 
 
	printf("\nQuanti caratteri tenere la stringa: %d\n\n",numcaratteri);
	printf("La stringa in minuscoli: %s",parola);
	
	return 0;
}
