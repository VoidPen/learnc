#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STE 20

int main(int argc, char const *argv[])
{
    /* 第一次打印int类型 */
    // int  fahr ,celsius;
    // int lower , upper , step;

    // lower= 0;
    // upper= 300;
    // step= 20;
    // fahr =lower;
    
    // while(fahr<=upper){
    //     celsius = 5 * (fahr - 32) /9;
    //     printf("%d \t %d \n", fahr,celsius);
    //     fahr =fahr +20;
    // }


    /* 第二次打印为float类型，并设置打印宽度及打印类型 */
    // float  fahr ,celsius;
    // float lower , upper , step;

    // lower= 0;
    // upper= 300;
    // step= 20;
    // fahr =lower;

    // while(fahr<=upper){
    //     celsius = 5 * (fahr - 32) /9;
    //     printf("%3.0f\t %6.2f \n", fahr,celsius);
    //     fahr =fahr +20;
    // }
 
    /* 第三次大打印新增标题 */
    // float fahr, celsius;
    // float lower , upper , step;

    // lower= 0;
    // upper= 300;
    // step= 20;
    // fahr =lower;
    // printf("Fahrenheit -  Celsius Print\n");
    // while(fahr<=upper)
    // {
    //     celsius = 5 * (fahr - 32) /9;
    //     printf("%3.0f\t %6.2f \n", fahr,celsius);
    //     fahr =fahr +20;
    // }

    /* 简化语句：使用for语句 */
    // int fahr;
    // for (fahr =0; fahr <=300; fahr =fahr +20)
    // {
    //     printf("%3d \t %6.1f \n", fahr, 5.0 * (fahr - 32) / 9.0);
    // }

    /* 改变温度转换程序，逆序打印 */
    // int fahr;
    // for(fahr = 300; fahr >= 0 ; fahr = fahr - 20)
    // {
    //     printf("%3d \t %6.1f \n", fahr, 5.0 * (fahr - 32) / 9.0);
    // }

    /* 使用#define指令行,打印 */
    // int fahr;
    // for( fahr = LOWER; fahr <= UPPER ; fahr = fahr + STE)
    // {
    //      printf("%3d \t %6.1f \n", fahr, 5.0 * (fahr - 32) / 9.0);
    // }

    // return 0;
}
