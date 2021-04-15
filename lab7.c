#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void f(int** a, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            a[i][j] = rand () % 21 - 10;
}
void f2(int** a, int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
         printf("%3d", a[i][j]);
         printf("\n");
        }
}
int main()
{
    srand(time (NULL));
    int n, m, x, i ,j, k;
    printf("Vvedite n and m\n");
    scanf ("%d\t%d", &n, &m);
    int a[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
           a[i][j] = rand () % 21 - 10;
           printf("%3d", a[i][j]);
        }
           printf("\n");
    }

    f1(a, n, m);
    f2(a, n, m);
    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
                if (a[i][1] < a[i+1][1])
                        for (j = 0; j < m; j++)
                            {
                                x = a[i][j];
                                a[i][j] = a[i+1][j];
                                a[i+1][j] = x;
                            }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
           printf("%3d", a[i][j]);
           printf("\n");
    }
    return 0;
}
