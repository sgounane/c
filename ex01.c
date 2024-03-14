#include <stdio.h>

int main(void)
{
    int a, b;
    float moy;
    do
    {
        printf("Donnez a: ");
        scanf("%d", &a);
    } while (a < 0 || a >= 20);
    do
    {
        printf("Donnez  b: ");
        scanf("%d", &b);
    } while (b < 0 || b >= 20);
    moy = (a + b) / 2.0;
    printf("-a: %05d\n-b: %05d \n -moy: %f", a, b, moy);
    if(moy<10) printf("- Rattrapaage");
    else if(moy<12) printf("- Passable");
    else if(moy<14) printf("- Assez Bien");
    else if(moy<16) printf("- Bien");
    else printf("- Très bien");

    return 0;
}