#include <stdio.h>
#include <stdlib.h>

typedef struct Etudiant
{
    char nom[20];
    int age;
    float moy;
    struct Etudiant *next;
} Student;

Student *readEtudiant()
{
    Student *e;
    e = (Student *)malloc(sizeof(Student));
    printf("Nom: ");
    scanf("%s", e->nom);
    printf("Age: ");
    scanf("%d", &(e->age));
    printf("Moy: ");
    scanf("%f", &(e->moy));
    e->next = NULL;
    return e;
}

Student *init()
{
    Student *debut = NULL;
    return debut;
}

void insert_End(Student **pdebut, Student *e)
{
    if (*pdebut == NULL)
    {
        *pdebut = e;
    }

    else
    {
        Student *p = *pdebut;
        while (p->next != NULL)
        {
            p = p->next;
        }

        p->next = e;
    }
}

void print_list(Student *p)
{
    int i = 0;
    printf("=========Print List==========\n");
    while (i < 3)
    {
        printf("%s \t %d \t %f\n", p->nom, p->age, p->moy);
        p = p->next;
        i++;
    }
}

int main()
{
    Student *debut;
    debut = init();
    Student *e = readEtudiant();
    insert_End(&debut, e);
    e = readEtudiant();
    insert_End(&debut, e);
    e = readEtudiant();
    insert_End(&debut, e);

    print_list(debut);
    return 0;
}