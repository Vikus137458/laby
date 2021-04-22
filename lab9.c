# include <stdio.h>
# include <string.h>

int main ()
{
    char s[10];
    scanf("%s", s);
    char A[10];
    char s3[1] = " ";
    char s1[10] = "";
      int i = k = 0;
      int j;
     while (i < strlen(s))
     {
         
         while (s[i] != s3)
         {
           strcat (s1, s[i]);
           i++;
         }
        i++;
        A[k] = s1;
        k++;
        for (j = 0;j < 10;j++)
            if A[j] != A[k]
                printf ("%c", A[k]);   
     }
    return 0;
}

