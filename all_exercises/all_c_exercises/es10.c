// calcolatrice con menu con soli if - else
#include <stdio.h>
#include <stdlib.h>

int main() {
    int scelta;
    float a, b, risultato;

    do {
        system("cls");
        printf("----- MENU' -----\n");
        printf("1) Somma\n");
        printf("2) Differenza\n");
        printf("3) Prodotto\n");
        printf("4) Quoziente\n");
        printf("0) Esci\n");
        printf("-----------------\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        if (scelta==1) {
                printf("\nInserisci due numeri: ");
                scanf("%f %f", &a, &b);
                risultato = a + b;
                printf("Somma = %.2f\n", risultato);

        }else if (scelta==2) {
                printf("\nInserisci due numeri: ");
                scanf("%f %f", &a, &b);
                risultato = a - b;
                printf("Differenza = %.2f\n", risultato);
        }
           else if (scelta==3) {
                printf("\nInserisci due numeri: ");
                scanf("%f %f", &a, &b);
                risultato = a * b;
                printf("Prodotto = %.2f\n", risultato);
           } else if (scelta==4) {
                printf("\nInserisci due numeri: ");
                scanf("%f %f", &a, &b);
                if (b != 0)
                    risultato = a / b;
                else {
                    printf("Errore: divisione per zero!\n");
                }
                printf("Quoziente = %.2f\n", risultato);
            }
else if(scelta==0){
                printf("\nUscita dal programma...\n");
}

else{
    printf("\nScelta non valida!\n");
        }

    } while (scelta != 0);
}