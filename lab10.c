#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void f1(int n, int m, int a[n][m])
{
    int i, j;
    for (i = 0;i < n;i++)
        for (j = 0;j < m;j++)
            a[i][j] = rand () % 21 - 10;
}
void f2(int n, int m, int a[n][m])
{
    int i, j;
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    printf("\n");
}
int main()
{
    srand(time (NULL));
    int n, m, x, i ,j, k;
    printf("Vvedite n and m\n");
    scanf ("%d\t%d", &n, &m);
    int **a = (int **) malloc (n* sizeof(int*));
    if (!a)
        {
            printf ("Memory allocation error !\ n");
            exit (EXIT_FAILURE);
        }
    for (i = 0;i < n;i++)
        p [ i ] = malloc ( m * sizeof ( int ) ) ;
    for (i = 0; i < n ; i ++)
        for ( j = 0;j < m;j++)
            a [ i ][ j ] = i * m + j + 1;
    for (i = 0;i < n;i ++)
        free (a[ i ]);
    free (a);
    int a[n][m];
    f1(n, m, a);
    f2(n, m, a);
    for (k = 0; k < n; k++)
        for (i = 0; i < n - 1; i++)
            if (a[i][0] < a[i+1][0])
                for (j = 0; j < m; j++)
                {
                    x = a[i][j];
                    a[i][j] = a[i+1][j];
                    a[i+1][j] = x;
                }
    f2(n, m, a);
    return 0;
}
