#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000

int main(){

    srand (time(NULL));
    int i;
    int MAX=100;
    int MIN=1;
    long int arr[N];
    for(i = 0; i<N; i++){
        arr[i]=rand()%(MAX-MIN+1)+MIN;
        printf("\n%d", arr[i]);
    }

}