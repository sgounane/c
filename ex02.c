#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    float a, b;
    char op;
    if (argc < 4)
    {
        printf("Missing arguments !\n");
        return 1;
    }
    op = *argv[2];
    switch (op)
    {
    case '+':
        printf("addition\n");
    case '-':
        printf("soustraction\n");
    default:
        printf("Autres\n");
    }
    // a=argv[1];
    // b=argv[3];

    return 0;
}