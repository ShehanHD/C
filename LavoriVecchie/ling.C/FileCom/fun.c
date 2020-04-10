#include "proto.h"


void scriv(char NomeFile[10], int x, const int dim){
int add;

scanf("%s",NomeFile);
FILE * fp = fopen(NomeFile,"w");

    do{
     scanf("%d",&add);
     fprintf(fp,"%d\n",add);
    }while(add!=0);

fclose(fp);
}
