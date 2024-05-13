#include <stdio.h>

int main(int argc, char *argv[])
{

    float a, b;
    char op;
    int u;
    do
    {
        printf("Donnez a:");
        u = scanf("%f", &a);
        fflush(stdin);
    } while (u != 1);

    do
    {
        printf("Donnez b:");
        u = scanf("%f", &b);
        fflush(stdin);
    } while (u != 1);

    printf("donnez l'operation 2:");
    scanf("%c", &op);

    float res;
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
        break;
    }

    printf("%.2f %c %.2f = %.2f\n", a, op, b, res); // 12 + 15 = 27
    return 0;
}