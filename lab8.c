#include <ctype.h>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int mygetch()
{
    struct termios oldt, newt;
    int c;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    c = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return c;
}

int main()
{
    char a;
    for (;;)
    {
        a = mygetch();
        if (a != 27)
        {
          if (isalnum(a))
                  printf("%d\n", a);
          else
                  printf("%c\n", a);
        }
        else
        {
            a = mygetch();
            if (a != 91)
                {
                  if (isalnum(a))
                          printf("%d\n", a);
                  else
                          printf("%c\n", a);
                }
            else
            {
                a = mygetch();
                if (a != 50)
                {
                  if (isalnum(a))
                          printf("%d\n", a);
                  else
                          printf("%c\n", a);
                }
                else
                {
                    a = mygetch();
                    if (a != 126)
                    {
                      if (isalnum(a))
                              printf("%d\n", a);
                      else
                              printf("%c\n", a);
                    }
                    else
                        return 0;
                }
            }
        }
    }
    return 0;
}
