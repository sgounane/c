#include <stdio.h>

int main()
{
    int a;
    printf("donnez un entier: ");
    for (; !scanf("%d", &a); fflush(stdin))
        printf("donnez un ENTIER: ");

    return 0;
}