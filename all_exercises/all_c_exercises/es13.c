//somma dei valori delle rispettive celle di 2 array
#include <stdio.h>
    const int dim=5;
    
    int v1[dim];
    int v2[dim];
    int v3[dim];

int main(){
    for(int i=0;i<dim;i++){
        printf("Inserisci il valore della casella %d (del vettore 1) ", i);
        scanf("%d", &v1[i]);
    }
    for(int i=0;i<dim;i++){
        printf("Inserisci il valore della casella %d (del vettore 2) ", i);
        scanf("%d", &v2[i]);
    }
    for(int i=0; i<dim;i++){
        
        printf("\nsomma della casella %d tra v1 e v2 = %d", i, v3[i]=v1[i]+v2[i]);
    }
}