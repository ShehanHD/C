/*!
* \section La prima traccia
* \mainpage La verifica
* \author H.D Shehan
* \date 28/11/2018
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char parola[30];
	char parola2[30];
	int i,j,x,k,numcaratteri;
	int pal=0;
	char maiu=65;
	char minu=97;


/// la richiesta per inserire la stringa	
	printf("Inserisci la parola:");
	scanf("%s",parola);

//////////////////////////////////////	

///per contare quanti caratteri contiene nella stringa
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

/// Trasferire le tutti caratteri Maiuscolo al Caratteri miuscoli 
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

/// Convertire la stringa dal dietro al avanti
for(k=0; k<numcaratteri;){
	//parola2[(numcaratteri-k)-1]=parola[k];
	
	if(parola[k]==parola[(numcaratteri-1)-k]){
		k++;
		pal++;
	}
}

 	/// stampare quanti caratteri contiene la stringa
	printf("\nQuanti caratteri tenere la stringa: %d\n\n",numcaratteri);
	
	/// Stampala stringa Dalla Stringa Originale alla stringa tutto maiuscola
	printf("La stringa in minuscoli: %s\n",parola);
	
	/// per fare il confronto tra le parola originale e parola convertita 
	if(pal==numcaratteri) 
	//if(strcmp(parola,parola2)==0)
		{printf("\nLa parola e una palindroma");}
	else
		{printf("\nLa parola non e una palindroma");}
	
	return 0;
}
