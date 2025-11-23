// stampa dei valori random delle celle di un array quando non gli vengono assegnati valori 
#include <stdio.h>

int main(){
    int array[10];
    for(int i=0; i<10; i++){
        printf("\nCasella n. %d - valore = %d",i, array[i]);
    }
}