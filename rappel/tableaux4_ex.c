#include <stdio.h>
#define N_etudiant 5
#define N_matieres 2

int main()
{
    // declaration
    int i, j;
    float Notes[N_etudiant][N_matieres + 1];
    // saisie des Notes
    for (i = 0; i < N_etudiant; i++)
    {
        float s = 0;
        for (j = 0; j < N_matieres; j++)
        {
            printf("Donnez La note %d de l'etudiant %d: ", j, i);
            scanf("%f", &Notes[i][j]);
            s += Notes[i][j];
        }
        Notes[i][N_matieres] = s / N_matieres;
    }
    // Affichage
    printf("_________________________________________\n");
    printf("|idx  |Math |Phy  |Moy  |\n");
    for (i = 0; i < N_etudiant; i++)
    {
        printf("|%5d", i);
        for (j = 0; j < N_matieres + 1; j++)
        {
            printf("|%5.2f", Notes[i][j]);
        }
        printf("|\n");
    }
    // find max index
    int idx = 0;
    for (i = 1; i < N_etudiant; i++)
    {
        if (Notes[idx][N_matieres] < Notes[i][N_matieres])
            idx = i;
    }
    printf("L'etudiand %d a la meilleur Moyenne: %f\n", idx, Notes[idx][N_matieres]);
}