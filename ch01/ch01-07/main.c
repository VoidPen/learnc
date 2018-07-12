#include<stdio.h>


/*统计各个数字，空白符及其他字符出现的次数*/
int main(int argc, char const *argv[])
{
    int c, nwhite, onther, i;
    nwhite = onther = 0;
    int ndigit[10];
    
    for(i = 0; i < 10; i++)
    {
        ndigit[i] =0;       //初始化数组
    }
    
    while((c = getchar()) != EOF)
    {
        if (c >= '0'&& c <= '9') 
        {
            ++ndigit[c - '0'];      //
        }        
        else
        {
            
            if (c == ' ' || c == '\n' || c == '\t') 
            {
                ++nwhite;   //输入为空白符、换行符、制表符的条件下，空白数增加。
            }
            else
            {
                ++onther;   //其他字符数增加
            }
        }
    }

    printf("digits = ");
    for (i = 0; i < 10; i++)
    {
        printf(" %d\n", ndigit[i]);
    }
    printf(", nwhite = %d ,nother = %d\n", nwhite, onther);

    return 0;
}
