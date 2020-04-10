#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

int main(){
	const int dim=10;
    char NomeFile[dim];
    //char scelta[3][10]={"w","r","a"};
    int x,z;

    //FILE * fp;

    printf("Scegli cosa devi fare\n1 per Scrivere\n2 per Leggere\n3 per Appendere\n0 per Uscire\n");
	scanf("%d",&x);

	if(x==1)
    scriv(NomeFile,x,dim);
}
