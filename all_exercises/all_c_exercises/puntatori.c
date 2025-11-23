//esercizio puntatori
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int x=100;
    int *p=&x;
    printf("%p", (void *) &x);
    printf("\n");

    printf("%d", *p);
}