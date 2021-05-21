#include <stdio.h>
#include <string.h>

struct avto
{
    int nomer;
    char pp[30];
    char po[30];
    int vp;
    int vo;
    char a[256];
};

struct avto x[10];

void f1(struct avto x[10], int k)
{
    int i, a, b, c;
    for (i = k; i < k + 1; i++)
    {
        printf("Nomer ");
        scanf("%d", &a);
        x[i].nomer = a;
        printf("Punkt pribitia ");
        scanf("%s", x[i].pp);
        printf("Punkt otpravlenia ");
        scanf("%s", x[i].po);
        printf("Vremy pribitia ");
        scanf("%d", &b);
        x[i].vp = b;
        printf("Vremy otpravlenia ");
        scanf("%d", &c);
        x[i].vo = c;
    }
}

void f2(struct avto x[10], int p)
{
    printf("Kakoi? ");
    scanf("%d", &p);
    struct avto e3 = {0, " ", " ", 0, 0};
    x[p - 1] = e3;
}

void f3(struct avto x[10], int i)
{
    if (x[i].nomer != 0)
    {
        printf("%d\t", x[i].nomer);
        printf("%s\t", x[i].pp);
        printf("%s\t", x[i].po);
        printf("%d\t", x[i].vp);
        printf("%d\n", x[i].vo);
    }
}

void f4(struct avto x[10], int k)
{
    int i, l = 1;
    char s;
    printf("Chto? ");
    scanf("%s", x[l].a);
    for (i = 0; i < k; i++)
    {
        if (strcmp(x[i].pp, x[l].a) == 0)
          f3(x, i);
    }
    printf("\n");
}

int main()
{
    struct avto x[10];
    int n, p, r, k = 3, i;
    struct avto e = {456, "fgh", "rthrt", 809, 456};
    x[0] = e;
    struct avto e1 = {446, "fgk", "rtkkrt", 856, 426};
    x[1] = e1;
    struct avto e2 = {426, "fkk", "rtkkt", 805, 556};
    x[2] = e2;

    for (;;)
    {
        printf("Dob 1\nUdal 2\nVivod 3\nPo nomeru 4\nNaiti 5\nEnd 6\n");
        printf("Komanda ");
        scanf("%d", &n);
        switch (n)
        {
            case 1:
                f1(x, k);
                printf("\n");
                k++;
                break;

            case 2:
                f2(x, p);
                printf("\n");
                break;
            case 3:
                for (i = 0; i < k; i++)
                {
                    f3(x, i);
                    printf("\n");
                }
                break;
            case 4:
                printf("Kakoi? ");
                scanf("%d", &r);
                f3(x, r - 1);
                printf("\n");
                break;
            case 5:
                f4(x, k);
                break;
            case 6:
                return 0;
        }
    }
    return 0;
}
