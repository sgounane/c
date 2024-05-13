#include<stdio.h>
#include<stdlib.h>

float * read_tab(int n){
    float *p=(float *)malloc(n*sizeof(float));
    int i;
    for(i=0;i<n;i++){
        printf("T[%d]: ",i);
        scanf("%f",p+i);
    }
    return p;
}
int main(){
    int n;
    printf("Donnez le nombre de notes: ");
    scanf("%d",&n);
    float *p=read_tab(n);

    //affichage
    for(int i=0;i<n;i++) printf("%.2f ",*(p+i));
    printf("\n");
    return 0;
}