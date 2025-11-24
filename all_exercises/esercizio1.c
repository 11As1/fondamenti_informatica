#include <stdio.h>
#include <limits.h>

#define MAX_NUMERI 100

int main() {
    int arrNumeri[MAX_NUMERI];
    int numero;
    int contatore=0;
    
    printf("Inserisci una sequenza di numeri interi (scrivi 0 per terminare)\n");
    
    do {
        printf("Inserisci un numero: ");
        scanf("%d", &numero);
        
        if (numero==0) {
            break;
        }
        
        if (contatore<MAX_NUMERI) {
            arrNumeri[contatore]=numero;
            contatore++;
        } else {
            printf("\nLimite massimo raggiunto");
            break;
        }
        
    } while (numero!=0);
    
    if (contatore==0) {
        printf("\nNon hai inserito numeri validi");
        return 0;
    }
    
    int somma=0;
    int massimo=INT_MIN;
    int minimo=INT_MAX;
    int contaPari=0;
    int contaDispari=0;
    
    for (int i=0;i<contatore;i++){
        somma=somma+arrNumeri[i];
        
        if (arrNumeri[i]>massimo){
            massimo=arrNumeri[i];
        }
        if (arrNumeri[i]<minimo){
            minimo=arrNumeri[i];
        }
        
        if (arrNumeri[i]%2==0){
            contaPari++;
        } else {
            contaDispari++;
        }
    }
    
    float media=(float)somma/contatore;
    
    printf("\nNumeri inseriti: %d", contatore);
    printf("\nSomma: %d", somma);
    printf("\nMedia: %f", media);
    printf("\nValore massimo: %d", massimo);
    printf("\nValore minimo: %d", minimo);
    printf("\nNumeri pari: %d", contaPari);
    printf("\nNumeri dispari: %d", contaDispari);
    
}