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
int get_size(Student *d)
{
    int k = 0;
    while (d != NULL)
    {
        k++;
        d = d->next;
    }
    return k;
}

void insert(Student **pdebut, Student *e, int k)
{
    int l = get_size(*pdebut);
    if (k >= l || k <= 0)
    {
        printf("Position out of List!!!");
    }
    int i = 1;
    Student *p = *pdebut;
    while (i < k)
    {
        p = p->next;
        i++;
    }
    e->next = p->next;
    p->next = e;
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
    int l = get_size(debut);
    printf("List Size: %d\n", l);
    print_list(debut);

    e = readEtudiant();
    insert(&debut, e, 2);
    print_list(debut);
    return 0;
}