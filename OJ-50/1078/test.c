//将一组整数循环向左移动，移出的数放到这组数的最后
/* 第一行：正整数 n 表示数据的个数 ( n<100 ) ;

    第二行：正整数 k 表示移动的数据个数

    第三行：要操作的数据，每个数据之间用一个空格分开；
*/
#include<stdio.h>
int main()
{
    int num[100];
    int n,k,i,a;
    while(scanf("%d",&n)!=EOF){
         scanf("%d",&k);
    for(i = 0;i < n;i++){
        scanf("%d",&num[i]);
    }
    for(i = k;i < n;i++)
    printf("%d ",num[i]);
    for(i = 0;i < k;i++)
    printf("%d ",num[i]);
    printf("\n");
    }
    return 0;
    

}