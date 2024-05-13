#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct Etudiant
{
    char nom[20];
    float moy;
    int age;
} Student;

typedef struct List_E
{
    Student Table[MAX];
    int lenght;
} List_E;

void print_list(List_E l){
    int i;
    for (i=0;i<l.lenght;i++){
        printf("%s \t %d \t %f\n",l.Table[i].nom,l.Table[i].age,l.Table[i].moy);
    }
}
void insert_End(List_E *pl, Student s){
    if(pl->lenght<MAX){
        pl->Table[pl->lenght]=s;
        pl->lenght++;
    }
    else printf("La liste est plenne ...!");
    printf("In function insert_End\n");
    print_list(*pl);
}
void insert_Start(){

}
void insert(int k){

}
Student readEtudiant()
{
    Student e;
    printf("Nom: ");
    scanf("%s", e.nom);
    printf("Age: ");
    scanf("%d", &(e.age));
    printf("Moy: ");
    scanf("%f", &(e.moy));
    return e;
}

int main()
{
    Student e1,e2;
    List_E l;
    l.lenght=0;
    e1 = readEtudiant();
    e2 = readEtudiant();
    insert_End(&l,e1);
    insert_End(&l,e2);
    printf("In function main \n");
    print_list(l);
    return 0;
}