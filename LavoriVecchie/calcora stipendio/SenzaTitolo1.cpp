#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	
char nome[10][5];
int numlavo;
int ore[10];
int eu_alora=8;

printf("Numero di Lavoratori: ");
scanf("%d",&numlavo);

for(int i=0; i<numlavo; i++){
printf("Nome:");
scanf("%s",&nome[i]);
printf("Numero di ore: ");
scanf("%d",&ore[i]);
}

for(int c=0; c<numlavo; c++){
	printf("%s \t\t eu. %d \n",nome[c],ore[c]*eu_alora);
	
}

return 0;	
}
