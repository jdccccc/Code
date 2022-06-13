#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getline(line, MAXLINE)) > 0)
        if(len > max){
            max = len;
            copy(longest, line);
        }

    if(max > 0)
        printf("%s", longest);
    return 0;
}


// 在getline函数中没有必要指明数组s的长度，该数组的大小是在main函数中设置的
// main和getline之间通过一对参数及一个返回值进行数据交换
// getline函数是安全的，当数组满时它将停止读字符
int getline(char s[], int lim){
    int c, i;
    for(i = 0; i < lim-1 && (c =  getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// copy函数的实现依赖于输入参数由'\0'结束
void copy(char to[], char from[]){
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}