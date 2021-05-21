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

struct book x[10];

char f1(struct book x[10], int k)
{
    int i;
		for (i = k; i < k + 1; i++)
    {
        printf("Nomer ");
        scanf("%s", &x[i].nomer);
        printf("Punkt pribitia ");
        scanf("%s", &x[i].pp);
        printf("Punkt otpravlenia ");
        scanf("%s", &x[i].po);
        printf("Vremy pribitia  ");
        scanf("%s", &x[i].vp);
        printf("Vremy otpravlenia ");
        scanf("%s", &x[i].vo);
    }
}

void f2(struct book x[10], int p)
{
    printf("Kakoi? ")
    scanf("%d", &p)
		struct book e3 = {" ", " ", " ", " ", " "};
		x[p - 1] = e3;
		printf("%s", x[p]);
}

void f3(struct book x[10], int i)
{
    printf("%s\t", x[i].nomer);
    printf("%s\t", x[i].pp);
    printf("%s\t", x[i].po);
    printf("%s\t", x[i].vp);
    printf("%s\n", x[i].vo);
}

void f4(char s, struct book x[5])
{
    int i;
		for (i = 0; i < 5; i++)
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
}

int main()
{
		struct book x[5];
    struct book e = {"456", "fgh", "rthrt", "809", "456"};
    x[0] = e;
    struct book e1 = {"446", "fgk", "rtkkrt", "856", "426"};
    x[1] = e1;
    struct book e2 = {"426", "fkk", "rtkkt", "805", "4556"};
    x[2] = e2;

    int i;
    char s[30];
    int k = 3;
    f1(x);
    printf("Vvedite punkt pribitia: ");
    scanf("%s", &s);
    printf("\n");
		f4(s, x);
		f2(x);
		f4(s, x);
    return 0;
}
