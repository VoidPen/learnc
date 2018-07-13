#include<stdio.h>
#define MAXLINE 1000     /* 允许的输入行的最大值 */

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);


int main(int argc, char const *argv[])
{
    int len, max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;

    while ((len = mygetline(line, MAXLINE)) > 0)
    {
        // 打印最长的输入行
        // if (len > max)
        // {
        //     max = len ;
        //     copy(longest, line);
        // }
        if (len > 60)
        {
            printf("%s", line);
        }
    }

    // if (max > 0)
    // {
    //     printf("%s", longest);
    // }
   
    return 0;
}

int mygetline(char s[], int lim)
{
    int c, i;
    
    for(i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    } 

    if (c == '\n') 
    {
       s[i] = c;
       ++i;
    }
    
    s[i] = '\0';

    return i;
}

void copy( char to[], char from[])
{
    int i = 0;

    while((to[i] = from[i]) !='\0')
    {
        ++i;
    }
}
