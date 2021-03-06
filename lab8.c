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
        if (a != 27 && (a < 79 || a > 83) && (a < 70 || a > 72))
        {
            if (a != 126)
            {
                if (isalnum(a))
                    printf("%d\n", a);
                else
                    printf("%d\n", a);
            }
            else
            {
            }
        }
        else
        {
            a = mygetch();
            if (a == 91)
            {
                a = mygetch();
                if (a == 50)
                {
                    a = mygetch();
                    if (a == 126)
                        return 0;
                }
                else if ((a < 53 || a > 57) && a != 91)
                    a = mygetch();
            }
        }
    }
    return 0;
}
