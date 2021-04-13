#include <stdio.h>
int f(int n){
    //化到最底层的情况即是f(1)+f(2),然后便可“归”
    if(n == 1 || n == 2)return 1;
    int res;
    res = f(n-1)+f(n-2);
    return res;
}
int main(){
    int choose;
    printf("递归练习之---求斐波那契数\n\n");
    while(1){
        printf("第几个：");
        scanf("%d",&choose);
        printf("第%d个斐波那契数为%d\n",choose,f(choose));
    }
    return 0;
}