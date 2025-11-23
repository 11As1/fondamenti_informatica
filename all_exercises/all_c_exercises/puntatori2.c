//esercizio passaggio dei parametri per valore
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void incrementa(int n){
    n++;
    printf("la copia di x e' = %d \n ", n);
    printf("la copia di x ha indirizzo %p\n", (void*)&n);
}

int main(){
    int x=5;
    incrementa(x);
    printf("Il valore di x e' = %d\n");
    printf("l'indirizzo di x e' %p\n", (void*)&x);
}