//inserimento voti da tastiera e stampa se promosso o bocciato
#include <stdio.h>
int main(){
    int voto=0;
   do{
    printf("Inserisci voto (tra 1 e 10) ");
    scanf ("%d", &voto);
   }while(voto<0 || voto>11);

   if(voto>=6){
    printf("Sei promosso");
} else printf("sei bocciato");
}