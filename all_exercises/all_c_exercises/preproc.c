//esercizio prova preprocessore 
#include <stdio.h>

#define PI 3.14159
#define VERSIONE 2
#define QUADRATO(x) ((x) * (x))
#define SOMMA(a, b) a + b

#define TEMP 100
#undef TEMP

#ifndef MIO_HEADER
#define MIO_HEADER
void funzione_dummy() {
    printf("Dentro funzione_dummy()\n");
}
#endif

#define DEBUG 1

int main() {

#if DEBUG
    printf("Modalità debug attiva\n");
#endif

#if VERSIONE == 1
    printf("Versione 1 attiva\n");
#elif VERSIONE == 2
    printf("Versione 2 attiva\n");
#else
    printf("Versione sconosciuta\n");
#endif

    printf("Valore di PI: %f\n", PI);
    printf("Quadrato di 5: %d\n", QUADRATO(5));
    printf("SOMMA(2,3) * 2 = %d\n", SOMMA(2,3) * 2);

    printf("Questo codice è in: %s\n", __FILE__);
    printf("Numero di riga: %d\n", __LINE__);
    printf("Compilato il: %s alle %s\n", __DATE__, __TIME__);
    printf("Siamo nella funzione: %s\n", __func__);

    funzione_dummy();

#pragma message("Messaggio del preprocessore")

}