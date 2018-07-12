#include<stdio.h>

int main(int argc, char const *argv[])
{
    // int c;
    // while((c=getchar() )!=EOF)
    // {
    //    putchar(c);
    // }

    // long nl;
    
    // for( nl = 0; getchar()!=EOF; nl++)
    // {
    //     /* code */
    // }
    // printf(" %ld\n",nl);


    /*打印行数，空格，制表符*/
    int c, nl,nw,nt;
    nl =nw =nt =0;
    
    while((c=getchar()) != EOF)
    {
        
        if (c == '\t') {
           ++nt;
        }
        
        if (c == '\n') {
            ++nl;
        }

        if (c == ' ')
        {
            ++nw;
        }
        
    }
    printf("%d %d %d\n", nt, nl, nw);

    return 0;
}

