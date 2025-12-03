#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin;
    int n = 0;
    int valore;

    fin = fopen("arrayFileIn.txt", "r");
    if (fin == NULL) {
        printf("Errore: impossibile aprire il file\n");
        return 1;
    }

    while (fscanf(fin, "%d", &valore) == 1) {
        n++;
    }

    int *array = malloc(n * sizeof(int));

    rewind(fin);

    int i = 0;
    while (fscanf(fin, "%d", &valore) == 1) {
        array[i] = valore;
        printf("Letto: %d\n", valore);
        i++;
    }

    fclose(fin);
    free(array);

    return 0;
}
