// popolamento array con valori casuali (dati un MAX e un MIN)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n=10;
    int arr[n];
    srand (time(NULL));
    int MAX=100;
    int MIN=0;

    for(int i=0; i<n; i++){
        printf("\nValore cella %d = %d ", i, arr[i]);
    }

    for(int i=0; i<n; i++){
        arr[i] = rand()%(MAX-MIN+1)+MIN;
    }

    for(int i=0; i<n; i++){
        printf("\nValore cella %d numero casuale = %d ", i, arr[i]);

    }


}