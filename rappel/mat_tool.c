#include <stdio.h>
void read_mat(float M[][], int n, int m);
// void print_mat(float M[][],int n, int m);
// void add_mat(float M1[][],float M2[][],int n, int m);

int main()
{
    float M[2][2];
    read_mat(M, 2, 2);
}
void read_mat(float M[][], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%f", M+i*m+j);
        }
    }
}