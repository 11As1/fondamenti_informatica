#include <stdio.h>

int main(){
    double base=0, altezza=0, area=0;

    printf("Inserisci base del triangolo \n");
    scanf("%lf", &base);
    printf("Inserisci altezza del triangolo \n");
    scanf("%lf", &altezza);

    area=(base*altezza)/2;

    printf("area triangolo = %.1lf \n", area);
    printf("area triangolo = %.3lf \n", area=(base*altezza)/2);


}