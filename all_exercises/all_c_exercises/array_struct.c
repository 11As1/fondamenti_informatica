/*Creare un'array di struct contenente persone (nome, cognome eta). Fai gli input del nome, cognome e eta.
Poi stamparli
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 30
#define N 12

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
    struct persona array_persona[N];
    unsigned short int eta;
    char nome[DIM];
    char cognome[DIM];

    for (unsigned short int i = 0; i < N; i++) {
        printf("\n--- Persona %hu ---\n", i + 1);
        printf("Inserisci il nome: ");
        leggiStringa(nome, DIM);
        printf("Inserisci il cognome: ");
        leggiStringa(cognome, DIM);
        printf("Inserisci l'eta': ");
        scanf("%hu", &eta);
        while (getchar() != '\n');

        strcpy(array_persona[i].nome, nome);
        strcpy(array_persona[i].cognome, cognome);
        array_persona[i].eta = eta;
    }

    printf("\n--- Dati inseriti ---\n");
    for (unsigned short int i = 0; i < N; i++) {
        printf("\nPersona %hu:", i + 1);
        printf("\n  Nome: %s", array_persona[i].nome);
        printf("\n  Cognome: %s", array_persona[i].cognome);
        printf("\n  Eta': %hu\n", array_persona[i].eta);
    }

}
