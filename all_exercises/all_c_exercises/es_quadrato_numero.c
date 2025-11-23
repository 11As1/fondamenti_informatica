#include <stdio.h>
#include <stdlib.h>


int quadrato(int n){
    n=n*n;
    return n;

}
int main(){
    int n;
    printf("\nInserisci un numero: ");
    scanf("%d", &n);
    n=quadrato(n);

    printf("\nIl suo quadrato e' %d", n);
}