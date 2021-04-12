#include <stdio.h>
#include <math.h>
double f(double x)
{
  if (x <= 0.6)
      return 1.0 / (1.0 + 25.0 * x * x);
  else
      return (x + 2.0 * x * x * x * x) * sin (x * x);
}
int main()
{
    double h2, x, s1, s2, e, d;
    int j, n;
    printf("Vvedite e");
    scanf ("%lf", &e);
    n = 2;
    d = s1 = 1000.0;
    while (d >= e)
    {
        s2 = 0.0;
        for (j = 0; j <= 2 * n - 1; j++)
        {
            h2 = 1.6 / (2.0 * n);
            x = j * h2 + h2 / 2.0;
            s2 = s2 + f(x);
        }
        s2 = h2 * s2;
        d = fabs(s2 - s1) / 3.0;
        printf("%lf\t%lf\t%d\n", s2, d, n);
        s1 = s2;
        n = 2 * n;
   }
    printf("%lf\n", s2);
    return 0;
}
