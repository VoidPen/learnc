#include<stdio.h>
#define MAXLINE  1000

int t_getline(char line[], int maxline);
void copy(char to[], char from[]);

//打印输入最长一行


int main(int argc, char const *argv[])
{
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];
    // 打印最长行
    while((len = t_getline(line, MAXLINE)) > 0 )
    {
        printf("%d, %s", len, line);
        if (len > max) 
        {
            max = len;
            copy(longest, line);
        }

    }

    if(max > 0)
    {
        printf("%s", longest);
    }
    
    return 0;
}
// 定义长度函数Tgetline
int t_getline(char s[], int lim)
{
    int c, i;
    for( i = 0; i < (lim - 1) && ((c = getchar()) != EOF) && c != '\n'; i++)
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

void copy(char to[], char from[])
{
    int i = 0;
    
    while((to[i] = from[i]) !='\0')
    {
       ++i;
    }  
}


