#include <stdio.h>
void f2(int);
int n = 1;
void f1(int a)
{
    if (n > 10)
        return;
    printf("Debut %d f1 \n", n);
    f2(a);
    printf("Fin %d f1 \n", n);
}

void f2(int a)
{
    if (n > 10)
        return;
    printf("Debut %d f2 \n", n);
    n++;
    f1(a);
    n--;
    printf("Fin %d f2 \n", n);
}
int main()
{
    f1(5);
    return 0;
}