#include<stdio.h>
#define N 3

int main(){
    //declaration
    float Notes[N];
    //initialisation
    int i;
    for(i=0;i<N; i++) Notes[i]=0.0;
    //Saisie
    for(i=0;i<N;i++){
        printf("Donnez Note %d: ", i);
        scanf("%f",&Notes[i]);
    }
    //affichage
    for(i=0;i<N;i++) printf("|%5.2f",Notes[i]);
    printf("|\n");
}