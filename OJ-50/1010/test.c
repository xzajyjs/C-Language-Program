//转换成8进制
#include<stdio.h>
int main()
{
    int a,i,j,k,times;
    int c;                            //b为商，c为余数
    int nums[48];                       //a / 2 = b-----c
    while(scanf("%d",&times)!=EOF)
    {
        for(k = 0;k < times;k++)
        {
            scanf("%d",&a);
            printf("%o\n",a);
            
        }
    }
    
    
    
    
    getchar();
    getchar();
    return 0;
}