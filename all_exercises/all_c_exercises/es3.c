#include <stdio.h>
int main(){
    double num1=0, num2=0;
    printf("Inserisci numero1 ");
    scanf("%lf", &num1);
    printf("\nInserisci numero2 ");
    scanf("%lf", &num2);

if (num1>num2){
    printf("\nnumero1 maggiore di numero2\n");
} else if(num2>num1){
        printf("\nnumero2 maggiore di numero1\n");
}else {
    printf("\ni due numeri sono uguali\n");
}
}