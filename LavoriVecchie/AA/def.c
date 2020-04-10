#include "prot.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char uNamel[dim];                                   ///Una sringa temporanea per la funziona Login: quando ripartela funziona non perde dato
int contl=0;                                        ///un contatore usa per la Funziona Login: quando ripartela funziona non perde dato

int accesso(){
int x;

///la scelta
printf("\t\tBENVENUTI!\n\n1 per Login\t2 per Registrare\t0 per Uscire\n\nScegli:");
scanf("%d",&x);

///controlla che la scelta valida o no
if(x<0||x>2){
    system("cls");
    printf("Inserimento sbaliatao!\n\n");
    accesso();
}

if(x==1){
    system("cls");
    login();                                        ///va la pagina login
}
if(x==2){
    system("cls");
    registra();                                     ///va la pagina registrazione
}
if(x==0){
    printf("\n\n\t\tARRIVIDERCI!");
    return 0;                                       ///chiusa la programma
}

return 0;
}

int login(){
    char cognome[dim];
    char email[dim];
    char uName[dim];
    char pwd[dim];
    char fName[dim];
    char fpwd[dim];
    time_t tem;
    char* timestr;
    int x,y;

    tem=time(NULL);

    timestr=ctime(&tem);

FILE * fp = fopen("registrati","r");
FILE * fp2= fopen("log","a");                           ///file log

printf("\t\tLOGIN\n\n");

if(fp){

///parte solo la prima volta di funziona
if(contl==0){
    printf("Username\t:");
    scanf("%s",uName);}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


///parte dal seconda volta per ancora unavolta
    if(contl>0){
        printf("password errato per %d volte\n\n",contl);
        printf("Username\t:%s\n",uNamel);
        strcpy(uName,uNamel);									///resostituisce la stringa username sulla variabile usata(vera)
    }
    strcpy(uNamel,uName);										///sposta la stringa username a una variabile temmporanea
    printf("Password\t:");
    scanf("%s",pwd);

    while(!feof(fp)){
            fscanf(fp,"%s %s %s %s",fName,cognome,email,fpwd);  ///preleva dati dal File registrati

    if(strcmp(uName,email)==0&&strcmp(pwd,fpwd)==0){            ///controlla che username e pwd inserito corrisponde a username e pwd dal file dei registati
        system("cls");
        printf("\t\tADESSO HAI ACCESSO!!!\n\n");
        fprintf(fp2,"%s_%s\t%s",fName,cognome,timestr);
        menu(fName,dim);                                        ///se passato il controllo entra al funziona main
        accesso();                                              ///quando fa Logout dal menu() torna al accesso()
        return 0;                                               ///quando esci dal accesso() chiude la proggramma
    }
    }
    printf("Sei non ancora Registrato o Password/Username e Errato!\n\nPer fare Registrazione 1\nPer Riprovare il LOGIN 2\nScegli:");
    scanf("%d",&x);


    ///controlla che la scelta valida o no
    if(x<1||x>2){
    system("cls");
    printf("Inserimento sbaliatao!\n\n");
    login();                                                    ///se scelta sbagliata reparte login()
}

    if(x==1){
        system("cls");
        contl=0;
        registra();}
    if(x==2){
        system("cls");
        contl++;

        if(contl<2){
            login();
            return 0;}

            if(contl==2){                                                                   ///se inserisci pwd 2 volte sbagliato
            do{
			printf("Hai Dimenticato il Password?\n1 per Si\t2 per No\nInserisci:");         ///chiede se dimenticato pwd
            scanf("%d",&y);
            ///il controllo su scelta
            if(y<1||y>2){
			    system("cls");
			    printf("Inserimento sbaliatao!\n\n");
			}
            if(y==1){                                                                       ///se si va a cambiare pwd
                cambPwd();
                system("cls");
                printf("\tHai cambiato il tuo Password\n");
                contl=0;
                accesso();                                                                    ///poi torna al main
                return 0;                                                                   ///quando esci dal main conclude la prog.
            }
            if(y==2){
                system("cls");
                contl=0;
                accesso();
                return 0;                                                                   ///se non ha dimenticata ripeti login()
            }
            }while(y!=1||y!=2);
            }
    }
            }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
fclose(fp);
fclose(fp2);

return 0;
    }


