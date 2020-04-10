#include <stdio.h>
#include <stdlib.h>
//#include 'File.h'

int main(){
FILE * fp = fopen("Fprova.txt","w");

int a,b,c,d;
int somma=0;

printf("insrisci 0 a uscire\n");
fprintf(fp, "La Somma\n");
printf("Inserisci Numero: ");
scanf("%d",&a);
fprintf(fp, "%d", a);
printf("Inserisci Numero: ");
scanf("%d",&b);
fprintf(fp, "\t+  %d", b);
somma=a+b;
printf("Somma: %d",somma);
fprintf(fp, "\t=\t%d\n", somma);

while(c!=0){
    printf("\nInserisci Numero: ");
    scanf("%d",&c);
    fprintf(fp,"%d\t+  %d\t=\t",somma,c);
    somma+=c;
    printf("Somma: %d",somma);
    fprintf(fp, "%d\n",somma);
}
fclose(fp);

fp = fopen("Fprova.txt","r");
printf("\n\nLETTURA DAL FILE\n");

while((d=fgetc(fp))!=EOF){
    printf("%c",d);
}

fclose(fp);
return 0;

}
