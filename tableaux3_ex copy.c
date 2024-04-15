#include <stdio.h>
#define N 3
void print_tab(float T[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("|%5.2f", T[i]);
    printf("|\n");
}

void scan_tab(float T[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Donnez Note Etudiant %d: ", i);
        scanf("%f", &T[i]);
    }
}
int main()
{
    // declaration
    int i;
    float Math[N], Phy[N], Fr[N], Info[N], Moy[N];
    printf("**** Saisie Notes Maths****\n");
    scan_tab(Math, N);
    printf("**** Saisie Notes Phy****\n");
    scan_tab(Phy, N);
    printf("**** Saisie Notes Fr****\n");
    scan_tab(Fr, N);
    printf("**** Saisie Notes Info****\n");
    scan_tab(Info, N);
    printf("***************************\n");
    printf("Affichage des Notes\n");
    printf("Math:");
    print_tab(Math, N);
    printf("Phy:");
    print_tab(Phy, N);
    printf("Fr :");
    print_tab(Fr, N);
    printf("Info:");
    print_tab(Info, N);
    // Calcul des moyennes
    for (i = 0; i < N; i++)
        Moy[i] = (Math[i] + Phy[i] + Fr[i] + Info[i]) / 4;
    // Affichage des Moyennes:
    printf("Moyennes: ");
    print_tab(Moy, N);
}