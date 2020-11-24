#include <stdio.h>
#include "test.h"

void f(int num){
    num += 20;
}

void f1(int num[], int dim){
    num[0] = 5;
    num[1] = 7;
}

int main() {
    int x = 0;
    int i[2];

    f(x);

    f1(i, 2);

    printf("%d\n", x);

    printf("%d\n", i[0]);
    printf("%d\n", i[1]);

    return 0;
}