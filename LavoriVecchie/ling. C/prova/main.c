#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define html fprintf(fp,"<html>");
#define chtml fprintf(fp,"\n</html>");
#define body fprintf(fp,"\n<body>");
#define cbody fprintf(fp,"\n</body>");
#define table fprintf(fp,"\n<table>");
#define ctable fprintf(fp,"\n</table>");
#define tr fprintf(fp,"\n<tr>");
#define ctr fprintf(fp,"</tr>\n");
#define td fprintf(fp,"\n<td>");
#define ctd fprintf(fp,"</td>\n");
#define style fprintf(fp,"<style>\ntd,tabella{border:2px solid black;\nheight:50px;\nwidth:150px;}</style>");

int main()
{
	srand(time(NULL));
    time_t tem;
    char* timestr;
    int i,j;

    tem=time(NULL);

    timestr=ctime(&tem);

    FILE * fp = fopen("prova.html","w");

    html										///apertura html

    body										///apertura body

    style										///apertura style

    table										///apertura table

    for(i=0; i<5; i++){
    tr											///apertura riga
		for(j=0; j<5; j++){
    td 											///apertura cella
	fprintf(fp,"%d",rand()%10);
	ctd											///chiusura cella
		}
	ctr											///chiusura riga
	}

	ctable										///chiusura table

    cbody										///chiusura body

    chtml										///chiusura tab html

    fclose(fp);

    system("prova.html");
    return 0;
}
