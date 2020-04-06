#include <stdio.h>
#include <time.h>

#define cl 20
#define rg 99

void matrice(int x[][cl],int rig,int col,int spaz);
void disegno(int x[][cl],int rig,int col,int spaz);
void disegnoCentrale(int x[][cl],int rig,int col,int spaz);
void disegnoBase(int x[][cl],int rig,int col,int spaz);

int main(){
	srand(time(NULL));
	
	const int rig=rg;
	const int col=cl;
	int x[rig][col];
	int spaz=7;
	
	matrice(x,rig,col,spaz);

return 0;
}


void matrice(int x[][cl],const int rig, const int col,int spaz){
	int i,j;
	int totver[rig];
	int totori[col];
	int somver=0;
	int somori=0;
	char verti=186;
	

	//I Titoli della tabella+totale verticale
	printf("\n");
		disegno(x,rig,col,spaz);
		printf("%c      %c",verti,verti);
	//crea la riga di titoli	
	for(i=0; i<col; i++){
		if(i<9){printf(" Col%d  %c",i+1,verti);}
		else{printf(" Col%d %c",i+1,verti);}
		if(i==col-1){printf("TOTALE %c %c\n",verti,verti);}
		}
	disegnoCentrale(x,rig,col,spaz);
		
	//Genera Numeri
	for(i=0; i<rig; i++){
		if(i<9){printf("%c Rig%d %c",verti,i+1,verti);}
		else{printf("%c Rig%d%c",verti,i+1,verti);}
	for(j=0; j<col; j++){
		
		x[i][j]=rand()%50;
		if(x[i][j]>9){printf("   %d  %c",x[i][j],verti);}
		if(x[i][j]<10){printf("   %d   %c",x[i][j],verti);}
		
		somver=somver+x[i][j];
		
		//stampare i numeri
		if(j==col-1){
			totver[i]=somver;
			if(totver[i]>=100){printf(" %d   %c %c\n",totver[i],verti,verti);}
			if(totver[i]>=10&&totver[i]<=99){printf("  %d   %c %c\n",totver[i],verti,verti);}
			if(totver[i]<10) {printf("   %d   %c %c\n",totver[i],verti,verti);}
			}
	}
	somver=0;
	disegnoCentrale(x,rig,col,spaz);
	}
	
	//Il totale orizontale
	printf("%cTOTAL %c",verti,verti);
	for(i=0; i<col; i++){
	for(j=0; j<rig; j++){
		somori=somori+x[j][i];
		if(j==rig-1){
			totori[i]=somori;
			if(totori[i]>=1000){printf("  %d %c",totori[i],verti);}
			if(totori[i]<=999&&totori[i]>=100){printf(" %d   %c",totori[i],verti);}
			if(totori[i]>=10&&totori[i]<=99){printf("  %d   %c",totori[i],verti);}
			if(totori[i]<10){printf("   %d   %c",totori[i],verti);}
			}
	}
	somori=0;
	}
	printf("       %c %c\n",verti,verti);
	disegnoBase(x,rig,col,spaz);
}



void disegno(int x[][cl],int rig,int col,int spaz){
	char sxangolosu=201;
	char dxangolosu=187;
	char sut=203;
	char verti=186;
	char oriz=205;
	
	int i,j,c;

	for(i=0; i<col+2; i++ ){	
		for(j=0; j<spaz; j++){
			if(i==0&&j==0){printf("%c",sxangolosu);}
			if(j==spaz-1){printf("%c",sut);}
			printf("%c",oriz);
			if(i==col+1&&j==spaz-1){printf("%c",dxangolosu);}
		}
	}
	printf("\n");
}


void disegnoCentrale(int x[][cl],int rig,int col,int spaz){
	char sxverti=204;
	char centt=206;
	char oriz=205;
	int i,j;

	for(i=0; i<col+2; i++ ){	
		for(j=0; j<spaz; j++){
			if(i==0&&j==0){printf("%c",sxverti);}
			if(j==spaz-1){printf("%c",centt);}
			printf("%c",oriz);
			if(i==col+1&&j==spaz-1){printf("%c",centt);}
		}
	}
	printf("\n");
}

void disegnoBase(int x[][cl],int rig,int col,int spaz){
	char sxangologiu=200;
	char dxangologiu=188;
	char giut=202;
	char oriz=205;
	int i,j;

	for(i=0; i<col+2; i++ ){	
		for(j=0; j<spaz; j++){
			if(i==0&&j==0){printf("%c",sxangologiu);}
			if(j==spaz-1){printf("%c",giut);}
			printf("%c",oriz);
			if(i==col+1&&j==spaz-1){printf("%c",dxangologiu);}
		}
	}
	printf("\n");
}
