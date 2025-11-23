#include <stdio.h>
int main(){
    int voto;
   while(voto<0 || voto>11){
    printf("Inserisci voto (tra 1 e 10) ");
    scanf ("%d", &voto);
   }

   if(voto>=6){
    printf("Sei promosso");
} else printf("sei bocciato");
}