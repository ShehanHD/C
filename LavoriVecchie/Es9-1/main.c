#include <stdio.h>
#include <stdlib.h>

int main()
{
    int al[25];
    int v[25];
    int i,j;
    int MIU=65;

    for(i=3; i<26; i++){
        v[i-3]=MIU+i;
    if(i==25){
        for(j=0; j<3; j++){
            v[(i-2)+j]=MIU+j;
        }
    }}

    for(j=0; j<26; j++){
        al[j]=MIU+j;
    }



    return 0;
}
