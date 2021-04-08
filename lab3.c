#include <stdio.h>
#include <math.h>
int main()
{
    double x0, h, n, x, f;
    int i;
    printf("Vvedite shag h");
    scanf ("%lf", &h);
    printf("x\t\t f(x)\n");
    printf("------------------------\n");
    x0 = 0;
    n = 1.6 / h;
    i = 0;
    while (i <= n)
    {
        x = x0 + i * h;
        if (x <= 0.6)
            f = 1 / (1 + 25 * x * x);
        else
            f = (x + 2 * x * x * x * x) * sin (x * x);
        printf("%lf\t\t %5.4lf\n", x, f);
        i++;
    }
    return 0;
}
