#include <stdio.h>
#include <math.h>
int f1(int n)
{
    if (n >= 10)
        printf("%d", n % 10);
    else
        printf("%d", n);
    n = n / 10;
    if (n >= 10)
        f1(n);
}

int f2(int n)
{
    int i = 0;
    while (n > 0)
    {
        i = i * 10 + n % 10;
        n = n / 10;
    }
    return i;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f1(n));
    printf("%d", f2(n));
    return 0;
}
