#include <stdio.h>
#include <stdlib.h>

typedef struct elements_list{
    int value[3];
    struct elements_list * next;
}node;

    typedef node * list;

int main(){
    list index;
    int i,x=0;
    char* address;

    list head = NULL;

    head = (list) malloc(sizeof(node));
    for(i=0; i<3; i++){
    head->value[i] = i;
    }
    head->next = NULL;


    index = head;
    index->next = (list) malloc(sizeof(node));
    for (i = 0; i < 3; i++)
    {
        index->next->value[i] = i+3;
    }

    index->next->next = NULL;

    index = index->next;
    index->next = (list) malloc(sizeof(node));
    for(i=0; i<3 ; i++){
    index->next->value[i] = i+6;
    }
    index->next->next = NULL;



    index=head;
    printf("array\t\tValue\taddress\n");
    while(index!=NULL){
        for(i=0; i<3 ; i++){
            if(i==0){
                printf("array[%d][%i]\t%d\t%x\n", x, i, index->value[i], index->next);
            }
            else{
                printf("array[%d][%i]\t%d\t%s\n", x, i, index->value[i], " ");
            }
        }
        printf("\n");
        index=index->next;
        x++;

    }

    printf("%x", &head->next->next->value[1]);

    return 0;
}

