#include <stdio.h>
#include <string.h>

int main()
{
    char str[66];
    scanf("%[^\n]", &str);
    printf("%s\n", str);
}
