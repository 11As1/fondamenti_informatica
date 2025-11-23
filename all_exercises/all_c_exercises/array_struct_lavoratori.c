/*Creare un'array di struct contenente lavoratori (nome, cognome, eta, stipendio). Fai gli input del nome, cognome e eta.
Poi calcolare la media degli stipendi e calcolare il massimo e minimo degli stipendi. Stampare tutti i dati del lavoratore.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FFLUSH while (getchar() != '\n');
#define DIM 30
#define N_LAVORATORI 5

struct persona {
    unsigned short int eta;
    char nome[DIM];
    char cognome[DIM];
    float stipendio;
};

void leggiStringa(char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    else{ 
        printf("Sono nell'else");
        FFLUSH;
    }
}

float calcolaMediaStipendi(struct persona array_lavoratori[], int n) {
    float somma = 0;
    for (int i = 0; i < n; i++) {
        somma = somma + array_lavoratori[i].stipendio;
    }
    return somma / n;
}

void calcolaMassimoEMinimoStipendi(struct persona array_lavoratori[], int n) {
    float max = array_lavoratori[0].stipendio;
    float min = array_lavoratori[0].stipendio;

    for (int i = 1; i < n; i++) {
        if (array_lavoratori[i].stipendio > max)
            max = array_lavoratori[i].stipendio;
        if (array_lavoratori[i].stipendio < min)
            min = array_lavoratori[i].stipendio;
    }

    printf("\nStipendio massimo: %.2f", max);
    printf("\nStipendio minimo: %.2f\n", min);
}

int main() {
    struct persona array_lavoratori[N_LAVORATORI];
    unsigned short int eta;
    float stipendio;
    char nome[DIM];
    char cognome[DIM];

    for (unsigned short int i = 0; i < N_LAVORATORI; i++) {
        printf("\n--- Lavoratore %hu ---\n", i + 1);
        printf("Inserisci il nome: ");
        leggiStringa(nome, DIM);
        printf("Inserisci il cognome: ");
        leggiStringa(cognome, DIM);
        printf("Inserisci l'eta': ");
        scanf("%hu", &eta);
        printf("Inserisci stipendio: ");
        scanf("%f", &stipendio);
        while (getchar() != '\n');

        strcpy(array_lavoratori[i].nome, nome);
        strcpy(array_lavoratori[i].cognome, cognome);
        array_lavoratori[i].eta = eta;
        array_lavoratori[i].stipendio = stipendio;
    }

    printf("\n--- Dati inseriti ---\n");
    for (unsigned short int i = 0; i < N_LAVORATORI; i++) {
        printf("\nPersona %hu:", i + 1);
        printf("\n  Nome: %s", array_lavoratori[i].nome);
        printf("\n  Cognome: %s", array_lavoratori[i].cognome);
        printf("\n  Eta': %hu", array_lavoratori[i].eta);
        printf("\n  Stipendio: %.2f\n", array_lavoratori[i].stipendio);
    }

    float media = calcolaMediaStipendi(array_lavoratori, N_LAVORATORI);
    printf("\nMedia stipendi: %.2f", media);

    calcolaMassimoEMinimoStipendi(array_lavoratori, N_LAVORATORI);

}
