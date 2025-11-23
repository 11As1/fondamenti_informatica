//conta dei numeri pari e dispari dei valori di un array

#include <stdio.h>

int main(){
    int n=5;
    int arr[n];
    int conta_pari=0, conta_dispari=0;
    int i;

    for(i=0; i<n; i++){
        printf("Inserisci il valore della cella %d dell'array ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i]%2==0){
            conta_pari++;
        }else {
            conta_dispari++;
        }

    }


printf("Conta pari= %d", conta_pari);
printf("\nConta dispari= %d", conta_dispari);


}