#include <stdio.h>

#define len 5
#define paro 20

int main(){
	char parola[paro];
	int cont[5]={0,0,0,0,0};
	char vocali[len]={'A','E','I','O','U'};
	char vocalimin[len]={'a','e','i','o','u'};
	int i,j;


	//inserimento parola
	printf("Inserisci la parola(Max 20 caratteri): ");
	scanf("%s",parola);
	
	//i controlli
	for(i=0; i<paro; i++){
		for(j=0; j<len; j++){
		if(parola[i]==vocali[j]||parola[i]==vocalimin[j]){
			cont[j]+=1;
		}
		}
	}
	
	//stampa i valori
	for(j=0 ; j<5; j++){
	printf("\n\t\t%c / %c = %d\n",vocali[j],vocalimin[j],cont[j]);
	}
	
	return 0;
}




