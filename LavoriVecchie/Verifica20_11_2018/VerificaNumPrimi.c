/*!
* \section La prima traccia
* \mainpage La verifica
* \author H.D Shehan
* \date 28/11/2018
*/



#include <stdio.h>
#include <stdio.h>

int main(){
	int input;
	int i=1;
	int val;
	int conf;

///la richesta di inserire il numero	
	printf("Inserisci il Numero: ");
	scanf("%d",&input);
/*! il controllo di numero
* se numero inserito e numero negativo da un errore!!!!
* se numero e un numero negativo fa resto
*/ 	
if(input<0){
	printf("Inserisci un Numero positivo!!!!!!");
}
else{
	
	/*!
	* controlla il numero divisibile dal dal 1 al numero inserito
	*
	* se divisibile dal un altra valore tranne 1 e il num stesso da 1 al conf. (conf=1)
	*/
	while(1){
		val=input%i;
			if(val==0){
				printf("%d e divisibile dal %d\n",input,i);
				
			if(i!=1&&i!=input){
			conf=0;
			}
			}
	/// quando i arriva al valore che inserito esce dal while			
	if(i==input){
		break;
	}
	i++;		
	}
	
	/// stampa il risultato
	if(conf!=0){
		printf("\n%d e un numero primo\n",input,i);
	}
	if(conf==0){
		printf("\n%d Non e un numero primo\n",input,i);
	}
}
	return 0;
}
