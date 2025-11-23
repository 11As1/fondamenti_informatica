#include <stdlib.h>
#include <stdio.h>
double voto=0;
double inserisciEControllaValori();

int main(){

inserisciEControllaValori();

    if (voto>=6){
        printf("promosso perche' hai %f\n", voto);
    }else printf("bocciato perche' hai %f\n", voto);
}

double inserisciEControllaValori(){
    do{
        printf("Inserisci voto ");
        scanf("%lf", &voto);
    }while (voto>10 || voto < 0);
    return voto;
}