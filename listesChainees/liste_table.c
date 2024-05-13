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

void print_list(List_E l)
{
    int i;
    for (i = 0; i < l.lenght; i++)
    {
        printf("%s \t %d \t %f\n", l.Table[i].nom, l.Table[i].age, l.Table[i].moy);
    }
}
void insert_End(List_E *pl, Student s)
{
    if (pl->lenght < MAX)
    {
        pl->Table[pl->lenght] = s;
        pl->lenght++;
    }
    else
        printf("La liste est plenne ...!");
}
void insert_Start(List_E *pl, Student s)
{
    int i;
    if (pl->lenght < MAX)
    {
        if (pl->lenght > 0)
            for (i = pl->lenght; i > 0; i--)
                pl->Table[i] = pl->Table[i - 1];
        pl->Table[0] = s;
        pl->lenght++;
    }
    else
        printf("Liste Plenne...!\n");
}
void insert(List_E *pl, Student s, int k)
{
    int i;
    if(pl->lenght<MAX){
        if(k<=pl->lenght && k>=0){
            for (i = pl->lenght; i > k; i--)
                pl->Table[i] = pl->Table[i - 1];
            pl->Table[k] = s;
            pl->lenght++;
        }
        else printf("Position out bound...!\n");
    }
    else printf("Liste Plenne...!\n");
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
    Student e;
    List_E l;
    l.lenght = 0;
    e = readEtudiant();
    insert(&l, e, 0);
    e = readEtudiant();
    insert(&l, e, 1);
    e = readEtudiant();
    insert(&l, e, 1);
    printf("In function main \n");
    print_list(l);
    return 0;
}