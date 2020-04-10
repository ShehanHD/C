/**

* /date 12/12/2018




*/


#include <stdio.h>
#include <string.h>

#define dim 10
#define ele 5

int main(){
	//char s1[10]="a";
	//char s2[10]="b";
	
	char s3[ele][dim]={"milano","bergamo","roma","sicilia","pisa"};
	char st[10];
	int i,j,k;
	int sort;

	
	while(1){
		sort=0;
		for(i=0; i<ele-1; i++){
			if(strcmp(s3[i],s3[i+1])>0){
				
				strcpy(st,s3[i]);
				strcpy(s3[i],s3[i+1]);
				strcpy(s3[i+1],st);
				sort=1;
			}}
			
			if(sort==0){
				break;
			}
		
	}
	
	for(k=0; k<ele; k++){
		printf("%s\n",s3[k]);
	}
	 return 0;
}
