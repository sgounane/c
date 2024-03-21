#include <stdio.h>

float add(float a, float b)
{
    float s;
    s = a + b;
    return s;
}
int main()
{

    float a, b, s;
    printf("Donnez a:");
    scanf("%f", &a);

    printf("Donnez b:");
    scanf("%f", &b);
    s = add(a, b);
    printf("La somme est %f \n", s);
    return 0;
}