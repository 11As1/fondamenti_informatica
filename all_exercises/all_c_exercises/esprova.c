// esercizio login (usando funzioni leggistringa(...) e strcmp(...))

#include<stdio.h>
#include<string.h>
#define DIM 20

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

int main(){
  char username[DIM];
  char password[DIM];
  printf("username : ");
  leggiStringa(username, DIM);
  printf("password : ");
  leggiStringa(password, DIM);


if (strcmp(username, "user") == 0 && strcmp(password, "user")==0) {
    printf("Login effettuato");
  }else     printf("Login fallito");

}