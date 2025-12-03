#include <stdlib.h>
#include <stdio.h>



int main(){
    int n;
    printf("Inserisci n ");
    scanf("%d",&n);
    int *array=malloc(n*sizeof(int));
    for(int i=0; i<n ; i++){
        printf("\nInserisci il valore della casella %d dell'array ", i+1);
        scanf("%d", &array[i]);
    }

    FILE *fp =fopen("output.txt","w");
    for(int i=0; i<n; i++){
        fprintf(fp, "%d ", array[i]);
    }
    fclose(fp);




    free(array);
}