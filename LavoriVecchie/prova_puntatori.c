#include <stdio.h>
#include <stdlib.h>

typedef struct elements_list{
    int value[3];
    struct elements_list * next; 
}node;

    typedef node * list; 

int main(){
    list index;
    int i=0;

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
        index->next->value[i] = i;     
    }

    index->next->next = NULL;   

    index = index->next;
    index->next = (list) malloc(sizeof(node));
    for(i=0; i<3 ; i++){
    index->next->value[i] = i;
    }
    index->next->next = NULL;



    index=head;

    while(index!=NULL){
        for(i=0; i<3 ; i++){
        printf("Node1\t%d\t%p\n", index->value[i], index->next);
        }
        printf("\n");
        index=index->next;
        
    }

    return 0;
}

