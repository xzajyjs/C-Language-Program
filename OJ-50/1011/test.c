//转换成二进制
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
            for(i = 0;a >= 1;i++)
            {
                c = a % 2;
                nums[i] = c;
                a /= 2;
            }
            j = i;
            

            for(i = j-1;i >= 0;i--)
            {
                printf("%d",nums[i]);
            }
            printf("\n");
        }
    }
    
    
    
    
    getchar();
    getchar();
    return 0;
}