int registra(){
    char nome[dim];
    char cognome[dim];
    char email[dim];
    char pwd[dim];
    char Cpwd[dim];
    char createFolder[dim];
    int x,y;

    FILE * fp = fopen("registrati","a");
printf("\n\t\tREGISTRAZIONE\n\n");

///inserimento dati per il registrazione
    printf("Nome\t\t\t:");
    scanf("%s",nome);
    printf("Cognome\t\t\t:");
    scanf("%s",cognome);

    do{
    printf("Username(e-mail)\t:");
    scanf("%s",email);

///fa il controllo sulla e mail @ e punto
x=contMail(email,dim);

    if(x==0){
        printf("Indirizzo mail che hai inserito non valido!\n\nse vuoi riprovare 2\nse vuoi uscire 1\nInserisci:");
        scanf("%d",&y);

        if(y==1){
            accesso();
            return 0;
        }
    }
    }while(x!=1);

    do{
    printf("Password\t\t:");
    scanf("%s",pwd);
    printf("Repeti Password\t\t:");
    scanf("%s",Cpwd);
///controlla i pwd sono uduali o no
    if(strcmp(pwd,Cpwd)==0){
       fprintf(fp,"%s %s %s %s\n",nome,cognome,email,pwd);
       x=1;
    }
///Se i pwd non sono uguali da la una scelta uscire o riprovare
    else{
        printf("I password non sono uguali!");
        printf("Vuoi Uscire? inserisci 1\nVuoi Riprovare? Inserisci 2");
        scanf("%d",&x);
    }
    }while(x!=1);
fclose(fp);

strcpy(createFolder,"mkdir ");
strcat(createFolder,nome);

//printf("%s",strcat("mkdir ",nome));
system(createFolder);
login();
return 0;
}

int contMail(char mail[],int a){
    int i,j;
    int lungezza=0;

    lungezza=strlen(mail);

    for(i=0; i<lungezza; i++){

        if(mail[i]=='@'){
        	j=1;
        }
        if(j==1){
        	if(mail[i]=='.'){
                return 1;
            }
		}
        }

return 0;
}

int menu(char nFile[],int a){
int x;
float prezzo;
float somma=0;
int cont=0;
char prodotto[dim];
char path[100];

///spostare il file dentro la cartella di utente
strcpy(path,nFile);
strcat(path,"\\");
strcat(path,nFile);

FILE * fp;

do{
printf("\n\n1 per Visualizza Dati\n");
printf("2 per Inserisce Dati\n");
printf("3 per La somma\n");
printf("4 per Gestione Account\n");
printf("5 per Pulire SHELL\n");
printf("0 per Logout\n\nScegli Opzione:");
scanf("%d",&x);

system("cls");

///controlla che la scelta valida o no
if(x<0||x>5){
    system("cls");
    printf("Inserimento sbaliatao!");
    menu(nFile,dim);
}

if(x==1){
fp = fopen(path,"r");
    if(!fp){
        printf("Il file non esiste!\n\n");
    }
else
{//printf("%s",path);
printf("Prodotto\tPrezzo\n");
  while(!feof(fp)){
    fscanf(fp,"%s %f\n",prodotto,&prezzo);
     //if(!feof(fp))
    printf("%s\t\t%.2f\n",prodotto,prezzo);
  }
}
fclose(fp);
}

if(x==2){
    fp = fopen(path,"a");

    printf("Prodotto\t:");
    scanf("%s",prodotto);
    printf("Prezzo\t\t:");
    scanf("%f",&prezzo);
    fprintf(fp,"%s %.2f\n",prodotto,prezzo);
    fclose(fp);
}

if(x==3){
   fp = fopen(path,"r");
    if(!fp){
        printf("Il file non esiste!\n\n");
    }
else
{
  while(!feof(fp)){
    fscanf(fp,"%s %f",prodotto,&prezzo);
    if(!feof(fp)){
    somma+=prezzo;
    cont++;}
}
fclose(fp);
}
printf("La somma dei %d Prodotti: %.2f\n\n",cont,somma);
cont=0;
somma=0;
}

if(x==4){
    gesAcc(nFile,dim);
    return 0;
}

if(x==5){
    system("cls");
}
}while(x!=0);

return 0;
}

