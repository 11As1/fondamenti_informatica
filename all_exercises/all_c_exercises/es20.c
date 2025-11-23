// inversione dell'array

#include <stdio.h>

int main() {
    int n=5;
    int arr1[n], arr2[n];

    for (int i=0;i<n; i++) {
        printf("Inserisci il valore della cella %d dell'array: ", i);
        scanf("%d", &arr1[i]);
    }

    for (int i=0;i<n;i++) {
        arr2[i]=arr1[n-1-i];
    }

    printf("Array invertito:\n");
    for (int i=0;i<n;i++) {
        printf(" %d ", arr2[i]);
    }

}
