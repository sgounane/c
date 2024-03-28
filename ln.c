#include <stdio.h>
#include <math.h>
float power(float, int);
float ln(float);

int main()
{
    float x, p;
    int n;
    printf("Donner x:");
    scanf("%f", &x);
    printf("donner n: ");
    scanf("%d", &n);
    p = power(x, n);
    printf("MyPower: %.2f^%d=%.2f\n", x, n, p);
    p = pow(x, n);
    printf("Power: %.2f^%d=%.2f\n", x, n, p);

    p = ln(x);
    printf("My Log: ln(%.4f)=%.2f\n", x, p);
    p = log(x);
    printf("Math Log: ln(%.4f)=%.2f\n", x, p);

    return 0;
}

float power(float x, int n)
{
    float p = INFINITY; // constante definie dans math.h
    int i;
    if (x == 0)
    {
        if (n != 0)
            p = 0;
        else
            printf("Form inditerminée!!!\n");
    }
    else
    {
        if (n == 0)
            p = 1;
        else
        {
            if (n > 0)
            {
                p = x;
                for (i = 1; i < n; i++)
                    p *= x;
            }
            else
            {
                p = 1 / x;
                for (i = 1; i < -n; i++)
                    p *= 1 / x;
            }
        }
    }
    return p;
}

float ln(float x)
{
    float l = 0;
    int n;
    // 0<x<=2
    if (x <= 0)
        return INFINITY;
    for (n = 1; n < 100; n++)
        l += power(-1, n + 1) * power(x - 1, n) / n;
    return l;
}