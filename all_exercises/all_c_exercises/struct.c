//esercizio struct

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 30

struct persona {
    unsigned short int eta;
    char nome[DIM];
    char cognome[DIM];
};

void leggiStringa(char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    else
        while (getchar() != '\n');
}

int main() {
    struct persona p1;
    char nome[DIM];
    char cognome[DIM];
    unsigned short int eta;

    printf("Inserisci il nome: ");
    leggiStringa(p1.nome, DIM);
    printf("Inserisci il cognome: ");
    leggiStringa(cognome, DIM);
    printf("Inserisci l'eta': ");
    scanf("%hu", &eta);

    strcpy(p1.nome, nome);
    strcpy(p1.cognome, cognome);
    p1.eta = eta;

    printf("\nNome = %s", p1.nome);
    printf("\nCognome = %s", p1.cognome);
    printf("\nEta = %hu\n", p1.eta);

}
