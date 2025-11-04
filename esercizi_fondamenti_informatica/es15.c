//somma degli elementi

#include <stdio.h>

int main(){
    int n=10;
    int arr[n];
    int somma=0;

    for(int i=0; i<n; i++){
        printf("Inserisci il valore della cella %d dell'array ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        somma=somma+arr[i];
    }

    printf("La somma degli elementi dell'array e' %d", somma);
}