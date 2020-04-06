#include <stdio.h>
#include <stdlib.h>
#include "prototipi.h"

int main(){
    const int dim = 1;
	persona dip[dim];
    int x, veri;

    do{
    printf("\n\n1 per aggiungere dipendenti\n2 per visualizzare\n3 per leggere dal file\n0 per uscire\nscegli>");
    scanf("%d", &x);

        switch (x){
        case 1:
            add(dip, dim);
            break;
        case 2:
            stampa(dip,dim);
            break;
        case 3:
            read();
            break;
        }

    }while(x != 0);

	printf("\n\nVuoi salvare le dati?(1 per si/ 2 per no)\n>");
	scanf("%d", &veri);
    save(dip, dim);

	return 0;
}
