//一个字符串（可能包含空格）从前往后读或从后向前读都是一样的称为回文字符串（如 LEVEL ），
//输入多个字符串，判断是否是回文字符串。
//第一行：输入一个正整数 n ，表示字符串个数；
//下面输入 n行，每行一个字符串（包含字母，数字和空格）
//对于每一个字符串输出一行，如果字符串是回文字符串，输出 Yes ，否则输出 No

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    int k;                  //用于计算列数
    while(scanf("%d",&n)!=EOF){
        char a[n][50];
        char b[n][50];
        for(i = 0;i < n;i++){
            gets(a[n]);
        }
        puts(a[0]);
        
    }

    system("pause");
    return 0;

}