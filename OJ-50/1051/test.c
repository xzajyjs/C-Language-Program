//绝对素数：他的反位数也是素数，先输入N组输入
//如果一个正整数是素数，它的反位数也是素数，这称这样的数称为绝对素数。
//编写程序判断输入的正整数是否为绝对素数。是，输出 1 , 否则输出 0 .
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n = 0;
    int a,b;
    scanf("%d",&i);
    while(n < i){
        scanf("%d",&a);
        b = a;                  //b用作稍后逐位取模的临时负载
        int sum = 0;

        //搞出b的反位数
        while(b!=0){
            sum *=10;
            sum += (b % 10);
            b /= 10;
        }
        //printf("%d\n",sum);               验证用输出a的反位数
        //此时a为原数，sum为其反位数

        int j,k;
        for(j = a - 1;j > 0; j--){
            
            if(a % j == 0)
            break;
        }
        for(k = sum - 1;k > 0;k--){
            if(sum % k == 0)
            break;
        }
        if(j == 1 && k ==1)
        printf("1\n");
        else
        printf("0\n");
        n++;
    }
    system("pause");
    return 0;



}