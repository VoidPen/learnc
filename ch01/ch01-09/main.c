#include<stdio.h>

int power(int m, int n);


int main(int argc, char const *argv[])
{//求冥函数
    int i;
    for(i = 0; i < 10; ++i)
    {
        printf("%3d %7d %9d\n", power(2, i), power(-4, i), power(6, i));
    }
    return 0;
}

int power(int m, int n)
{
    int i, p;
    p = 1;
    
    for( i = 1; i <= n; ++i)
    {
        p = p * m;

    }
    return p;
}