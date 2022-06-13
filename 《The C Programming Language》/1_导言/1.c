#include <stdio.h>  //包含标准库的信息

main(){             //定义名为main的函数，它不接受参数值             
    printf("Hello,world!\n");   //main函数调用库函数printf以显示字符序列
}                   //main函数的语句都被括在花括号当中

//编译
//$ gcc code.c -o code.out

//执行
//$ ./code.out

//C语言程序主体由函数构成（面向过程
//每个程序都会从main函数的起点开始执行

//注意：在printf函数的参数中，只能用\n表示换行符。