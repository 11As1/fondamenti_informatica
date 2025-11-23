#include <stdio.h>
#include <string.h>

int main() {
    // ============================
    // STRINGHE IN C – ESEMPI COMPLETI
    // ============================

    // 1️ Dichiarazione e inizializzazione
    char s1[20] = "Ciao";
    char s2[20] = "Mondo";
    char s3[40]; // stringa vuota per concatenazione

    // 2️ Output di una stringa
    printf("s1: %s\n", s1);
    printf("s2: %s\n\n", s2);

    // 3️ Concatenazione (strcat)
    strcpy(s3, s1);        // copia s1 dentro s3
    strcat(s3, " ");       // aggiunge uno spazio
    strcat(s3, s2);        // aggiunge s2
    printf("Concatenazione: %s\n\n", s3);

    // 4️ Lunghezza della stringa (strlen)
    printf("Lunghezza di s3: %lu\n\n", strlen(s3));

    // 5️ Confronto di stringhe (strcmp)
    if (strcmp(s1, s2) == 0)
        printf("Le stringhe sono uguali.\n");
    else
        printf("Le stringhe sono diverse.\n");

    // 6️ Ricerca di caratteri (strchr)
    char *p = strchr(s3, 'o');
    if (p != NULL)
        printf("\nIl primo carattere 'o' si trova in posizione: %ld\n\n", p - s3);
    else
        printf("\nCarattere non trovato.\n\n");

    // 7️ Ricerca di sottostringa (strstr)
    char *sub = strstr(s3, "Mon");
    if (sub != NULL)
        printf("Sottostringa 'Mon' trovata in posizione: %ld\n\n", sub - s3);
    else
        printf("Sottostringa non trovata.\n\n");

    // 8 Input da tastiera
    char nome[30];
    printf("Inserisci il tuo nome: ");
    fgets(nome, 30, stdin); // legge anche '\n'

    // rimuove '\n' finale se presente
    nome[strcspn(nome, "\n")] = '\0';

    printf("Ciao %s!\n", nome);
    printf("Il tuo nome ha %lu caratteri.\n\n", strlen(nome));

    // 9️ Scorrere i caratteri di una stringa
    printf("Lettere del tuo nome:\n");
    for (int i = 0; nome[i] != '\0'; i++) {
        printf(" - %c\n", nome[i]);
    }

    // 10 Copia di stringa (strcpy / strncpy)
    char copia[30];
    strcpy(copia, nome);
    printf("\nCopia del nome: %s\n", copia);

    // 11 Uso di strncpy per copiare parzialmente
    char parziale[10];
    strncpy(parziale, nome, 5);
    parziale[5] = '\0'; // chiusura manuale
    printf("Prime 5 lettere del nome: %s\n", parziale);






    char mio_nome[30];

    printf("Inserisci il tuo nome: ");
    fgets(mio_nome, 30, stdin);
    mio_nome[strcspn(mio_nome, "\n")] = '\0'; // rimuove '\n'

    printf("Ciao, %s!\n", mio_nome);


}