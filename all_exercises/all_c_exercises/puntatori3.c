//esercizio passaggio dei parametri per riferimento tramite puntatori

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void incrementa(int *n){
    *n=*n+1;
    printf("la copia di x e' = %d \n ", *n);
    printf("la copia di x ha indirizzo %p\n", (void*)&n);
}

int main(){
    int x=5;
    incrementa(&x);
    printf("Il valore di x e' = %d", x);

    printf("\nindirizzo di x = %p ", (void*)&x);
        
}