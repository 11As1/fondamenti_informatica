//somma degli elementi di posizione pari

#include <stdio.h>

int main(){
    int n=5;
    int arr[n];
    int somma=0; 

    for(int i=0; i<n; i++){
        printf("Inserisci il valore della cella %d dell'array ", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n; i=i+2){
        somma=somma+arr[i];
    }

    printf("Somma dei valori che si trovano in posizione pari %d", somma);
}