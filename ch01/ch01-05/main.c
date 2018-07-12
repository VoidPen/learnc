#include <stdio.h>

#define IN  1
#define OUT 0


int main(int argc, char const *argv[])
{
    /*打印单词数*/
    int c ,nw ,nl ,nc ,status;
    status =OUT;
    nl=nw=nc=0;

    while ((c = getchar()) != EOF)
    {
        ++nc;               //字符
        if (c == '\n')
        {
            ++nl;           //行数
        }

        if(c == ' ' || c == '\t' || c == '\n') 
        {
            status = OUT;   //当输入的为非单词的状态。不打印。
        }
        else
        {
            if (status == OUT)
            {
                status = IN;
                ++nw;           //单词数增加
           }   
       }
    }
   
   

   

    return 0;
}

