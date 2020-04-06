#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define dim 10

typedef struct {
	int num;
	char * prod;
	float prez;
	float quan;
}add;


int main(){
    int id,s,scelta,j,h;
    char prodotto[20];
    float prezzo,quantita,q,y;
    int i=0;
    int vId[dim];
    char vProd[dim][20];
    float vPrez[dim];
    float vQuan[dim];
    add carello[5];

    FILE * fp = fopen("DataBase.txt","r");

    for(j=0; j<dim; j++){
        vId[j]=-1;
        strcpy(vProd[j],"-1");
        vPrez[j]=-1;
        vQuan[j]=-1;
    }

    //system("dir");
    printf("id\tprodotto\tprezzo\t\tquantita\n");
    while(!feof(fp)){
        fscanf(fp,"%d %s %f %f",&id,prodotto,&prezzo,&quantita);

        vId[i]=id;
        strcpy(vProd[i],prodotto);
        vPrez[i]=prezzo;
        vQuan[i]=quantita;

        printf("%d\t%s\t\t%.2f\t\t%.3fKg\n",id,prodotto,prezzo,quantita);
    i++;
    }
    fclose(fp);
h=0;
 do{
    printf("\n\nScegli Il Prodotto:");
    scanf("%d",&scelta);
    printf("\n\nScegli La Quantita:");
    scanf("%f",&q);
    y=vQuan[scelta-1]-q;
    vQuan[scelta-1]=y;
    printf("%s\t",vProd[scelta-1]);
    printf("\n\n%f\n\n",vQuan[scelta-1]);
    
/*    
    carello[h].num=vId[scelta-1];
    strcpy(carello[h].prod,vProd[scelta-1]);
    carello[h].prez=vPrez[scelta-1];
    carello[h].quan=vQuan[scelta-1];
*/
    printf("per uscire:0 continuare:1");
    scanf("%d",&s);
h++;
 }while(s!=0);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                ///cancellazione scelta

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for(j=0; j<dim; j++){
        if(vId[j]!=-1&&strcmp(vProd[j],"-1")&&vPrez[j]!=-1&&vQuan[j]!=-1){
        printf("%d\t",vId[j]);
        printf("%s\t",vProd[j]);
        printf("%f\t",vPrez[j]);
        printf("%f\t\n",vQuan[j]);
    
	}
	}

    return 0;
}
