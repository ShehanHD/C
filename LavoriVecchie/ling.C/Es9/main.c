#include <stdio.h>
#include <stdlib.h>

int main(){

    char nomeF[20];
    int x,dicif,spo,car,c,z;


    printf("Nome di file che vuole prlevare dati dal(Es9): ");
    scanf("%s",nomeF);

    printf("Quanto devi essere spostamento :");
    scanf("%d",&spo);

    FILE * fp =fopen(nomeF,"r");
    FILE * fp2=fopen("cifri","w");

    while((c=fgetc(fp))!=EOF){

    if((c>=65&&c<=90)){
    car=c+spo;
    z=car;

    if(z>=91){
        car=65+(z-91);
    }
    z=0;
    }
    if(c>=97&&c<=122){
    car=c+spo;
    z=car;

    if(z>=123){
        car=97+(z-123);
    }
    z=0;
    }
    else{car=c;}
    fprintf(fp2,"%d ",car);
    //car=0;
    }

    fclose(fp);
    fclose(fp2);


printf("File gia cifrato!!!!!!!!!\n\n");
/////////////////////////////////////////////////////////////////////
do{
    printf("per vedere Dicifrato ==> 1\nPer vedere Cifrato ==> 2\nPer Uscire ==> 0\n\nInserisci : ");
    scanf("%d",&x);

if(x==1){
    FILE * fp2=fopen("cifri","r");

    while(!feof(fp2)){

    fscanf(fp2,"%d",&dicif);
    printf("%c",dicif);
    }

    fclose(fp2);
    }

if(x==2){
    FILE * fp2=fopen("cifri","r");

    while(!feof(fp2)){

    fscanf(fp2,"%d",&c);

    if((c>=65&&c<=90)){
    car=c-spo;
    z=car;

    if(z<=64){
        car=90-(64-z);
    }
    z=0;
    }
    if(c>=97&&c<=122){
    car=c-spo;
    z=car;

    if(z<=96){
        car=122-(96-z);
    }
    z=0;
    }
    else{car=c;}
    printf("%c",car);

    }


    fclose(fp2);
    }}
while(x!=0);
    return 0;
}
