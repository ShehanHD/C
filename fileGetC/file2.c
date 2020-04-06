#include <stdio.h>
#include <stdlib.h>

int main(){
	char add[100];
	FILE * fp;
	
	fp=fopen("prova2.txt","w");
	
	fscanf(fp,"%s",add);
	//fprintf(fp, "%s",add);
	
	fclose(fp);
	return 0;
}
