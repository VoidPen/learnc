#include<stdio.h>

#define IN 1
#define OUT 0

// 以每行一个单词的形式打印输入
int main(int argc, char const *argv[])
{
    int status , c;
    status = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            // 此条输入为非单词状态
            if (status == IN) //判断此输入之前的状态，当之前的状态为输入单词
            {                 //输出换行指令，更改当前状态为OUT（输入为非单词状态）
                putchar('\n');
                status = OUT;
            } 
        }
        else
        {   //当前输入为单词，打印单词。
                status = IN;
                putchar(c);  
        }
    }
    return 0;
}

