// 函数中的每个局部变量只在函数被调用时存在，在函数执行完毕退出时消失。
// 如果自动变量没有赋值，则其中存放的是无效值
// 除自动变量外，还可以定义位于所有函数外部的变量,在所有函数中都可以通过变量名访问这种类型的变量

// 函数在使用外部变量值之前，必须要知道外部变量的名字。
// 1.在函数中使用extern类型的声明
// 2.源文件中，如果外部变量的定义出现在使用它的函数之前，那么在那个函数中就没有必要使用extern声明

// 如果程序包含在多个源文件中，而某个变量在file1文件中定义、在file2和file3文件中使用
// 那么在文件file2和file3中就需要使用extern声明来建立该变量与其定义之间的联系
// 人们通常把变量和函数的extern声明放在一個单独的文件中（习惯上称为头文件）
// 并在每个源文件的开头使用#include语句把所要用的头文件包含进来。
// 后缀名.h月定位头文件名的扩展名

// ANSI C语言把空参数表看成老版本C语言的声明方式，并且对参数表不再进行任何检查
// 在ANSI C 中，如果要声明空参数表，则必须使用关键字void进行显示声明

// 定义define表示创建变量或分配存储单元
// 声明declaration指的是说明变量的性质，并不分配存储单元