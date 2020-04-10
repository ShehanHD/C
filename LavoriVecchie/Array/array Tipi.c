/*!
* \author MERA
* \version 1.0

*/

#include <stdio.h>
#include <math.h>


int main(){
int s[5]={sizeof(char),sizeof(signed char),sizeof(int),sizeof(short),sizeof(long)};
int us[4]={sizeof(unsigned char),sizeof(unsigned int),sizeof(unsigned short),sizeof(unsigned long)};
char ns[5][15]={"char","signed char","int","short","long"};
char uns[4][15]={"unsigned char","unsigned int","unsigned short","unsigned long"};
int x=0;
int y=0;


for(; x<5; x++){
printf("%s \t\t\t",ns[x]);
printf("%d Bytes \t",s[x]);
s[x]=(s[x]*8)-1;
printf("%.0f \t\t",(pow(2,s[x]))-1);
printf("- %.0f \n",pow(2,s[x]));
}
printf("\n");
for(; y<4; y++){
printf("%s \t\t",uns[y]);
printf("%d Bytes \t",us[y]);
us[y]=(us[y]*8)-1;
printf("%.0f \t\t",(pow(2,us[y]))-1);
printf("0 \n");
}
return 0;
}
