#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
int c=sizeof(char);
int uc=sizeof(unsigned char);
int sc=sizeof(signed char);
int in=sizeof(int);
int uin=sizeof(unsigned int);
int shrt=sizeof(short);
int ushrt=sizeof(unsigned short);
int lng=sizeof(long);
int ulng=sizeof(unsigned long);

//menu
printf("Tipo \t\t\t");
printf("Size(Bytes) \t");
printf("Massimo Posi. \t\t");
printf("Minimo Nega. \t\n\n");
//char
printf("char \t\t\t");
printf("%d Bytes \t",c);
c=(c*8)-1;
printf("%.0f \t\t\t",(pow(2,c))-1);
printf("- %.0f \n",pow(2,c));
//signed char
printf("signed char \t\t");
printf("%d Bytes \t",sc);
sc=(sc*8)-1;
printf("%.0f \t\t\t",(pow(2,sc))-1);
printf("- %.0f \n",pow(2,sc));
//unsigned char
printf("unsigned char \t\t");
printf("%d Bytes \t",uc);
uc=(uc*8);
printf("%.0f \t\t\t",(pow(2,uc))-1);
printf("0 \n\n");
//int
printf("int \t\t\t");
printf("%d Bytes \t",in);
in=(in*8)-1;
printf("%.0f \t\t",(pow(2,in))-1);
printf("- %.0f \n",pow(2,in));
//unsigned int
printf("unsigned int \t\t");
printf("%d Bytes \t",uin);
uin=(uin*8);
printf("%.0f \t\t",(pow(2,uin))-1);
printf("0 \n\n");
//short
printf("short \t\t\t");
printf("%d Bytes \t",shrt);
shrt=(shrt*8)-1;
printf("%.0f \t\t\t",(pow(2,shrt))-1);
printf("- %.0f \n",pow(2,shrt));
//unsigned short
printf("unsigned short \t\t");
printf("%d Bytes \t",ushrt);
ushrt=(ushrt*8)-1;
printf("%.0f \t\t\t",(pow(2,ushrt))-1);
printf("0 \n\n");
//long
printf("long \t\t\t");
printf("%d Bytes \t",lng);
lng=(lng*8)-1;
printf("%.0f \t\t",(pow(2,lng))-1);
printf("- %.0f \n",pow(2,lng));
//unsigned long
printf("unsigned long \t\t");
printf("%d Bytes \t",ulng);
ulng=(ulng*8)-1;
printf("%.0f \t\t",(pow(2,ulng))-1);
printf("0 \n");

return 0;
}
