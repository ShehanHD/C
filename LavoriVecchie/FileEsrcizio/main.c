#include <stdio.h>
#include <stdlib.h>

int main()
{
int c,a,i,j,cont,scelta;

FILE * fp = fopen("esrcizio.txt","a");
FILE * fp2= fopen("esrcizio2.txt","w");
i=0;
///Appendere
do{
     scanf("%d", &c);
     fprintf(fp,"\n%d", c);
     i++;
     printf("scegli 0 per uscire");
     scanf("%d",&scelta);
}while(scelta!=0);
fprintf(fp2,"%d",0);
fclose(fp2);
fclose(fp);
/////////////////////////////////////////

fp2= fopen("esrcizio2.txt","r");
fscanf(fp2,"%d",&a);
printf("%d",a);
fclose(fp2);
/////////////////////////////////////////
fp = fopen("esrcizio.txt","r");
fp2= fopen("esrcizio2.txt","w");

fprintf(fp2,"%d",cont);

while(!feof(fp)){
    fscanf(fp,"%d",&j);
    fprintf(fp2,"\n%d",j);
}

fclose(fp2);
fclose(fp);
return 0;
}
