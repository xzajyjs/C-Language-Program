#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int s=0,i,n;
    char a[8];
    gets(a);

    n=strlen(a);        //字符串长度n代表输入了几位二进制数

    for(i=0;i<n;i++)    //循环检查输入二进制数的1

    {

    if(a[i]=='1')         //如果为1，开始计算转换为十进制

    s=s+pow(2,n-i-1);continue;

    }

    printf("%x\n",s);//%x输出十六进制 
    system("pause");
    return 0;
}
