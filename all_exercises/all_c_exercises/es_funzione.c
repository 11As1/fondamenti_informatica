//funzione media tra due numeri
#include <stdio.h>
#include <stdlib.h>

float media(float numero1, float numero2){
    return(numero1+numero2)/2;
}


int main(){
    float num1, num2;
    float mediaNum;
    printf("Inserisci num1: ");
    scanf("%f", &num1);
    printf("Inserisci num2: ");
    scanf("%f", &num2);   
    mediaNum=media(num1, num2);
    printf("La media e' = %.2f", mediaNum);
}