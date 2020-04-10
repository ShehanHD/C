#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[20];
    int num;
    FILE * fp;
    fp=fopen("demo.txt","r");
char r;
if(fp){
        do{
            num=fgetc(fp);
            printf("%d",num);
        }while(num!=EOF);
    fclose(fp);
    }
   else
    printf("EXIT");
    return 0;
}
