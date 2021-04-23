# include <stdio.h>
# include <string.h>

int main ()
{
    char str[55] = "When hunter meet hunter this hunter eats hunter";
    char delim[3] = ", ";
    char *A[55];
    char *B[55];
    A[0] = strtok(str, delim);
    B[0] = A[0];
      int j;
    for (j = 1; j < 55;j++)
        B[j] = "";
    int i = 1;
    int x = 1;
    int k = 0;
    while ((A[i] = strtok(NULL, delim)))
    {
        for (j = 0; j <= i;j++)
              if (strcmp(A[i],B[j]) == 0)
                  k++;
        if (k == 0)
            {
                B[x] = A[i];
                x++;
            }
        i++;
    }
    for (j = 0; j < 55;j++)
        printf(B[j]);
    return 0;
}
