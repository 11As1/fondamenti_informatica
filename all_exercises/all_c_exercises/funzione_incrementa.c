//esercizio scope variabili con funzione incrementa
#include <stdio.h>
#include <stdlib.h>

int n;

int incrementa(){
    n++;
    printf("\nValore n incrementato = %d \n", n);
    return n;
}

int main(){
    printf("\nInserisci un valore n: ");
    scanf("%d", &n);
    incrementa();
}