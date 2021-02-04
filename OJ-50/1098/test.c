//给定一个整数，输出它的所有素数因子
//思路：从2开始除，当整除时，将除出的商接着上述操作。

#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int i;
        for(i = 2;i <= num;i++){
            if(num%i==0){
            printf("%d ",i);
            num /= i;
            i = 1;
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}