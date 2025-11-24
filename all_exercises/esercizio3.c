#include <stdlib.h>
#include <stdio.h>

#define DIM 20
#define MAX_STUDENTI 50

struct Studente {
    int matricola;
    int voto;
    int cfu;
};

int inserisci_studente(struct Studente v[], int n);
void stampa_studenti(struct Studente v[], int n);
float media_voti(struct Studente v[], int n);
int cerca_per_matricola(struct Studente v[], int n, int matricola);
int indice_voto_massimo(struct Studente v[], int n);

int main() {
    struct Studente arrayStud[MAX_STUDENTI];
    int num_studenti=0;
    int scelta;
    int matricola_cercata;
    int i;
    float media;

    do {
        printf("\n----- MENU -----\n");
        printf("1) Inserisci un nuovo studente\n");
        printf("2) Stampa tutti gli studenti\n");
        printf("3) Calcola e stampa la media dei voti\n");
        printf("4) Cerca studente per matricola\n");
        printf("5) Trova e stampa lo studente con il voto massimo\n");
        printf("0) Esci\n");
        printf("-----------------\n");
        printf("Scegli un'opzione: ");
        scanf("%d",&scelta);

        switch(scelta) {
            case 1:
                num_studenti=inserisci_studente(arrayStud, num_studenti);
                break;
            case 2:
                stampa_studenti(arrayStud, num_studenti);
                break;
            case 3:
                if (num_studenti==0) {
                    printf("\nNessuno studente presente");
                } else {
                    media=media_voti(arrayStud, num_studenti);
                    printf("\nLa media dei voti e' %f", media);
                }
                break;

            case 4:
                if (num_studenti==0) {
                    printf("\nNessuno studente presente");
                } else {
                    printf("\nInserisci matricola ");
                    scanf("%d", &matricola_cercata);
                    i=cerca_per_matricola(arrayStud, num_studenti, matricola_cercata);
                    if (i==-1) {
                        printf("\nStudente non trovato");
                    } else {
                        printf("Studente trovato:");
                        printf("\nMatricola: %d, Voto: %d, CFU: %d", 
                               arrayStud[i].matricola, 
                               arrayStud[i].voto, 
                               arrayStud[i].cfu);
                    }
                }
                break;

            case 5:
                if (num_studenti==0) {
                    printf("\nNessuno studente presente");
                } else {
                    i=indice_voto_massimo(arrayStud, num_studenti);
                    printf("\nStudente con il voto massimo:");
                    printf("\nMatricola: %d, Voto: %d, CFU: %d", 
                           arrayStud[i].matricola, 
                           arrayStud[i].voto, 
                           arrayStud[i].cfu);
                }
                break;

            case 0:
                printf("\nUscita dal programma..");
                break;

            default:
                printf("\nScelta non valida");
        }

    } while(scelta != 0);

}

int inserisci_studente(struct Studente v[], int n) {
    if (n>=MAX_STUDENTI) {
        printf("\nDimensione massima array raggiunta");
        return n;
    }

    struct Studente nuovo;
    
    printf("\nInserisci matricola ");
    scanf("%d", &nuovo.matricola);
    
    do {
        printf("\nInserisci voto (18-30) ");
        scanf("%d", &nuovo.voto);
        if (nuovo.voto<18 || nuovo.voto>30) {
            printf("\nVoto non valido");
        }
    } while (nuovo.voto<18 || nuovo.voto>30);
    
    printf("Inserisci CFU ");
    scanf("%d", &nuovo.cfu);
    
    v[n]=nuovo;
    
    return n+1;
}

void stampa_studenti(struct Studente v[], int n) {
    if (n==0) {
        printf("\nNessuno studente presente");
        return;
    }
    
    printf("\n--- Elenco studenti ---\n");
    for (int i=0;i<n;i++) {
        printf("Dati studente %d: matricola=%d, Voto=%d, CFU=%d\n", 
               i+1, v[i].matricola, v[i].voto, v[i].cfu);
    }
}

float media_voti(struct Studente v[], int n) {
    if (n==0) {
        return 0.0;
    } 
    int somma=0;
    for (int i=0;i<n;i++) {
        somma=somma+v[i].voto;
    }
    return (float)somma/n;
}

int cerca_per_matricola(struct Studente v[], int n, int matricola) {
    for (int i=0;i<n;i++) {
        if (v[i].matricola==matricola) {
            return i;
        }
    }
    return -1;
}

int indice_voto_massimo(struct Studente v[], int n) {
    if (n==0) {
        return -1;
    }
    
    int indice_max = 0;
    for (int i=1;i<n;i++) {
        if (v[i].voto>v[indice_max].voto) {
            indice_max=i;
        }
    }
    return indice_max;
}