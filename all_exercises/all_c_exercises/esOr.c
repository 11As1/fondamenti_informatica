//esercizio con struct + operatore OR (||) 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 20

struct Persona {
    char nome[DIM], cognome[DIM];
    unsigned short int eta;
    char sesso;
};

void leggiStringa(char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    else
        while (getchar() != '\n');
}

int main() {
    struct Persona p1;

    printf("Inserisci il nome: ");
    leggiStringa(p1.nome, DIM);

    printf("Inserisci il cognome: ");
    leggiStringa(p1.cognome, DIM);

    printf("Inserisci l'eta': ");
    scanf("%hu", &p1.eta);

    while (getchar() != '\n');

    printf("Inserisci il sesso (U/D): ");
    p1.sesso = getchar();


    if (p1.sesso == 'D' || p1.eta >= 18) {
        printf("\nPuoi entrare\n");
    } else {
        printf("\nStai fuori\n");
    }
}
