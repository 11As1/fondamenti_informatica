//esercizio prova puntatori attraverso funzione somma
#include <stdio.h>

void somma(int *q, int *w, int *e){
    *e=*q+*w;
    printf("\nindirizzo di a nella funzione= %p ", (void*)q);
    printf("\nindirizzo di b nella funzione= %p ", (void*)w);
    printf("\nindirizzo di risultato nella funzione= %p ", (void*)e);
}

int main(){
    int a, b, risultato;
    int *pa = &a;
    int *pb = &b;
    int *prisultato = &risultato;



    printf("Inserisci a ");
    scanf("%d", &a);
    printf("Inserisci b ");
    scanf("%d", &b);

    printf("\nindirizzo di a = %p ", (void*)&a);
    printf("\nindirizzo di b = %p ", (void*)&b);
    printf("\nindirizzo di risultato = %p ", (void*)&risultato);


    somma(pa, pb, prisultato);
    printf("\nrisultato = %d ", risultato);

}