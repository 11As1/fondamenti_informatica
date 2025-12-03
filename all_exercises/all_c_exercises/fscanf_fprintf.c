#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin, *fout;
    int valore;

    fin = fopen("inputFscanf.txt", "r");
    if (fin == NULL) {
        printf("Errore: impossibile aprire input.txt\n");
        return 1;
    }

    fout = fopen("outputFscanf.txt", "w");
    if (fout == NULL) {
        printf("Errore: impossibile aprire output.txt\n");
        fclose(fin);
        return 1;
    }

    while (fscanf(fin, "%d", &valore) == 1) {
        valore++;
        fprintf(fout, "%d\n", valore);
    }

    fclose(fin);
    fclose(fout);

    printf("Valori incrementati e salvati in output.txt\n");

    return 0;
}
