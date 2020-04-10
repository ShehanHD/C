#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int numero ; // numero inserito
int divisore ; /* divisore del numero.*/
int primo ; /* flag per indicare se il numero inserito
e’ primo */
printf("Inserisci un numero intero positivo:") ;
scanf("%d",&numero) ;
if ( numero < 0 )
printf("hai inserito un numero nullo o negativo\n") ;
else
{
divisore=1 ;
primo = 1 ;
while ( divisore <= numero )
{
if ( numero%divisore == 0 )
{
	printf("%d e’ divisore di %d\n", divisore, numero) ;
	if ( divisore != 1 && divisore != numero )
		primo=0;
}
divisore = divisore + 1 ;
}
}

if ( primo == 1 )
	printf ("%d e’ un numero primo \n",numero);


else
	printf ("\n%d non e’ un numero primo \n",numero);
	
exit(0) ; 
}

