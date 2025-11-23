#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 1000

int calcolaLunghezzaStringa(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

void leggiStringa(char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    else 
        while (getchar() != '\n');
}

int main() {
    char str[DIM];
    printf("Inserisci una stringa: ");
    leggiStringa(str, DIM);

    int lunghezza = calcolaLunghezzaStringa(str);
    printf("La lunghezza della stringa è: %d\n", lunghezza);
}
