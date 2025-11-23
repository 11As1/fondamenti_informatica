//successione di fibonacci
#include <stdio.h>
#define DIM 10

int main(){
    int v1[DIM];
    v1[0]=1;
    v1[1]=2;

    for(int i=2; i<DIM; i++){
        v1[i]=v1[i-1]+v1[i-2];
    }

    for(int i=0; i<DIM; i++){
        printf(" %d ", v1[i]);
    }
}