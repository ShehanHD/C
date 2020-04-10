/*!
* \author ShehanHD
* \date 20/11/2018
* \warning Manca la Scelta
* \mainpage Caricamenti Stringa e Ordinamenti
*
* \section intro_sec Introduction
* Puo aggiungere le dati manuale e ritirare informazioni ordinati!!
*/

#include <stdio.h>
#include <stdlib.h>
#include "prototipi.h"

/*!
* \brief Questo funzioa fa mostrare le dati
*/

int main()
{
    const int dim=3;    /*!<il varibile che indica quante dati di persone possiamo entrare*/
    persona dip[dim];   //! persona dip[dim]; la array di dati


///carica Struct
    carica(dip,dim);
    stampa(dip,dim);

printf("Scegli la Ordinamento Su:");
printf("\n\tNome\n");

///Ordina su Nome
    printf("\n\nOrdina su Nome\n");
    ordNome(dip,dim);
    stampa(dip,dim);
///Ordina su Cognome
    printf("\n\nOrdina su Cognome\n");
    ordCognome(dip,dim);
    stampa(dip,dim);
///Ordina su Eta
    printf("\n\nOrdina su Eta\n");
    ordEta(dip,dim);
    stampa(dip,dim);
    return 0;
}
