#include <stdio.h>

#define IN 1
#define OUT 0

main(){
    int c, nl, nw, nc, state;

    state = OUT;
//对于线性算法，我们可以以状态机的观点来看待
//每次输入都会根据当前的状态形成一个输出（操作）并引起状态的迁移
//在此处我们定义两种状态，一种状态是OUT表示，当前字符不在单词中；IN状态表示在单词中
//对于一个新的输入需要进行判断，如果新的输入字符不属于单词字符，则状态迁移到OUT
//如果新的字符属于单词字符，而当前状态处于OUT，则单词计数器nw+1,并且状态迁移到IN
    //如果当前处于IN则保持当前状态不作处理
    nl = nw = nc = 0;
    while((c = getchar()) != EOF){  
        ++nc;
        if(c == '\n')
            ++nl;
        //由$$或||连接的表达式由左至右求值，并保证在求值过程中只要能够判断最终的结果为真或假，求值就立即终止        
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d \n", nl, nw, nc);
}