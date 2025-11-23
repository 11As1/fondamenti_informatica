//ricerca di un elemento nell'array

#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[5]={193,211,312,31,423};
    int i;
    int numero;
    bool trovato = false ;

    printf("Inserisci un numero e ti diro' se e' presente nell'array ");
    scanf("%d", &numero);
    for(i=0; i<5; i++){
        if(arr[i]==numero){
            trovato=true;
        }
    }

    if(trovato){
            printf("\nIl valore e' presente nell'array");
    } else printf("\nIl valore non e' presente nell'array");
}