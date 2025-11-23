//esercizio con struct + operatore AND (&&) 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 20

struct Persona {
    char nome[DIM], cognome[DIM];
    unsigned short int eta;
    char sesso;
    unsigned int voto;
    unsigned int condotta;
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

    do{
        printf("Inserisci l'eta': ");
        scanf("%hu", &p1.eta);
    }while (p1.eta>120 || p1.eta<0);


    do{
        printf("Inserisci il voto: ");
        scanf("%hu", &p1.voto);
    }while (p1.voto>10 || p1.voto<0);
    

    do{
        printf("Inserisci la condotta: ");
        scanf("%hu", &p1.condotta);
    }while (p1.condotta>10 || p1.condotta<0);


    while (getchar() != '\n');

    printf("Inserisci il sesso (U/D): ");
    p1.sesso = getchar();


    if (p1.voto>=6 && p1.condotta >= 6) {
        printf("\nPromosso\n");
    } else {
        printf("\nBocciato\n");
    }

}
