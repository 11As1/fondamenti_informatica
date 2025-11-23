//calcolo massimo e minimo di un array

#include <stdio.h>

int main() {
    int n=5;
    int arr[n];
    int massimo, minimo;
    int i;

    for(i=0; i<n; i++) {
        printf("Inserisci il valore della cella %d dell'array ", i);
        scanf("%d", &arr[i]);
    }

    massimo=arr[0];
    minimo=arr[0];

    for(i=1;i<n;i++) {
        if(arr[i]>massimo) {
            massimo=arr[i];
        }
        if(arr[i]<minimo) {
            minimo=arr[i];
        }
    }

    printf("massimo= %d\n", massimo);
    printf("minimo= %d\n", minimo);
}