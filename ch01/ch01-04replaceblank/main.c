#include<stdio.h>


int main(int argc, char const *argv[])
{
    /*将连续空格用一个空格表示*/
    int c, lastc;
    lastc = '!';

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
        }
        else
        {
            if (lastc != ' ')
            {
                putchar(c);
            }
        }
        lastc = c;
    }

    return 0;
}
