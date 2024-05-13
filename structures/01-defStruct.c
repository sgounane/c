#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Etudiant
{
    char nom[20];
    int age;
} Etudiant;

int main(){
    Etudiant e1;
    strcpy(e1.nom,"Yahya");
    e1.age=23;
    printf("Nom: %s , %d \n",e1.nom,e1.age);

}
