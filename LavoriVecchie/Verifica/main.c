/*!
* \section La prima traccia
* \mainpage La verifica
* \author H.D Shehan
* \date 28/11/2018
*/


#include <stdio.h>
#include <stdlib.h>

#define x 7

void controllo(int v1[], int v2[], int dim);
int conta(int v1[], int v2[], int dim);
/*!
* \brief Caricamenti dei vettori
* \brief la chiamata di funziona
*/
int main()
{
    int v1[x]={3,4,5,6,7,8,3};
    int v2[x]={3,3,5,4,6,7,6};

    printf("Totale valori trovati sono %d\n\n",conta(v1,v2,x));
    controllo(v1,v2,x);
    return 0;
}

/*!
* \brief La funziona che fa contare quanti valori che troviamo
* \param v1[] la prima vettore
* \param v2[] la seconda vettore
* \param dim la dimenzione di vettori
*/
int conta(int v1[], int v2[], int dim){
 int i,j;
 int cont=0;

 /*!
 * for(i=0; i<dim; i++)
 * \li incrementa la posizione di v1
 */
 for(i=0; i<dim; i++){
    /*!
    * for(j=0; j<dim; j++)
    * \li incrementa la posizione di v2
    */
    for(j=0; j<dim; j++){
        /*!
        * if(v1[i]==v2[j])
        * \li Fa il controllo tra v1 e v2
        * \li scopo e' per trovare numeri comuni solo una volta
        */
        if(v1[i]==v2[j]){
            cont++;                                 ///cont++ conta quanti valori che abbiamo trovati
            j=dim;                                  ///j=dim per uscire dal seconda for appena trovato un numero comune con v2
        }
    }
 }
return cont;
}

/*!
* \brief La funziona che fa controllo e stampa
* \param v1[] la prima vettore
* \param v2[] la seconda vettore
* \param dim la dimenzione di vettori
*/
void controllo(int v1[], int v2[], int dim){

 int i,j;
 int cont=0;
 /*!
 * for(i=0; i<dim; i++)
 * \li incrementa la posizione di v1
 */
 for(i=0; i<dim; i++){
    /*!
    * for(j=0; j<dim; j++)
    * \li incrementa la posizione di v2
    */
    for(j=0; j<dim; j++){
        /*!
        * if(v1[i]==v2[j])
        * \li Fa il controllo tra v1 e v2
        * \li scopo e' per trovare numeri comuni solo una volta
        */
        if(v1[i]==v2[j]){
            cont++;
            printf("Valore%d : %d",cont,v1[i]);
            printf("\tPosizione in v1 : %d",i);
            printf("\tPosizione in v2 : %d\n",j);
            j=dim;                                  ///j=dim per uscire dal seconda for appena trovato un numero comune con v2
        }
    }
 }
}
