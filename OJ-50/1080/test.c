//找出三位的水仙花数：各位立方和为本身
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    for(i = 100;i < 1000;i++){
        if(i == (i/100) * (i/100) * (i/100)+ (i/10%10) * (i/10%10) * (i/10%10) + (i % 10)*(i % 10)*(i % 10))
        printf("%d\n",i);
    }
    system("pause");
    return 0;
}
