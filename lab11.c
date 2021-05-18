#include <stdio.h>
#include <string.h>

struct book
{
    char nomer[256];
    char pp[30];
    char po[30];
    char vp[256];
    char vo[256];
};

void f1(int n, int a[5])
{
    int i, j;
		for (j = 0; j < n; j++)
		for (i = 0; i < 5; i++)
    {
        scanf("%s", &a[i].nomer);
        scanf("%s", &a[i].pp);
        scanf("%s", &a[i].po);
        scanf("%s", &a[i].vp);
        scanf("%s", &a[i].vo);
    }


}

int main()
{
		struct book x[3];
    struct book e = {"456", "fgh", "rthrt", "809", "456"};
    x[0] = e;
    struct book e1 = {"446", "fgk", "rtkkrt", "856", "426"};
    x[1] = e1;
    struct book e2 = {"426", "fkk", "rtkkt", "805", "4556"};
    x[2] = e2;

    int i, n;
    char s[30];
		scanf("%d", &n);

    // printf("Vvedite avtobusy: \n");
    // for (i = 0; i < 5; i++)
    // {
    //     scanf("%s", &x[i].nomer);
    //     scanf("%s", &x[i].pp);
    //     scanf("%s", &x[i].po);
    //     scanf("%s", &x[i].vp);
    //     scanf("%s", &x[i].vo);
    // }

    printf("Vvedite punkt pribitia: ");
    scanf("%s", &s);

    printf("\n");
    for (i = 0; i < 3; i++)
    {
        if (strcmp(x[i].pp, s) == 0)
        {
            printf("%s\t", x[i].nomer);
            printf("%s\t", x[i].pp);
            printf("%s\t", x[i].po);
            printf("%s\t", x[i].vp);
            printf("%s\n", x[i].vo);
        }
    }
    return 0;
}
