//calcolare l'eta con una funzione avente in ingresso anno attuale e anno nascita
#include <stdio.h>
#include <stdlib.h>



int calcolaEta(int AN, int AA){
    int eta;
    eta=AA-AN;

    return eta;
}


int main(){
    int annoNascita, annoAttuale, eta;
    printf("\nInserisci l'anno di nascita ");
    scanf("%d", &annoNascita);
    printf("\nIn che anno siamo? ");
    scanf("%d", &annoAttuale);


    eta=calcolaEta(annoNascita, annoAttuale);

    if(eta<0){
        printf("\nHai sbagliato a scrivere gli anni (non puoi avere eta' negativa)");
    } else if (eta>120){
        printf("\nHai %d anni. Forse un po' troppi, che dici? :) ", eta);

    }

printf("C'hai %d anni", eta);
    
}