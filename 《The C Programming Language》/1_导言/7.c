#include <stdio.h>

// 声明函数原型
// 如果函数的定义、用法与函数原型不一致，将出现错误
// 函数原型与函数声明中参数名不要求相同，函数原型中的参数名是可选的
int power(int m, int n);

main(){
    int i;
    for(i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

//自定义函数：求底数的n次幂，n>=0 
int power(int base, int n){
    int i, p;

    p = 1;
    for(i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

// 函数定义可以以任意次序出现在一个源文件或多个源文件中，但同一函数不能分割存放在多个文件中

// main本身也是函数，向调用者——程序的执行环境返回一个值
// 返回0表示正常终止、返回值非0表示出现异常情况或出错结束条件