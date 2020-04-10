 #include <stdio.h>;
 #include <stdlib.h>
 #include <ctype.h>
 #include <string.h>;

 int main(void) {

 const int MAXDIM = 30 ; /* dimensione massima stringa di caratteri */
 char parola[MAXDIM+1] ; /* stringa di caratteri inserita */
 int numcaratteri ; /* numero di caratteri della stringa inserita */
 int palindroma ; /* flag per la ricerca */
 int i, j ; /* indici dei cicli */
 char mau=41;
 /* LEGGI LA STRINGA DI CARATTERI INSERITA DA TASTIERA */
 printf("Inserisci una parola di al massimo %d caratteri: ", MAXDIM) ;
 scanf("%s", parola) ;
 /* VISUALIZZA LA STRINGA DI CARATTERI INSERITA */
 printf("La parola inserita e’: %s \n", parola) ;
 /* LEGGI IL NUMERO DI CARATTERI DELLA STRINGA */

 i=0;
 numcaratteri=0;

 while(1){
    if(parola[i]!="\0"){
        numcaratteri++;
    }
    if(parola[i]=="\0"){
        break;
    }
i++;
 }

 printf("La parola contiene %d caratteri\n", numcaratteri) ;
/* CONVERTI TUTTI I CARATTERI DELLA STRINGA IN CARATTERI MINUSCOLI */
/*
j=0;
while(1){
for(i=0; i<26; i++){
    for(j=0; j<)

}


}

*/

 /* VISUALIZZA LA STRINGA DI CARATTERI DOPO LA CONVERSIONE */
 printf("La parola inserita scritta solo con caratteri in minuscolo e’: %s\n",parola);
 /* VERIFICA SE LA STRINGA &quot;parola&quot; E’ PALINDROMA */
 /* INIZIALIZZA IL FLAG &quot;palindroma&quot;. IL FLAG ASSUME I VALORI
 -- &quot;palindroma&quot; E’ UGUALE A 1 SE &quot;parola&quot; E’ PALINDROMA
 -- &quot;palindroma&quot; E’ UGUALE A 0 SE &quot;parola&quot; NON E’ PALINDROMA
 */
 palindroma = 1 ;
 /* IL CICLO SCANDISCE LA STRINGA DI CARATTERI &quot;parola&quot; E VERIFICA
 SE E’ PALINDROMA. L’INDICE &quot;i&quot; SCORRE LA PRIMA META’ DI &quot;parola&quot;. L’INDICE
 &quot;j&quot; SCORRE LA SECONDA META’ DI &quot;parola&quot; PARTENDO DALL’ULTIMO
CARATTERE.
 LA RICERCA TERMINA QUANDO SI VERIFICA CHE LA STRINGA &quot;parola&quot;
 NON E’ PALINDROMA O QUANDO SONO STATI CONSIDERATI TUTTI I CARATTERI
 DI &quot;parola&quot; */
 return 0;
 }
