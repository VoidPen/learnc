#include<stdio.h>

#define EOF (-1)
#define IN  (1)
#define OUT (0)

int main(int argc, char const *argv[])
{   
    // 初始化
    int status, i, j, c, len;
    int numbers[10];

    for(i = 0; i < 10; ++i)
    {
        numbers[i] = 0;
    }

    // 统计单词长度
    status = OUT;
    while((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (status == IN)
            {
                if (len >= 0 && len <= 9)
                {
                    ++numbers[len];
                }
                status = OUT;
            }
        }
        else
        {
            if (status == OUT)
            {
                len = 0;
                status = IN;
            }
            ++len;
        }
    }
    
    // 查找单词长度最大值
    int max_value = 0;
    for (i = 0; i < 10; ++i)
    {
        if (numbers[i] > max_value)
        {
            max_value = numbers[i];
        }
    }

    // 打印单词长度
#define MAX_COL 50
    for (i = 0; i < 10; ++i)
    {
        printf("%2d - %3d/%d: ", i, numbers[i], max_value);
        for (j = 0; j < (numbers[i] / (float)max_value) * MAX_COL; ++j)
        {
            printf("=");
        }
        printf("\n");
    }

    return 0;
}

void test()
{
#define MAXCHAR 128 

    int c;
    int cnumbers[MAXCHAR];

    while((c = getchar()) != EOF)
    {
        if (c < MAXCHAR)
        {
            ++cnumbers[c];
        }
    }
    int i = '0';
    printf("%d", cnumbers[i]);
}
