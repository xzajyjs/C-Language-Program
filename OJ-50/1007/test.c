//求a,b,c额公约数
#include<stdio.h>
int main()
{
    int a,b,c,other1,other2,times,i,j,out;
    scanf("%d\n",&times);
    for(i = 0;i < times;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a < b)
        {
            other1 = a;
            a = b;
            b = other1;

        }
        if(b < c)
        {
            other2 = b;
            b = c;
            c = other2;
        }                           
        if(a < b)
        {
            other1 = a;
            a = b;
            b = other1;

        }                           //此时a>b>c
        
        for(j = c;j > 0;j--)
        {
            if(a%j == 0 &&b%j ==0 && c%j ==0){
                out = j;
                break;
            }

            
        }
        if(out > 1)
        printf("%d\n",out);
        else
        printf("1\n");
        
        

    }
    
    getchar();
    getchar();
    return 0;
}