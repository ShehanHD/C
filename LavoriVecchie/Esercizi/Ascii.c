#include <stdio.h>


int main(){
	int i,con;
	
	printf("\t\tTabella ASCII\n");
	printf("\nHex, Dec\t| Carattere\n");
	
	for(i=0; i<256; i++){
		printf("%x, %d\t\t|%c\t\n",i,i,i);
		
		/*con=i%3;
		if(con==0){
			printf("\n");
		}*/
	}
	
	return 0;
}
