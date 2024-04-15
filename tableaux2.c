#include<stdio.h>
#define N 3
void print_tab(float T[],int n){
    int i;
    for(i=0;i<n;i++) printf("|%5.2f",T[i]);
    printf("|\n");
}

void scan_tab(float T[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Donnez Note %d: ", i);
        scanf("%f",&T[i]);
    }
}
int main(){
    //declaration
    float Notes[N];
    //initialisation
    int i;
    for(i=0;i<N; i++) Notes[i]=0.0;
    //Saisie
    scan_tab(Notes,N);
    //affichage
    print_tab(Notes,N);
    float T[]={12, 15, 17, 9, 5};
    print_tab(T,5);
}