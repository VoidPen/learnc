# C程序设计语言笔记

## 第一章 导言

### 1.1 入门

1. Hello world程序
    ```C
    int main (int argc, char const *argv[])
    {
        printf("Hello world!\n");
        return 0;
    }
    ```
2. 一个C语言程序，无论其大小如何，都是由*函数*和*变量*组成的。

### 1.2 变量与算数表达式

1. 在C语言中，所有变量都必须先声明后使用。
1. C语言的基本数据类

    基本数据类型有: int(整型)、float(单精度浮点型)、char(字符--一个字节)、short(短整型)、long(长整型)、double(双精度浮点型)。  
    另外，还存在这些基本数据类型的数组，结构、联合，指向这些类型的指针以及返回这些类型值的函数。
1. while、for语句的循环体可以是用花括号括起来的一条或多条语句，也可以是不用花括号包括的单条语句。if-else语句也有类似的规则。
    ```C
    while(i<j)
        i=2*i;
    ```

### 1.3 for语句

1. C语言及其他语言中，整数除法操作将执行舍位，结果中的任何小数部分都将舍去。
    ```C
    Ce = 5 / 9 * (Ta - 20 ); /*  变动之前 */
    Ce = 5 * (Ta - 20 ) /9; /* 变动之后 */
    ```

1. 待打印字符串：printf(" %d \t %d \n",Ta, Ce);
    ```C
    printf(" %d \t %d \n",Ta, Ce);
    ```
    " %d \t %d \n"为第一个参数，%表示其他的参数之一进行替换的位置，并指定打印的格式。  
    如:%6.1f 表示另一个待打印的数至少占6个字符宽，且小数点后面有一位数字。同理，%.2f 则表示按浮点型打印，小数点后面有两位数字。

1. 整型数与浮点型数的转换规则
    - 如果某个算数运算符的所有操作符均为整型，则执行整型运算。  
    - 如果某个算数运算符有一个浮点型操作数和一个整型操作数，则在开始运算之前整型操作数将会转换为浮点型。

1. C语言通用规则：在允许使用某种类型变量值的任何场所，都可以使用该类型的更复杂表达式。

### 1.4 符号常量

1. #define指令可以把*符号名*（或称为**符号常量**）定义为一个特定的字符。

    #denfine 名字 替换文本

    如：`#define LOWER 0`  

    替换文本可以任是何字符序列。*注意，指令行的末尾没有分号。*

### 1.5 字符输出与输入

1. 类型转换
    > char类型专门存储字符型数据，但任何整型整型(int,short,long)也可以用于存储字符型数据。
2. 区分文件有效数据与结束符。
    > 在没有输入时，getchar函数将返回一个特殊值，这个值称为EOF。  
    > EOF定义在头文件<stdio.h>中，是一个整型数。

#### 1.5.1 文件复制

1. 使用getchar与putchar函数进行输入与输出。

1. 关系运算符号"!="表示不等于。 运算符！=的优先级比赋值运算符=的优先级要高。

#### 1.5.2 字符计数

1. 举例

  ```C
     for(size_t i = 0; i < count; i++)
   ;
   > for循环语句的循环体为空，是在对条件进行测试。
  ```

#### 1.5.3 行计数

1. 单引号中的字符表示一个整型值，该值等于此字符在机器字符集中对应的数值，我们称之为单字符常量。它是小整型数的另一种写法。
    > ‘ \n'代表换行符。
    > ' \t'代表制表符。
    > ’ ‘空。

#### 1.5.4 单词计数

1. 在兼有值与赋值两种功能的表达式中，赋值结合次序是由右至左。

1. 运算符“&&”代表AND（逻辑与），运算符“||”代表逻辑或。&&的等级比||的等级高一级。

1. 由&&和||连接的表达式由左至右求值。

### 1.6 数组

1. 

