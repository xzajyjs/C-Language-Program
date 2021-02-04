//任给两个正整数 N、M，求一个最小的正整数 a，使得 a 和 (M - a) 都是 N 的因子
#include<stdio.h>
int main()
{
    int n = 0,i,j;
    int M,N;
    scanf("%d",&i);
    while(n < i){
        scanf("%d %d",&N,&M);
        for(j =1;j < M;j++){
            if(N%j == 0 && N%(M-j) == 0)
            break;
        }
        if(j == M)
            printf("-1\n");
        else
            printf("%d\n",j);
        n++;
            

    }
    return 0;


}