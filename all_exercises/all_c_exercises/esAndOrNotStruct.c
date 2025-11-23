//esercizio con operatori And Or e Not + Struct + menu
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 20

struct Persona {
    char nome[DIM], cognome[DIM];
    unsigned short int eta;
    char sesso;
    unsigned voto;
    unsigned condotta;
};

void leggiStringa(char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    else
        while (getchar() != '\n');
}

int main() {
    struct Persona p;
    int scelta;

    printf("Inserisci il nome: ");
    leggiStringa(p.nome, DIM);

    printf("Inserisci il cognome: ");
    leggiStringa(p.cognome, DIM);

    do {
        printf("Inserisci l'eta': ");
        scanf("%hu", &p.eta);
    } while (p.eta > 120);

    while (getchar() != '\n');

    printf("Inserisci il sesso (U/D): ");
    p.sesso = getchar();

    do {
        printf("Inserisci il voto (0-10): ");
        scanf("%u", &p.voto);
    } while (p.voto > 10);

    do {
        printf("Inserisci la condotta (0-10): ");
        scanf("%u", &p.condotta);
    } while (p.condotta > 10);

    do {
        printf("\n===== MENU' CON OPERATORI LOGICI =====\n");
        printf("1) Verifica promozione (AND)\n");
        printf("2) Verifica accesso locale (OR)\n");
        printf("3) Controllo MINORENNE (NOT)\n");
        printf("4) Controllo NON donna (NOT su carattere)\n");
        printf("0) Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        while (getchar() != '\n'); // pulizia buffer input

        switch (scelta) {

            case 1:
                if (p.voto >= 6 && p.condotta >= 6) {
                    printf("\nSei promosso\n");
                } else {
                    printf("\nSei bocciato\n");
                }
                break;

            case 2:
                if (p.sesso == 'D' || p.eta >= 18) {
                    printf("\nPuoi entrare nel locale\n");
                } else {
                    printf("\nNon puoi entrare\n");
                }
                break;

            case 3:
                if (!(p.eta >= 18)) {
                    printf("\nSei minorenne\n");
                } else {
                    printf("\nSei maggiorenne\n");
                }
                break;

            case 4:
                if (!(p.sesso == 'D')) {
                    printf("\nNon sei donna\n");
                } else {
                    printf("\nSei donna\n");
                }
                break;

            case 0:
                printf("\nUscita...\n");
                break;

            default:
                printf("\nScelta non valida.\n");
        }

    } while (scelta != 0);

}