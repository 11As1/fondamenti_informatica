// media aritmetica

#include <stdio.h>

int main() {
    int n=2;
    int arr[n];
    int somma=0;
    float media = 0;
    int i;

    for (i=0;i<n;i++) {
        printf("Inserisci il valore della cella %d dell'array: ", i);
        scanf("%d", &arr[i]);
    }

    for (i=0;i<n;i++) {
        somma=somma+arr[i];
    }

    media=(float)somma/n;

    printf("La media degli elementi dell'array è %f\n", media);

}
