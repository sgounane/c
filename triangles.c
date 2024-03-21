#include <stdio.h>

int main()
{
    int n;
    char c;
    printf("Donnez c: ");
    scanf("%c", &c);
    printf("donnez un entier: ");
    if (scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                printf("%c", c);
            printf("\n");
        }
        printf("\n");
        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
                printf("%c", c);
            printf("\n");
        }
        printf("\n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > j)
                    printf(" ");
                else
                    printf("+");
            }
            printf("\n");
        }
    }
    else
        printf("N doit etre un entier..");

    return 0;
}