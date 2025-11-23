//switch case giorni della settimana
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char scelta;

do {
        system("cls");
        printf("----- MENU' -----\n");
        printf("l) Lunedi'\n");
        printf("m) Martedi'\n");
        printf("M) Mercoledi'\n");
        printf("g) Giovedi'\n");
        printf("v) Venerdi'\n");
        printf("s) Sabato\n");
        printf("d) Domenica\n");
        printf("-----------------\n");
        printf("Scegli un'opzione: ");
        scanf("%c", &scelta);

        switch (scelta) {
            case 'l':
                printf("\nLunedi'\n");
                break;
            case 'm':
                printf("\nMartedi'\n");
                break;
            case 'M':
                printf("\nMercoledi'\n");
                break;
            case 'g':
                printf("\nGiovedi'\n");
                break;
            case 'v':
                printf("\nVenerdi'\n");
                break;
            case 's':
                printf("\nSabato\n");
                break;

            case 'd':
                printf("\nDomenica\n");
                break;
            default:
                printf("\nLettera non valida!\n");
        }
    } while (scelta != '0');
    
}