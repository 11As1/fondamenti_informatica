// somma dei numeri da 1 a 100
#include <stdio.h>
int main(){
    int somma=0;
    for (int i=0; i<=100; i++){
        somma=somma+i;
        printf("\n Al ciclo %d la somma e' =  %d\n", i, somma);
    }        
}