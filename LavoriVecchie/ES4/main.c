#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    int v[26];
    int x,y,i,j,cont;
    int MAI=65;
    int min=97;

FILE * fp= fopen("Es4","r");

for(j=0; j<26; j++)
    v[j]=0;

while(!feof(fp)){
fscanf(fp,"%s",c);
printf("%s\n",c);


if(!feof(fp)){
x=c[0];

for(i=0; i<26; i++){
    if(x==MAI+i||x==min+i){
        cont=v[i];
        v[i]=cont+1;
     }
}
    
    }
}

fclose(fp);

for(i=0; i<26; i++)
printf("Num di Paroli inizia con %c/%c = %d\n",MAI+i,min+i,v[i]);

return 0;
}
