#include <stdlib.h>
#include <stdio.h>

float calcola_media(float v[], int n){
    float somma=0;
    for(int i=0;i<n;i++){
        somma=somma+v[i];
    }
    return somma/n;
}

float trova_massimo(float v[], int n){
    float massimo=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>massimo){
            massimo=v[i];
        }
    }
    return massimo;
}

float trova_minimo(float v[], int n){
    float minimo=v[0];
    for(int i=1;i<n;i++){
        if(v[i]<minimo){
            minimo=v[i];
        }
    }
    return minimo;
}

int conta_maggiori_di_media(float v[], int n){
    float media=calcola_media(v, n);
    int conta=0;
    for(int i=0;i<n;i++){
        if(v[i]>media){
            conta++;
        }
    }
    return conta;
}

int main(){
    int N;
    do{
        printf("Inserisci il numero di giorni (1-31): ");
        scanf("%d", &N);
    }while (N<1 || N>31);
    
    float arr[N];

    for(int i=0;i<N;i++){
        do{
            printf("Inserisci la temperatura del giorno %d: ",i+1);
            scanf("%f", &arr[i]);
        }while(arr[i]<-273 || arr[i]>300);
    }

    float media=calcola_media(arr,N);
    float massimo=trova_massimo(arr,N);
    float minimo=trova_minimo(arr,N);
    int giorni_sopra_media=conta_maggiori_di_media(arr,N);

    printf("\nMedia delle temperature: %f", media);
    printf("\nTemperatura massima: %f", massimo);
    printf("\nTemperatura minima: %f", minimo);
    printf("\nGiorni con temperatura maggiore della media: %d", giorni_sopra_media);
}