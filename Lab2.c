#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z;
    printf("Enter x { 2.04 < x && x < 2.23607 } ->");
    scanf("%f", &x) ;
    if (x > 2.04 && x < 2.23607)
    {
        y = - log (x + 2) - log (x - 2);
        printf ("y(x) = %f\n", y);
        z = sqrt (3 * y - y * y * y);
        printf("z(y) = %f\n ", z);
    }
    else
        printf("x value is incorrect !\n");
    return 0;
}
