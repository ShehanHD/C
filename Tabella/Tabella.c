#include <stdio.h>
#include <time.h>

int main(){
	srand(time(NULL));
	char verti=186;
	char hori=205;
	int i,j;
	int lungezza=7;
	const int x1=4;
	const int x2=8;
	int x[x1][x2];
	int somma=0;
	int somma2=0;
	int sommarig[x1];
	int sommacol[x2];
	
		
	for(i=0; i<x1; i++){
	for(j=0; j<x2; j++){
		x[i][j]=rand()%10;
	}
}
	
		printf("\n\n\t%c",201);
						for(i=0; i<lungezza*x2+(lungezza*2); i++){
							printf("%c",hori);
						}
		printf("%c",187);
		printf("\n\t%c",verti);
		
						for(i=0; i<x2; i++){
						printf(" num %d %c",i,verti);}
							printf("TOTALE%c\n\t%c",verti,204);	
							
						for(i=0; i<lungezza*x2+(lungezza*2); i++){
							printf("%c",hori);
						}
		printf("%c\n",185);
						for(i=0; i<x1; i++){
						for(j=0; j<x2; j++){
							x[i][j]=rand()%10;
							printf("\t%c  %d  %c",verti,x[i][j],verti);	
							somma=somma+x[i][j];
							sommarig[i]=somma;
							
							somma2=somma2+x[j][i];
							sommacol[i]=somma2;
						}
						somma=0;
						somma2=0;
						printf(" %c  %d  %c\n",verti,sommarig[i],verti);
						}
	
		printf("\t%c",204);
		
						for(i=0; i<lungezza*x2+(lungezza*2); i++){
							printf("%c",hori);
						}
		printf("%c",185);
	
		printf("\n\t%c",verti);
		
						for(i=0; i<x2; i++){
							printf("  %d  %c ",sommacol[i],verti);
						}
	
	printf("      %c\n\t%c",verti,200);
	
						for(i=0; i<lungezza*x2+(lungezza*2); i++){
							printf("%c",hori);
						}
	printf("%c",188);
	
	return 0;
}
