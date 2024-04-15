#include <stdio.h>
int main()
{
    int a = 6;
    int *p = &a;
    printf("%x %d\n", p, *p);
    int T[2] = {2, 8};
    printf("%x %d\n", T, *(T+1));
    return 0;
}