int gesAcc(char x[],int a){
    int y,scelta;

    printf("1 per Cambiare PASSWORD\n2 per ELIMINARE ACCOUNT\nScegli:");
    scanf("%d",&scelta);

    if(scelta<0||scelta>5){
    system("cls");
    printf("Inserimento sbaliatao!");
    gesAcc(x,dim);
}

    if(scelta==1){
        cambPwd();
        return 0;
    }

    if(scelta==2){
    printf("Sei sicuro che vuoi ELIMINARE account?\n1 per Si\t2 per No");
    scanf("%d",&y);

    if(y==1){
        ellAcc(x,dim);
        return 0;
    }

    if(y==2){
        menu(x,dim);
        return 0;
    }
    }


return 0;
}



int ellAcc(char nElli[],int a){
char cognome[dim];
char email[dim];
char fName[dim];
char fpwd[dim];
char eli[dim];

FILE * fp;
FILE * fp2;

fp = fopen("registrati","r");
fp2 =fopen("regElli","w");

while(!feof(fp)){
        fscanf(fp,"%s %s %s %s",fName,cognome,email,fpwd);
        if(!feof(fp)){
            if(strcmp(nElli,fName)!=0){
                fprintf(fp2,"%s %s %s %s\n",fName,cognome,email,fpwd);
            }
        strcpy(eli,"rmdir /s ");
        strcat(eli,nElli);
        system(eli);}
}
fclose(fp2);
fclose(fp);

fp2 =fopen("regElli","r");
fp =fopen("registrati","w");


while(!feof(fp2)){
        fscanf(fp2,"%s %s %s %s",fName,cognome,email,fpwd);

        if(!feof(fp2))
                fprintf(fp,"%s %s %s %s\n",fName,cognome,email,fpwd);
}

fclose(fp);
fclose(fp2);

return 0;
}

void cambPwd(){
char cognome[dim];
char email[dim];
char fName[dim];
char fpwd[dim];
char ricEmail[dim];
char pwd[dim];
char Cpwd[dim];
int x;

FILE * fp;
FILE * fp2;

fp = fopen("registrati","r");
fp2 =fopen("cmbPwd","w");

printf("Il Username di Account:");
scanf("%s",ricEmail);

while(!feof(fp)){
        fscanf(fp,"%s %s %s %s",fName,cognome,email,fpwd);

        if(!feof(fp)){
            if(strcmp(ricEmail,email)==0){

                do{
                    printf("Password\t:");
                    scanf("%s",pwd);
                    printf("Repeti Password\t:");
                    scanf("%s",Cpwd);
                ///controlla i pwd sono uduali o no
                    if(strcmp(pwd,Cpwd)==0){
                       fprintf(fp2,"%s %s %s %s\n",fName,cognome,email,pwd);
                       x=1;
                    }
                ///Se i pwd non sono uguali da la una scelta uscire o riprovare
                    else{
                        printf("I password non sono uguali!");
                        printf("Vuoi Uscire? inserisci 1\nVuoi Riprovare? Inserisci 2");
                        scanf("%d",&x);
                    }
                    }while(x!=1);

            }
        else{
            fprintf(fp2,"%s %s %s %s\n",fName,cognome,email,fpwd);
            }
        }
}
fclose(fp2);
fclose(fp);

fp2 =fopen("cmbPwd","r");
fp =fopen("registrati","w");


while(!feof(fp2)){
        fscanf(fp2,"%s %s %s %s",fName,cognome,email,fpwd);

        if(!feof(fp2))
                fprintf(fp,"%s %s %s %s\n",fName,cognome,email,fpwd);
}

fclose(fp);
fclose(fp2);

}
