// calcolatrice con menu con switch case e funzioni per operazioni

#include <stdio.h>
#include <stdlib.h>

int somma();
int differenza();
int prodotto();
int quoziente();

int main() {
    int scelta;

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

        switch (scelta) {
            case 1:
                somma();
                break;
            case 2:
                differenza();
                break;
            case 3:
                prodotto();
                break;
            case 4:
                quoziente();
                break;
            case 0:
                printf("\nUscita dal programma...\n");
                break;
            default:
                printf("\nScelta non valida!\n");
        }

        if (scelta != 0) {
            printf("\nPremi un tasto per continuare...");
            system("pause");
        }

    } while (scelta != 0);

}

int somma() {
    double a, b, risultato;
    printf("\nInserisci due numeri: ");
    scanf("%lf %lf", &a, &b);
    risultato = a + b;
    printf("Somma = %.2lf\n", risultato);
    return 0;
}

int differenza() {
    double a, b, risultato;
    printf("\nInserisci due numeri: ");
    scanf("%lf %lf", &a, &b);
    risultato = a - b;
    printf("Differenza = %.2lf\n", risultato);
    return 0;
}

int prodotto() {
    double a, b, risultato;
    printf("\nInserisci due numeri: ");
    scanf("%lf %lf", &a, &b);
    risultato = a * b;
    printf("Prodotto = %.2lf\n", risultato);
    return 0;
}

int quoziente() {
    double a, b, risultato;
    printf("\nInserisci due numeri: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        risultato = a / b;
        printf("Quoziente = %.2lf\n", risultato);
    } else {
        printf("Errore: divisione per zero!\n");
    }
    return 0;
}
