#include <stdio.h>
//somma dei primi n numeri pari da 0 a n chiesto all'utente
int main(){
    int n=0, somma=0;
    //do{    solo se si vuole accettare un numero pari
        printf("Inserisci un numero  ");
        scanf("%d", &n);
    //}while(n%2!=0);


    for(int i=0; i<=n; i++){
        if(i%2==0){
            somma=somma+i;
            printf("\nciclo %d - somma= %d" ,i, somma);
        }else{
            printf("\nciclo %d, %d e' dispari", i);
        } 

    }printf("\nsomma finale= %d", somma);

    printf("\n");
}