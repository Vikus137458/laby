#include <stdio.h>
#include <stdlib.h>
# include <time.h>
void f(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        a[i] = rand () % 21 - 10;
}
void f2(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
    printf("\n");
}
int main()
{
    srand(time (NULL));
    int i, s, max, n, min1, min2;
    printf("Vvedite n\t");
    scanf ("%d", &n);
    int a[n];
    f(n, a);
    f2(n, a);
    max = -41;
    min1 = min2 = 11;
    for (i = 0; i < n ; i++)
    {
        if ((i + 1) != n)
            s = a[i] + a[i + 1];
        if (s > max)
            max = s;
        if (a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else
        if (a[i] < min2)
            min2 = a[i];
    }
    printf ("%d\t%d\t%d\n", max, min1, min2);
    for (i = 0; i < n ; i++)
    {
        if (a[i] == min1 || a[i] == min2)
            a[i] = a[i] + max;
        printf("%3d", a[i]);
    }
    printf("\n");
    return 0;
}
