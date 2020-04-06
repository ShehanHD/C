#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE * fp;
	int i,x,ch;
	char add[100];
	
	
	do{
		printf("\nPer Scriver 1\n");
		printf("Per Appendere 2\n");
		printf("Per Leggere 3\n");
		printf("Per Uscire 0\n\n");
		
		printf("Inserisci: ");
		scanf("%d",&x);
		
	if(x==1){
	fp=fopen("prova.txt","w");
	
	while(strcmp(add,"exit")!=0){
	scanf("%s",add);
	fprintf(fp, "%s ",add);
	}
	fclose(fp);
	}
	
	if(x==2){
	fp=fopen("prova.txt","a");
	while(strcmp(add,"exit")!=0){
	scanf("%s",add);
	fprintf(fp, "%s\n", add);
	}
	fclose(fp);
	}
	
	if(x==3){
	fp=fopen("prova.txt","r");
	
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
	}	
	}while(x!=0);
	

	return 0;
}
