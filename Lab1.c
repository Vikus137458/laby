#include <stdio.h>

int main()
{
    int c1, c2, c3, r, m;
    float c;
    printf("Введите первый параметр ->");
    scanf("%d", &c1);
    printf("Введите второй параметр ->");
    scanf("%d", &c2);
    printf("Введите третий параметр ->");
    scanf("%d", &c3);
    if ((c1 > c2) && (c1 > c3))
        m = c1;
    else
        if (c2 > c3)
            m = c2;
        else
            m = c3;
    printf("m = %d\n", m);
    if ((m % 3) == 0)
    {
        if (m == c1)
        {
            r = m - 5;
            printf("r=%d", r);
        }
        else
            if (m == c2)
            {
                r = m - 4;
                printf("r=%d", r);
            }
            else
            {
                r = m - 3;
                printf("r=%d", r);
            }
    }
    else
        if (m == c1)
        {
            c = 5./m;
            printf("c=%f", c);
        }
        else
            if (m == c2)
            {
                c = 4./m;
                printf("c=%f", c);
            }
            else
            {
                c = 3./m;
                printf("c=%f", c);
            }
    return 0;
}
