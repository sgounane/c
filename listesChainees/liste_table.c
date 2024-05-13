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
    if (pl->lenght < MAX)
    {
        if (k <= pl->lenght && k >= 0)
        {
            for (i = pl->lenght; i > k; i--)
                pl->Table[i] = pl->Table[i - 1];
            pl->Table[k] = s;
            pl->lenght++;
        }
        else
            printf("Position out bound...!\n");
    }
    else
        printf("Liste Plenne...!\n");
}
void delete_End(List_E *pl)
{
    if (pl->lenght > 0)
        pl->lenght--;
    else
        printf("Empty List ....!\n");
}

void delete_Start(List_E *pl)
{
    int i;
    if (pl->lenght > 0)
    {
        for (i = 0; i < pl->lenght - 1; i++)
            pl->Table[i] = pl->Table[i + 1];
        pl->lenght--;
    }
    else
        printf("Empty List ....!\n");
}

void delete(List_E *pl, int k)
{
    int i;
    if (k < pl->lenght && k >= 0)
    {
        for (i = k; i < pl->lenght - 1; i++)
            pl->Table[i] = pl->Table[i + 1];
        pl->lenght--;
    }
    else
        printf("Empty List ....!\n");
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

void menu()
{
    char c;
    fflush(stdin);
    printf("-----------Menu-----------\n");
    printf("insert debut --------- d\n");
    printf("Insert end ----------- f\n");
    printf("insert position k ---- k\n");
    printf("Delete debut --------- D\n");
    printf("Delete end ----------- F\n");
    printf("Delete position k ---- K\n");
    printf("Print List ----------- p\n");
    printf("Quiter --------------- q\n");
    printf("--------------------------\n");
}

int main()
{
    Student e;
    List_E l;
    l.lenght = 0;
    char c = 'd';
    int k;
    while (c != 'q')
    {
        printf("Votre choix (h for help): ");
        scanf("%c", &c);
        switch (c)
        {
        case 'd':
            e = readEtudiant();
            insert_Start(&l, e);
            break;
        case 'f':
            e = readEtudiant();
            insert_End(&l, e);
            break;
        case 'k':
            e = readEtudiant();
            printf("Donnez k: ");
            scanf("%d", &k);
            insert(&l, e, k);
            break;
        case 'D':
            delete_Start(&l);
            break;
        case 'F':
            delete_End(&l);
            break;
        case 'K':
            printf("Donnez k: ");
            delete (&l, k);
            break;
        case 'p':
            print_list(l);
            break;
        default:
            menu();
        }

        fflush(stdin);
    }
    return 0;
}