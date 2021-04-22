# include <stdio.h>
# include <string.h>

int main ()
{
    char str[50] = "When hunter meets hunter this hunter eats hunter";
    char delim[3] = ", ";
    char *A[50];
    char *B[50];
    A[0] = strtok(str, delim);
    printf(A[0]);
    int i = 1;
    int j;
    while ((A[i] = strtok(NULL, delim)))
    {
        for (j = 0; j < ;j++)
              if (strcmp(A[i],B[j]) != 0)
                  B[j] = A[i];
      i++;
    }
    return 0;
}
