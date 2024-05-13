#include <stdio.h>
#include <stdlib.h>

typedef struct Etudiant
{
    char nom[20];
    int age;
    float moy;
    struct Etudiant *next;
} Student;

Student readEtudiant()
{
    Student e;
    printf("Nom: ");
    scanf("%s", e.nom);
    printf("Age: ");
    scanf("%d", &(e.age));
    printf("Moy: ");
    scanf("%f", &(e.moy));
    e.next = NULL;
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
        printf("debut= NULL\n");
        *pdebut = e;
    }

    else
    {
        Student *p = *pdebut;
        printf("avant while %s", p->nom);
        while (p->next != NULL)
        {
            printf(" While %s", p->nom);
            p = p->next;
            
        }

        p->next = e;
    }
}

void print_list(Student *p)
{
    int i = 0;
    while (i < 3)
    {
        printf("%s \t %d \t %f %x\n", p->nom, p->age, p->moy, p->next);
        p = p->next;
        i++;
    }
}

int main()
{
    Student *debut;
    debut = init();
    Student e = readEtudiant();
    insert_End(&debut, &e);
    e = readEtudiant();
    insert_End(&debut, &e);
    e = readEtudiant();
    insert_End(&debut, &e);

    print_list(debut);
    return 0;
}