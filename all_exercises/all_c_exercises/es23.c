// popolamento array con valori casuali (dati un MAX e un MIN) + bubblesort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n=10;
    int arr[n];
    srand (time(NULL));
    int MAX=100;
    int MIN=0;
    int tmp=0;

    for(int i=0; i<n; i++){
        arr[i] = rand()%(MAX-MIN+1)+MIN;        
        printf("\nValore cella %d numero casuale = %d ", i, arr[i]);

    }


    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }

    printf("\nValore array ordinato = ");
        for(int i=0; i<n; i++){      
        printf(" %d ", arr[i]);
    }

}