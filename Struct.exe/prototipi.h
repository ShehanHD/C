
typedef struct{
	char nome[15];
	char cognome[15];
	int eta;
}persona;

void add(persona dip[], int dim);
void stampa(persona dip[], int dim);
void save(persona dip[], int dim);
void read();
