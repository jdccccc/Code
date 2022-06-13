#include <stdio.h>

main(){
    long nc;

    nc = 0;
    while(getchar() != EOF){
        ++nc;
    }

    // for(nc = 0; getchar() != EOF; ++nc)
    //     ;
    printf("%ld\n", nc);
}

//double比long有更大的处理范围