#include <stdio.h>
#include <string.h>

int main()
{
    // char str[] = "When hunter meet hunter this hunter eats hunter";
    char str[66];
    scanf("%[^\n]", &str);
    // char str[] = "I love you you very love much";
    char delim[] = ", ";
    char *A[55];
    char *B[55];
    A[0] = strtok(str, delim);
    B[0] = A[0];
    int j;
    for (j = 1; j < 55; j++)
        B[j] = "";
    int i = 1;
    int x = 1;
    int k = 0;
    while ((A[i] = strtok(NULL, delim)))
    {
        for (j = 0; j <= i; j++)
            if (strcmp(A[i], B[j]) == 0)
                k++;
        if (k == 0)
        {
            B[x] = A[i];
            x++;
        }
        else
            for (j = 0; j <= i; j++)
                if (strcmp(A[i], B[j]) == 0)
                    B[j] = "";
        i++;
        k = 0;
    }
    for (j = 0; j < 55; j++)
    {
        if (strcmp("", B[j]) != 0)
        {
            printf(B[j]);
            printf("\t");
        }
    }
    return 0;
}
