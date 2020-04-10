#define dim 50

int accesso();                                      ///Il Menu Principale
int login();                                        ///la funziona Login
int registra();                                     ///La Funziona Rgistrazione
int contMail(char mail[],int a);                    ///Controlla il indirizzo mail i segni @ é .
int gesAcc(char x[],int a);
int menu(char nFile[],int a);                       ///li menu secondario di Prodotti
int ellAcc(char nElli[],int a);                    ///Eliminare il Account
void cambPwd();                                     ///cambiare PWD del Account
