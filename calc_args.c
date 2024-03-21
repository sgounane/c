#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    float a, b;
    char op;
    int u;
    if (argc < 4)
    {
        printf("Missing Aguments!!!\n");
        return 1;
    }
    a = atof(argv[1]);
    b = atof(argv[3]);
    op = *argv[2];
    float res;
    int err = 0;
    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("Operation inconnue!!!\n");
        err = 1;
        break;
    }

    if (err == 0)
        printf("%.2f %c %.2f = %.2f\n", a, op, b, res); // 12 + 15 = 27
    return 0;
}