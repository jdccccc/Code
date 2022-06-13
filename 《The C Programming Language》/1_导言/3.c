#include<stdio.h>
main(){
    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}

//C语言中，在允许使用某种类型变量值的任何场合，都可以使用该类型的更复杂的表达式
